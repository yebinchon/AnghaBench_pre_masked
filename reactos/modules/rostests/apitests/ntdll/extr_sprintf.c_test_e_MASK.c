
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 double VAR_0 ;
 double VAR_1 ;
 int FUNC_0 (char*,char*) ;
 int FUNC_1 (char*,char*,double) ;

void
FUNC_2()
{
    char VAR_2[128];
    long double VAR_3;

    VAR_3 = 1. / 3.;
    FUNC_1(VAR_2, "%e", VAR_3);
    FUNC_0(VAR_2, "-3.720662e-103");

    VAR_3 = 1. / 3.;
    FUNC_1(VAR_2, "%e", (double)VAR_3);
    FUNC_0(VAR_2, "3.333333e-001");

    FUNC_1(VAR_2, "%e", 33.54223);
    FUNC_0(VAR_2, "3.354223e+001");

    FUNC_1(VAR_2, "%e", VAR_1);
    FUNC_0(VAR_2, "1.#QNAN0e+000");

    FUNC_1(VAR_2, "%.9e", VAR_1);
    FUNC_0(VAR_2, "1.#QNAN0000e+000");

    FUNC_1(VAR_2, "%e", VAR_0 );
    FUNC_0(VAR_2, "1.#INF00e+000");

    FUNC_1(VAR_2, "%e", -VAR_0 );
    FUNC_0(VAR_2, "-1.#INF00e+000");


}
