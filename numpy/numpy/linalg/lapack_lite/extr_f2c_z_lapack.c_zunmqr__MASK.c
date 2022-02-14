
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int logical ;
typedef int integer ;
typedef int ftnlen ;
typedef void* doublereal ;
struct TYPE_6__ {int r; int i; } ;
typedef TYPE_1__ doublecomplex ;
typedef char* address ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int,int) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (char*,char**,int*,int*,int ) ;
 int FUNC_3 (char*,int*) ;

int FUNC_4(char *VAR_4, char *VAR_5, integer *VAR_6, integer *VAR_7,
 integer *VAR_8, doublecomplex *VAR_9, integer *VAR_10, doublecomplex *VAR_11,
 doublecomplex *VAR_12, integer *VAR_13, doublecomplex *VAR_14, integer *VAR_15,
  integer *VAR_16)
{

    address VAR_17[2];
    integer VAR_18, VAR_19, VAR_20, VAR_21, VAR_22, VAR_23, VAR_24[2], VAR_25,
     VAR_26;
    char VAR_27[2];


    static integer VAR_28;
    static doublecomplex VAR_29[4160] ;
    static integer VAR_30, VAR_31, VAR_32, VAR_33, VAR_34, VAR_35, VAR_36, VAR_37, VAR_38, VAR_39, VAR_40, VAR_41;
    static logical VAR_42;
    extern logical FUNC_5(char *, char *);
    static integer VAR_43, VAR_44;
    extern int FUNC_6(char *, char *, integer *, integer *,
     integer *, doublecomplex *, integer *, doublecomplex *,
     doublecomplex *, integer *, doublecomplex *, integer *), FUNC_3(char *, integer *);
    extern integer FUNC_7(integer *, char *, char *, integer *, integer *,
     integer *, integer *, ftnlen, ftnlen);
    extern int FUNC_8(char *, char *, char *, char *,
     integer *, integer *, integer *, doublecomplex *, integer *,
     doublecomplex *, integer *, doublecomplex *, integer *,
     doublecomplex *, integer *);
    static logical VAR_45;
    static integer VAR_46;
    extern int FUNC_9(char *, char *, integer *, integer *,
     doublecomplex *, integer *, doublecomplex *, doublecomplex *,
     integer *);
    static integer VAR_47;
    static logical VAR_48;
    VAR_18 = *VAR_10;
    VAR_19 = 1 + VAR_18;
    VAR_9 -= VAR_19;
    --VAR_11;
    VAR_20 = *VAR_13;
    VAR_21 = 1 + VAR_20;
    VAR_12 -= VAR_21;
    --VAR_14;


    *VAR_16 = 0;
    VAR_42 = FUNC_5(VAR_4, "L");
    VAR_45 = FUNC_5(VAR_5, "N");
    VAR_48 = *VAR_15 == -1;



    if (VAR_42) {
 VAR_39 = *VAR_6;
 VAR_40 = *VAR_7;
    } else {
 VAR_39 = *VAR_7;
 VAR_40 = *VAR_6;
    }
    if (! VAR_42 && ! FUNC_5(VAR_4, "R")) {
 *VAR_16 = -1;
    } else if (! VAR_45 && ! FUNC_5(VAR_5, "C")) {
 *VAR_16 = -2;
    } else if (*VAR_6 < 0) {
 *VAR_16 = -3;
    } else if (*VAR_7 < 0) {
 *VAR_16 = -4;
    } else if (*VAR_8 < 0 || *VAR_8 > VAR_39) {
 *VAR_16 = -5;
    } else if (*VAR_10 < FUNC_0(1,VAR_39)) {
 *VAR_16 = -7;
    } else if (*VAR_13 < FUNC_0(1,*VAR_6)) {
 *VAR_16 = -10;
    } else if (*VAR_15 < FUNC_0(1,VAR_40) && ! VAR_48) {
 *VAR_16 = -12;
    }

    if (*VAR_16 == 0) {
 VAR_24[0] = 1, VAR_17[0] = VAR_4;
 VAR_24[1] = 1, VAR_17[1] = VAR_5;
 FUNC_2(VAR_27, VAR_17, VAR_24, &VAR_1, (ftnlen)2);
 VAR_22 = 64, VAR_23 = FUNC_7(&VAR_0, "ZUNMQR", VAR_27, VAR_6, VAR_7, VAR_8, &VAR_3, (
  ftnlen)6, (ftnlen)2);
 VAR_36 = FUNC_1(VAR_22,VAR_23);
 VAR_47 = FUNC_0(1,VAR_40) * VAR_36;
 VAR_14[1].r = (doublereal) VAR_47, VAR_14[1].i = 0.;
    }

    if (*VAR_16 != 0) {
 VAR_22 = -(*VAR_16);
 FUNC_3("ZUNMQR", &VAR_22);
 return 0;
    } else if (VAR_48) {
 return 0;
    }



    if (*VAR_6 == 0 || *VAR_7 == 0 || *VAR_8 == 0) {
 VAR_14[1].r = 1., VAR_14[1].i = 0.;
 return 0;
    }

    VAR_43 = 2;
    VAR_46 = VAR_40;
    if (VAR_36 > 1 && VAR_36 < *VAR_8) {
 VAR_41 = VAR_40 * VAR_36;
 if (*VAR_15 < VAR_41) {
     VAR_36 = *VAR_15 / VAR_46;




     VAR_24[0] = 1, VAR_17[0] = VAR_4;
     VAR_24[1] = 1, VAR_17[1] = VAR_5;
     FUNC_2(VAR_27, VAR_17, VAR_24, &VAR_1, (ftnlen)2);
     VAR_22 = 2, VAR_23 = FUNC_7(&VAR_1, "ZUNMQR", VAR_27, VAR_6, VAR_7, VAR_8, &VAR_3, (
      ftnlen)6, (ftnlen)2);
     VAR_43 = FUNC_0(VAR_22,VAR_23);
 }
    } else {
 VAR_41 = VAR_40;
    }

    if (VAR_36 < VAR_43 || VAR_36 >= *VAR_8) {



 FUNC_6(VAR_4, VAR_5, VAR_6, VAR_7, VAR_8, &VAR_9[VAR_19], VAR_10, &VAR_11[1], &VAR_12[
  VAR_21], VAR_13, &VAR_14[1], &VAR_44);
    } else {



 if (VAR_42 && ! VAR_45 || ! VAR_42 && VAR_45) {
     VAR_30 = 1;
     VAR_31 = *VAR_8;
     VAR_32 = VAR_36;
 } else {
     VAR_30 = (*VAR_8 - 1) / VAR_36 * VAR_36 + 1;
     VAR_31 = 1;
     VAR_32 = -VAR_36;
 }

 if (VAR_42) {
     VAR_38 = *VAR_7;
     VAR_35 = 1;
 } else {
     VAR_37 = *VAR_6;
     VAR_34 = 1;
 }

 VAR_22 = VAR_31;
 VAR_23 = VAR_32;
 for (VAR_28 = VAR_30; VAR_23 < 0 ? VAR_28 >= VAR_22 : VAR_28 <= VAR_22; VAR_28 += VAR_23) {

     VAR_25 = VAR_36, VAR_26 = *VAR_8 - VAR_28 + 1;
     VAR_33 = FUNC_1(VAR_25,VAR_26);






     VAR_25 = VAR_39 - VAR_28 + 1;
     FUNC_9("Forward", "Columnwise", &VAR_25, &VAR_33, &VAR_9[VAR_28 + VAR_28 *
      VAR_18], VAR_10, &VAR_11[VAR_28], VAR_29, &VAR_2)
      ;
     if (VAR_42) {



  VAR_37 = *VAR_6 - VAR_28 + 1;
  VAR_34 = VAR_28;
     } else {



  VAR_38 = *VAR_7 - VAR_28 + 1;
  VAR_35 = VAR_28;
     }



     FUNC_8(VAR_4, VAR_5, "Forward", "Columnwise", &VAR_37, &VAR_38, &VAR_33, &VAR_9[
      VAR_28 + VAR_28 * VAR_18], VAR_10, VAR_29, &VAR_2, &VAR_12[VAR_34 + VAR_35 *
      VAR_20], VAR_13, &VAR_14[1], &VAR_46);

 }
    }
    VAR_14[1].r = (doublereal) VAR_47, VAR_14[1].i = 0.;
    return 0;



}
