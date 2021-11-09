#pragma once
#include <iostream>
using namespace std;
class Fraction
{
private:
    int m_numerator;
    int m_denominator;
public:
    Fraction(int numerator,  int denominator);
    Fraction(const Fraction &copy);
    int gcd (int a, int b);
    Fraction proper_Fraction(Fraction f);
    void printFraction();
    int getNumerator() const;
    int getDenominator() const;
    static Fraction getFraction(Fraction f);
    static Fraction get_sum(Fraction f1, Fraction f2);
    static Fraction get_product(Fraction f1, Fraction f2);
    static Fraction get_quotient(Fraction f1, Fraction f2);
};
bool operator==(const Fraction& a, const Fraction& b);
void solution();