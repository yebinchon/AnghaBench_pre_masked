
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int integer ;
typedef int doublereal ;



int FUNC_0(integer *VAR_0, doublereal *VAR_1, integer *VAR_2)
{

    integer VAR_3;
    doublereal VAR_4;


    static doublereal VAR_5;
    static integer VAR_6;
    static doublereal VAR_7, VAR_8, VAR_9, VAR_10, VAR_11, VAR_12, VAR_13, VAR_14, VAR_15;
    extern doublereal FUNC_1(doublereal *, doublereal *);
    VAR_5 = *VAR_1;
    VAR_13 = 1.;
    VAR_15 = VAR_13 / *VAR_2;
    VAR_14 = 0.;
    *VAR_0 = 1;
    VAR_4 = VAR_5 * VAR_15;
    VAR_7 = FUNC_1(&VAR_4, &VAR_14);
    VAR_9 = VAR_5;
    VAR_10 = VAR_5;
    VAR_11 = VAR_5;
    VAR_12 = VAR_5;




L10:
    if (VAR_9 == VAR_5 && VAR_10 == VAR_5 && VAR_11 == VAR_5 && VAR_12 == VAR_5) {
 --(*VAR_0);
 VAR_5 = VAR_7;
 VAR_4 = VAR_5 / *VAR_2;
 VAR_7 = FUNC_1(&VAR_4, &VAR_14);
 VAR_4 = VAR_7 * *VAR_2;
 VAR_9 = FUNC_1(&VAR_4, &VAR_14);
 VAR_11 = VAR_14;
 VAR_3 = *VAR_2;
 for (VAR_6 = 1; VAR_6 <= VAR_3; ++VAR_6) {
     VAR_11 += VAR_7;

 }
 VAR_4 = VAR_5 * VAR_15;
 VAR_8 = FUNC_1(&VAR_4, &VAR_14);
 VAR_4 = VAR_8 / VAR_15;
 VAR_10 = FUNC_1(&VAR_4, &VAR_14);
 VAR_12 = VAR_14;
 VAR_3 = *VAR_2;
 for (VAR_6 = 1; VAR_6 <= VAR_3; ++VAR_6) {
     VAR_12 += VAR_8;

 }
 goto L10;
    }


    return 0;



}
