
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int integer ;
typedef int doublereal ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;

int FUNC_2(doublereal *VAR_0, doublereal *VAR_1, doublereal *VAR_2,
 doublereal *VAR_3, doublereal *VAR_4, doublereal *VAR_5, doublereal *VAR_6)
{

    doublereal VAR_7;


    static doublereal VAR_8, VAR_9, VAR_10, VAR_11, VAR_12, VAR_13, VAR_14, VAR_15, VAR_16, VAR_17;
    static integer VAR_18, VAR_19;
    static doublereal VAR_20, VAR_21;
    VAR_13 = *VAR_0 + *VAR_2;
    VAR_9 = *VAR_0 - *VAR_2;
    VAR_16 = FUNC_0(VAR_9);
    VAR_12 = *VAR_1 + *VAR_1;
    VAR_8 = FUNC_0(VAR_12);
    if (FUNC_0(*VAR_0) > FUNC_0(*VAR_2)) {
 VAR_21 = *VAR_0;
 VAR_20 = *VAR_2;
    } else {
 VAR_21 = *VAR_2;
 VAR_20 = *VAR_0;
    }
    if (VAR_16 > VAR_8) {

 VAR_7 = VAR_8 / VAR_16;
 VAR_15 = VAR_16 * FUNC_1(VAR_7 * VAR_7 + 1.);
    } else if (VAR_16 < VAR_8) {

 VAR_7 = VAR_16 / VAR_8;
 VAR_15 = VAR_8 * FUNC_1(VAR_7 * VAR_7 + 1.);
    } else {



 VAR_15 = VAR_8 * FUNC_1(2.);
    }
    if (VAR_13 < 0.) {
 *VAR_3 = (VAR_13 - VAR_15) * .5;
 VAR_18 = -1;







 *VAR_4 = VAR_21 / *VAR_3 * VAR_20 - *VAR_1 / *VAR_3 * *VAR_1;
    } else if (VAR_13 > 0.) {
 *VAR_3 = (VAR_13 + VAR_15) * .5;
 VAR_18 = 1;







 *VAR_4 = VAR_21 / *VAR_3 * VAR_20 - *VAR_1 / *VAR_3 * *VAR_1;
    } else {



 *VAR_3 = VAR_15 * .5;
 *VAR_4 = VAR_15 * -.5;
 VAR_18 = 1;
    }



    if (VAR_9 >= 0.) {
 VAR_10 = VAR_9 + VAR_15;
 VAR_19 = 1;
    } else {
 VAR_10 = VAR_9 - VAR_15;
 VAR_19 = -1;
    }
    VAR_17 = FUNC_0(VAR_10);
    if (VAR_17 > VAR_8) {
 VAR_11 = -VAR_12 / VAR_10;
 *VAR_6 = 1. / FUNC_1(VAR_11 * VAR_11 + 1.);
 *VAR_5 = VAR_11 * *VAR_6;
    } else {
 if (VAR_8 == 0.) {
     *VAR_5 = 1.;
     *VAR_6 = 0.;
 } else {
     VAR_14 = -VAR_10 / VAR_12;
     *VAR_5 = 1. / FUNC_1(VAR_14 * VAR_14 + 1.);
     *VAR_6 = VAR_14 * *VAR_5;
 }
    }
    if (VAR_18 == VAR_19) {
 VAR_14 = *VAR_5;
 *VAR_5 = -(*VAR_6);
 *VAR_6 = VAR_14;
    }
    return 0;



}
