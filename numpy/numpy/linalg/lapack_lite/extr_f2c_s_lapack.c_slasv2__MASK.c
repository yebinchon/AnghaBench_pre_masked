
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef float real ;
typedef int logical ;
typedef int integer ;
typedef float doublereal ;


 int VAR_0 ;
 int VAR_1 ;
 float VAR_2 ;
 float VAR_3 ;
 float FUNC_0 (float) ;
 float FUNC_1 (float*,float*) ;
 float FUNC_2 (float) ;

int FUNC_3(real *VAR_4, real *VAR_5, real *VAR_6, real *VAR_7, real *
 VAR_8, real *VAR_9, real *VAR_10, real *VAR_11, real *VAR_12)
{

    real VAR_13;


    static real VAR_14, VAR_15, VAR_16, VAR_17, VAR_18, VAR_19, VAR_20, VAR_21, VAR_22, VAR_23, VAR_24, VAR_25, VAR_26, VAR_27, VAR_28, VAR_29,
     VAR_30, VAR_31, VAR_32;
    static integer VAR_33;
    static real VAR_34;
    static logical VAR_35;
    static real VAR_36;
    static logical VAR_37;
    extern doublereal FUNC_4(char *);
    VAR_24 = *VAR_4;
    VAR_21 = FUNC_0(VAR_24);
    VAR_26 = *VAR_6;
    VAR_23 = FUNC_0(*VAR_6);
    VAR_33 = 1;
    VAR_35 = VAR_23 > VAR_21;
    if (VAR_35) {
 VAR_33 = 3;
 VAR_34 = VAR_24;
 VAR_24 = VAR_26;
 VAR_26 = VAR_34;
 VAR_34 = VAR_21;
 VAR_21 = VAR_23;
 VAR_23 = VAR_34;



    }
    VAR_25 = *VAR_5;
    VAR_22 = FUNC_0(VAR_25);
    if (VAR_22 == 0.f) {



 *VAR_7 = VAR_23;
 *VAR_8 = VAR_21;
 VAR_29 = 1.f;
 VAR_30 = 1.f;
 VAR_31 = 0.f;
 VAR_32 = 0.f;
    } else {
 VAR_37 = VAR_1;
 if (VAR_22 > VAR_21) {
     VAR_33 = 2;
     if (VAR_21 / VAR_22 < FUNC_4("EPS")) {



  VAR_37 = VAR_0;
  *VAR_8 = VAR_22;
  if (VAR_23 > 1.f) {
      *VAR_7 = VAR_21 / (VAR_22 / VAR_23);
  } else {
      *VAR_7 = VAR_21 / VAR_22 * VAR_23;
  }
  VAR_29 = 1.f;
  VAR_31 = VAR_26 / VAR_25;
  VAR_32 = 1.f;
  VAR_30 = VAR_24 / VAR_25;
     }
 }
 if (VAR_37) {



     VAR_15 = VAR_21 - VAR_23;
     if (VAR_15 == VAR_21) {



  VAR_16 = 1.f;
     } else {
  VAR_16 = VAR_15 / VAR_21;
     }



     VAR_17 = VAR_25 / VAR_24;



     VAR_20 = 2.f - VAR_16;



     VAR_27 = VAR_17 * VAR_17;
     VAR_28 = VAR_20 * VAR_20;
     VAR_19 = FUNC_2(VAR_28 + VAR_27);



     if (VAR_16 == 0.f) {
  VAR_18 = FUNC_0(VAR_17);
     } else {
  VAR_18 = FUNC_2(VAR_16 * VAR_16 + VAR_27);
     }



     VAR_14 = (VAR_19 + VAR_18) * .5f;



     *VAR_7 = VAR_23 / VAR_14;
     *VAR_8 = VAR_21 * VAR_14;
     if (VAR_27 == 0.f) {



  if (VAR_16 == 0.f) {
      VAR_20 = FUNC_1(&VAR_3, &VAR_24) * FUNC_1(&VAR_2, &VAR_25);
  } else {
      VAR_20 = VAR_25 / FUNC_1(&VAR_15, &VAR_24) + VAR_17 / VAR_20;
  }
     } else {
  VAR_20 = (VAR_17 / (VAR_19 + VAR_20) + VAR_17 / (VAR_18 + VAR_16)) * (VAR_14 + 1.f);
     }
     VAR_16 = FUNC_2(VAR_20 * VAR_20 + 4.f);
     VAR_30 = 2.f / VAR_16;
     VAR_32 = VAR_20 / VAR_16;
     VAR_29 = (VAR_30 + VAR_32 * VAR_17) / VAR_14;
     VAR_31 = VAR_26 / VAR_24 * VAR_32 / VAR_14;
 }
    }
    if (VAR_35) {
 *VAR_12 = VAR_32;
 *VAR_11 = VAR_30;
 *VAR_10 = VAR_31;
 *VAR_9 = VAR_29;
    } else {
 *VAR_12 = VAR_29;
 *VAR_11 = VAR_31;
 *VAR_10 = VAR_30;
 *VAR_9 = VAR_32;
    }



    if (VAR_33 == 1) {
 VAR_36 = FUNC_1(&VAR_2, VAR_10) * FUNC_1(&VAR_2, VAR_12) * FUNC_1(&VAR_2, VAR_4);
    }
    if (VAR_33 == 2) {
 VAR_36 = FUNC_1(&VAR_2, VAR_9) * FUNC_1(&VAR_2, VAR_12) * FUNC_1(&VAR_2, VAR_5);
    }
    if (VAR_33 == 3) {
 VAR_36 = FUNC_1(&VAR_2, VAR_9) * FUNC_1(&VAR_2, VAR_11) * FUNC_1(&VAR_2,
  VAR_6);
    }
    *VAR_8 = FUNC_1(VAR_8, &VAR_36);
    VAR_13 = VAR_36 * FUNC_1(&VAR_2, VAR_4) * FUNC_1(&VAR_2, VAR_6);
    *VAR_7 = FUNC_1(VAR_7, &VAR_13);
    return 0;



}
