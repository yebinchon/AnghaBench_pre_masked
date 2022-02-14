
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int logical ;
typedef int integer ;
typedef int doublereal ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int*,int*) ;
 int FUNC_2 (int) ;

int FUNC_3(doublereal *VAR_5, doublereal *VAR_6, doublereal *VAR_7,
 doublereal *VAR_8, doublereal *VAR_9, doublereal *VAR_10, doublereal *
 VAR_11, doublereal *VAR_12, doublereal *VAR_13)
{

    doublereal VAR_14;


    static doublereal VAR_15, VAR_16, VAR_17, VAR_18, VAR_19, VAR_20, VAR_21, VAR_22, VAR_23, VAR_24, VAR_25, VAR_26, VAR_27, VAR_28, VAR_29,
      VAR_30, VAR_31, VAR_32, VAR_33;
    static integer VAR_34;
    static doublereal VAR_35;
    static logical VAR_36;
    static doublereal VAR_37;

    static logical VAR_38;
    VAR_25 = *VAR_5;
    VAR_22 = FUNC_0(VAR_25);
    VAR_27 = *VAR_7;
    VAR_24 = FUNC_0(*VAR_7);
    VAR_34 = 1;
    VAR_36 = VAR_24 > VAR_22;
    if (VAR_36) {
 VAR_34 = 3;
 VAR_35 = VAR_25;
 VAR_25 = VAR_27;
 VAR_27 = VAR_35;
 VAR_35 = VAR_22;
 VAR_22 = VAR_24;
 VAR_24 = VAR_35;



    }
    VAR_26 = *VAR_6;
    VAR_23 = FUNC_0(VAR_26);
    if (VAR_23 == 0.) {



 *VAR_8 = VAR_24;
 *VAR_9 = VAR_22;
 VAR_30 = 1.;
 VAR_31 = 1.;
 VAR_32 = 0.;
 VAR_33 = 0.;
    } else {
 VAR_38 = VAR_2;
 if (VAR_23 > VAR_22) {
     VAR_34 = 2;
     if (VAR_22 / VAR_23 < VAR_0) {



  VAR_38 = VAR_1;
  *VAR_9 = VAR_23;
  if (VAR_24 > 1.) {
      *VAR_8 = VAR_22 / (VAR_23 / VAR_24);
  } else {
      *VAR_8 = VAR_22 / VAR_23 * VAR_24;
  }
  VAR_30 = 1.;
  VAR_32 = VAR_27 / VAR_26;
  VAR_33 = 1.;
  VAR_31 = VAR_25 / VAR_26;
     }
 }
 if (VAR_38) {



     VAR_16 = VAR_22 - VAR_24;
     if (VAR_16 == VAR_22) {



  VAR_17 = 1.;
     } else {
  VAR_17 = VAR_16 / VAR_22;
     }



     VAR_18 = VAR_26 / VAR_25;



     VAR_21 = 2. - VAR_17;



     VAR_28 = VAR_18 * VAR_18;
     VAR_29 = VAR_21 * VAR_21;
     VAR_20 = FUNC_2(VAR_29 + VAR_28);



     if (VAR_17 == 0.) {
  VAR_19 = FUNC_0(VAR_18);
     } else {
  VAR_19 = FUNC_2(VAR_17 * VAR_17 + VAR_28);
     }



     VAR_15 = (VAR_20 + VAR_19) * .5;



     *VAR_8 = VAR_24 / VAR_15;
     *VAR_9 = VAR_22 * VAR_15;
     if (VAR_28 == 0.) {



  if (VAR_17 == 0.) {
      VAR_21 = FUNC_1(&VAR_4, &VAR_25) * FUNC_1(&VAR_3, &VAR_26);
  } else {
      VAR_21 = VAR_26 / FUNC_1(&VAR_16, &VAR_25) + VAR_18 / VAR_21;
  }
     } else {
  VAR_21 = (VAR_18 / (VAR_20 + VAR_21) + VAR_18 / (VAR_19 + VAR_17)) * (VAR_15 + 1.);
     }
     VAR_17 = FUNC_2(VAR_21 * VAR_21 + 4.);
     VAR_31 = 2. / VAR_17;
     VAR_33 = VAR_21 / VAR_17;
     VAR_30 = (VAR_31 + VAR_33 * VAR_18) / VAR_15;
     VAR_32 = VAR_27 / VAR_25 * VAR_33 / VAR_15;
 }
    }
    if (VAR_36) {
 *VAR_13 = VAR_33;
 *VAR_12 = VAR_31;
 *VAR_11 = VAR_32;
 *VAR_10 = VAR_30;
    } else {
 *VAR_13 = VAR_30;
 *VAR_12 = VAR_32;
 *VAR_11 = VAR_31;
 *VAR_10 = VAR_33;
    }



    if (VAR_34 == 1) {
 VAR_37 = FUNC_1(&VAR_3, VAR_11) * FUNC_1(&VAR_3, VAR_13) * FUNC_1(&VAR_3, VAR_5);
    }
    if (VAR_34 == 2) {
 VAR_37 = FUNC_1(&VAR_3, VAR_10) * FUNC_1(&VAR_3, VAR_13) * FUNC_1(&VAR_3, VAR_6);
    }
    if (VAR_34 == 3) {
 VAR_37 = FUNC_1(&VAR_3, VAR_10) * FUNC_1(&VAR_3, VAR_12) * FUNC_1(&VAR_3,
  VAR_7);
    }
    *VAR_9 = FUNC_1(VAR_9, &VAR_37);
    VAR_14 = VAR_37 * FUNC_1(&VAR_3, VAR_5) * FUNC_1(&VAR_3, VAR_7);
    *VAR_8 = FUNC_1(VAR_8, &VAR_14);
    return 0;



}
