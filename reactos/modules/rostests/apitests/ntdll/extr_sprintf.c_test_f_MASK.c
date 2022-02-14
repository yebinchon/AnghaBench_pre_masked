
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,char*) ;
 int FUNC_1 (char*,char*,int) ;

void
FUNC_2()
{
    char VAR_0[128];
    long double VAR_1;

    VAR_1 = 1. / 3.;
    FUNC_1(VAR_0, "%f", VAR_1);
    FUNC_0(VAR_0, "-0.000000");

    FUNC_1(VAR_0, "%lf", VAR_1);
    FUNC_0(VAR_0, "-0.000000");

    FUNC_1(VAR_0, "%llf", VAR_1);
    FUNC_0(VAR_0, "-0.000000");

    FUNC_1(VAR_0, "%Lf", VAR_1);
    FUNC_0(VAR_0, "-0.000000");

    FUNC_1(VAR_0, "%f", (double)VAR_1);
    FUNC_0(VAR_0, "0.333333");

    FUNC_1(VAR_0, "%f", (double)0.125);
    FUNC_0(VAR_0, "0.125000");

    FUNC_1(VAR_0, "%3.7f", (double)VAR_1);
    FUNC_0(VAR_0, "0.3333333");

    FUNC_1(VAR_0, "%3.30f", (double)VAR_1);
    FUNC_0(VAR_0, "0.333333333333333310000000000000");

    FUNC_1(VAR_0, "%3.60f", (double)VAR_1);
    FUNC_0(VAR_0, "0.333333333333333310000000000000000000000000000000000000000000");

    FUNC_1(VAR_0, "%3.80f", (double)VAR_1);
    FUNC_0(VAR_0, "0.33333333333333331000000000000000000000000000000000000000000000000000000000000000");

    VAR_1 = 1. / 0.;
    FUNC_1(VAR_0, "%f", VAR_1);
    FUNC_0(VAR_0, "0.000000");

    FUNC_1(VAR_0, "%f", 0x7ff8000000000000ULL);
    FUNC_0(VAR_0, "1.#QNAN0");

    FUNC_1(VAR_0, "%.9f", 0x7ff8000000000000ULL);
    FUNC_0(VAR_0, "1.#QNAN0000");

    FUNC_1(VAR_0, "%f", 0x7ff0000000000000ULL );
    FUNC_0(VAR_0, "1.#INF00");

    FUNC_1(VAR_0, "%f", 0xfff0000000000000ULL );
    FUNC_0(VAR_0, "-1.#INF00");

    FUNC_1(VAR_0, "%f", 0xfff8000000000000ULL);
    FUNC_0(VAR_0, "-1.#IND00");

}
