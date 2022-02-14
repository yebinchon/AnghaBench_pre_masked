
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ logical ;
typedef int integer ;
typedef int doublereal ;


 int VAR_0 ;

int FUNC_0(integer *VAR_1, integer *VAR_2, integer *VAR_3,
 logical *VAR_4, integer *VAR_5, doublereal *VAR_6)
{

    integer VAR_7;
    doublereal VAR_8;


    static integer VAR_9;
    static doublereal VAR_10, VAR_11;
    static integer VAR_12, VAR_13;
    static doublereal VAR_14;
    static integer VAR_15, VAR_16;
    extern doublereal FUNC_1(doublereal *, doublereal *);
    static doublereal VAR_17;
    static integer VAR_18, VAR_19;
    VAR_13 = 1;
    VAR_18 = 1;
L10:
    VAR_12 = VAR_13 << 1;
    if (VAR_12 <= -(*VAR_3)) {
 VAR_13 = VAR_12;
 ++VAR_18;
 goto L10;
    }
    if (VAR_13 == -(*VAR_3)) {
 VAR_15 = VAR_13;
    } else {
 VAR_15 = VAR_12;
 ++VAR_18;
    }







    if (VAR_15 + *VAR_3 > -VAR_13 - *VAR_3) {
 VAR_19 = VAR_13 << 1;
    } else {
 VAR_19 = VAR_15 << 1;
    }






    *VAR_5 = VAR_19 + *VAR_3 - 1;
    VAR_16 = VAR_18 + 1 + *VAR_2;






    if (VAR_16 % 2 == 1 && *VAR_1 == 2) {
 --(*VAR_5);
    }

    if (*VAR_4) {






 --(*VAR_5);
    }
    VAR_17 = 1. / *VAR_1;
    VAR_11 = *VAR_1 - 1.;
    VAR_10 = 0.;
    VAR_7 = *VAR_2;
    for (VAR_9 = 1; VAR_9 <= VAR_7; ++VAR_9) {
 VAR_11 *= VAR_17;
 if (VAR_10 < 1.) {
     VAR_14 = VAR_10;
 }
 VAR_10 = FUNC_1(&VAR_10, &VAR_11);

    }
    if (VAR_10 >= 1.) {
 VAR_10 = VAR_14;
    }



    VAR_7 = *VAR_5;
    for (VAR_9 = 1; VAR_9 <= VAR_7; ++VAR_9) {
 VAR_8 = VAR_10 * *VAR_1;
 VAR_10 = FUNC_1(&VAR_8, &VAR_0);

    }

    *VAR_6 = VAR_10;
    return 0;



}
