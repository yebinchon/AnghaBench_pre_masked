
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int integer ;
typedef int doublereal ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int,int) ;
 int FUNC_3 (int*,int*) ;
 int FUNC_4 (int) ;

int FUNC_5(doublereal *VAR_3, doublereal *VAR_4, doublereal *VAR_5,
 doublereal *VAR_6, doublereal *VAR_7)
{

    integer VAR_8;
    doublereal VAR_9, VAR_10;


    static integer VAR_11;
    static doublereal VAR_12, VAR_13, VAR_14, VAR_15;
    static integer VAR_16;
    static doublereal VAR_17, VAR_18;

    static doublereal VAR_19;
    VAR_19 = VAR_2;
    VAR_14 = VAR_1;
    VAR_9 = VAR_0;
    VAR_8 = (integer) (FUNC_1(VAR_19 / VAR_14) / FUNC_1(VAR_0) / 2.);
    VAR_17 = FUNC_3(&VAR_9, &VAR_8);
    VAR_18 = 1. / VAR_17;




    if (*VAR_4 == 0.) {
 *VAR_5 = 1.;
 *VAR_6 = 0.;
 *VAR_7 = *VAR_3;
    } else if (*VAR_3 == 0.) {
 *VAR_5 = 0.;
 *VAR_6 = 1.;
 *VAR_7 = *VAR_4;
    } else {
 VAR_12 = *VAR_3;
 VAR_13 = *VAR_4;

 VAR_9 = FUNC_0(VAR_12), VAR_10 = FUNC_0(VAR_13);
 VAR_15 = FUNC_2(VAR_9,VAR_10);
 if (VAR_15 >= VAR_18) {
     VAR_16 = 0;
L10:
     ++VAR_16;
     VAR_12 *= VAR_17;
     VAR_13 *= VAR_17;

     VAR_9 = FUNC_0(VAR_12), VAR_10 = FUNC_0(VAR_13);
     VAR_15 = FUNC_2(VAR_9,VAR_10);
     if (VAR_15 >= VAR_18) {
  goto L10;
     }

     VAR_9 = VAR_12;

     VAR_10 = VAR_13;
     *VAR_7 = FUNC_4(VAR_9 * VAR_9 + VAR_10 * VAR_10);
     *VAR_5 = VAR_12 / *VAR_7;
     *VAR_6 = VAR_13 / *VAR_7;
     VAR_8 = VAR_16;
     for (VAR_11 = 1; VAR_11 <= VAR_8; ++VAR_11) {
  *VAR_7 *= VAR_18;

     }
 } else if (VAR_15 <= VAR_17) {
     VAR_16 = 0;
L30:
     ++VAR_16;
     VAR_12 *= VAR_18;
     VAR_13 *= VAR_18;

     VAR_9 = FUNC_0(VAR_12), VAR_10 = FUNC_0(VAR_13);
     VAR_15 = FUNC_2(VAR_9,VAR_10);
     if (VAR_15 <= VAR_17) {
  goto L30;
     }

     VAR_9 = VAR_12;

     VAR_10 = VAR_13;
     *VAR_7 = FUNC_4(VAR_9 * VAR_9 + VAR_10 * VAR_10);
     *VAR_5 = VAR_12 / *VAR_7;
     *VAR_6 = VAR_13 / *VAR_7;
     VAR_8 = VAR_16;
     for (VAR_11 = 1; VAR_11 <= VAR_8; ++VAR_11) {
  *VAR_7 *= VAR_17;

     }
 } else {

     VAR_9 = VAR_12;

     VAR_10 = VAR_13;
     *VAR_7 = FUNC_4(VAR_9 * VAR_9 + VAR_10 * VAR_10);
     *VAR_5 = VAR_12 / *VAR_7;
     *VAR_6 = VAR_13 / *VAR_7;
 }
 if (FUNC_0(*VAR_3) > FUNC_0(*VAR_4) && *VAR_5 < 0.) {
     *VAR_5 = -(*VAR_5);
     *VAR_6 = -(*VAR_6);
     *VAR_7 = -(*VAR_7);
 }
    }
    return 0;



}
