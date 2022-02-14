
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int doublereal ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;

int FUNC_2(doublereal *VAR_0, doublereal *VAR_1, doublereal *VAR_2,
 doublereal *VAR_3, doublereal *VAR_4)
{

    doublereal VAR_5;


    static doublereal VAR_6, VAR_7, VAR_8, VAR_9, VAR_10, VAR_11, VAR_12, VAR_13;
    VAR_9 = *VAR_0 + *VAR_2;
    VAR_7 = *VAR_0 - *VAR_2;
    VAR_11 = FUNC_0(VAR_7);
    VAR_8 = *VAR_1 + *VAR_1;
    VAR_6 = FUNC_0(VAR_8);
    if (FUNC_0(*VAR_0) > FUNC_0(*VAR_2)) {
 VAR_13 = *VAR_0;
 VAR_12 = *VAR_2;
    } else {
 VAR_13 = *VAR_2;
 VAR_12 = *VAR_0;
    }
    if (VAR_11 > VAR_6) {

 VAR_5 = VAR_6 / VAR_11;
 VAR_10 = VAR_11 * FUNC_1(VAR_5 * VAR_5 + 1.);
    } else if (VAR_11 < VAR_6) {

 VAR_5 = VAR_11 / VAR_6;
 VAR_10 = VAR_6 * FUNC_1(VAR_5 * VAR_5 + 1.);
    } else {



 VAR_10 = VAR_6 * FUNC_1(2.);
    }
    if (VAR_9 < 0.) {
 *VAR_3 = (VAR_9 - VAR_10) * .5;







 *VAR_4 = VAR_13 / *VAR_3 * VAR_12 - *VAR_1 / *VAR_3 * *VAR_1;
    } else if (VAR_9 > 0.) {
 *VAR_3 = (VAR_9 + VAR_10) * .5;







 *VAR_4 = VAR_13 / *VAR_3 * VAR_12 - *VAR_1 / *VAR_3 * *VAR_1;
    } else {



 *VAR_3 = VAR_10 * .5;
 *VAR_4 = VAR_10 * -.5;
    }
    return 0;



}
