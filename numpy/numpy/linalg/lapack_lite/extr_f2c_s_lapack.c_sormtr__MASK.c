
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int real ;
typedef int logical ;
typedef int integer ;
typedef int ftnlen ;
typedef char* address ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,int) ;
 int FUNC_1 (char*,char**,int*,int *,int ) ;

int FUNC_2(char *VAR_3, char *VAR_4, char *VAR_5, integer *VAR_6,
 integer *VAR_7, real *VAR_8, integer *VAR_9, real *VAR_10, real *VAR_11, integer *VAR_12,
  real *VAR_13, integer *VAR_14, integer *VAR_15)
{

    address VAR_16[2];
    integer VAR_17, VAR_18, VAR_19, VAR_20, VAR_21[2], VAR_22, VAR_23;
    char VAR_24[2];


    static integer VAR_25, VAR_26, VAR_27, VAR_28, VAR_29, VAR_30, VAR_31;
    static logical VAR_32;
    extern logical FUNC_3(char *, char *);
    static integer VAR_33;
    static logical VAR_34;
    extern int FUNC_4(char *, integer *);
    extern integer FUNC_5(integer *, char *, char *, integer *, integer *,
     integer *, integer *, ftnlen, ftnlen);
    extern int FUNC_6(char *, char *, integer *, integer *,
     integer *, real *, integer *, real *, real *, integer *, real *,
     integer *, integer *);
    static integer VAR_35;
    static logical VAR_36;
    extern int FUNC_7(char *, char *, integer *, integer *,
     integer *, real *, integer *, real *, real *, integer *, real *,
     integer *, integer *);
    VAR_17 = *VAR_9;
    VAR_18 = 1 + VAR_17;
    VAR_8 -= VAR_18;
    --VAR_10;
    VAR_19 = *VAR_12;
    VAR_20 = 1 + VAR_19;
    VAR_11 -= VAR_20;
    --VAR_13;


    *VAR_15 = 0;
    VAR_32 = FUNC_3(VAR_3, "L");
    VAR_34 = FUNC_3(VAR_4, "U");
    VAR_36 = *VAR_14 == -1;



    if (VAR_32) {
 VAR_30 = *VAR_6;
 VAR_31 = *VAR_7;
    } else {
 VAR_30 = *VAR_7;
 VAR_31 = *VAR_6;
    }
    if (! VAR_32 && ! FUNC_3(VAR_3, "R")) {
 *VAR_15 = -1;
    } else if (! VAR_34 && ! FUNC_3(VAR_4, "L")) {
 *VAR_15 = -2;
    } else if (! FUNC_3(VAR_5, "N") && ! FUNC_3(VAR_5,
     "T")) {
 *VAR_15 = -3;
    } else if (*VAR_6 < 0) {
 *VAR_15 = -4;
    } else if (*VAR_7 < 0) {
 *VAR_15 = -5;
    } else if (*VAR_9 < FUNC_0(1,VAR_30)) {
 *VAR_15 = -7;
    } else if (*VAR_12 < FUNC_0(1,*VAR_6)) {
 *VAR_15 = -10;
    } else if (*VAR_14 < FUNC_0(1,VAR_31) && ! VAR_36) {
 *VAR_15 = -12;
    }

    if (*VAR_15 == 0) {
 if (VAR_34) {
     if (VAR_32) {

  VAR_21[0] = 1, VAR_16[0] = VAR_3;
  VAR_21[1] = 1, VAR_16[1] = VAR_5;
  FUNC_1(VAR_24, VAR_16, VAR_21, &VAR_1, (ftnlen)2);
  VAR_22 = *VAR_6 - 1;
  VAR_23 = *VAR_6 - 1;
  VAR_27 = FUNC_5(&VAR_0, "SORMQL", VAR_24, &VAR_22, VAR_7, &VAR_23, &VAR_2, (
   ftnlen)6, (ftnlen)2);
     } else {

  VAR_21[0] = 1, VAR_16[0] = VAR_3;
  VAR_21[1] = 1, VAR_16[1] = VAR_5;
  FUNC_1(VAR_24, VAR_16, VAR_21, &VAR_1, (ftnlen)2);
  VAR_22 = *VAR_7 - 1;
  VAR_23 = *VAR_7 - 1;
  VAR_27 = FUNC_5(&VAR_0, "SORMQL", VAR_24, VAR_6, &VAR_22, &VAR_23, &VAR_2, (
   ftnlen)6, (ftnlen)2);
     }
 } else {
     if (VAR_32) {

  VAR_21[0] = 1, VAR_16[0] = VAR_3;
  VAR_21[1] = 1, VAR_16[1] = VAR_5;
  FUNC_1(VAR_24, VAR_16, VAR_21, &VAR_1, (ftnlen)2);
  VAR_22 = *VAR_6 - 1;
  VAR_23 = *VAR_6 - 1;
  VAR_27 = FUNC_5(&VAR_0, "SORMQR", VAR_24, &VAR_22, VAR_7, &VAR_23, &VAR_2, (
   ftnlen)6, (ftnlen)2);
     } else {

  VAR_21[0] = 1, VAR_16[0] = VAR_3;
  VAR_21[1] = 1, VAR_16[1] = VAR_5;
  FUNC_1(VAR_24, VAR_16, VAR_21, &VAR_1, (ftnlen)2);
  VAR_22 = *VAR_7 - 1;
  VAR_23 = *VAR_7 - 1;
  VAR_27 = FUNC_5(&VAR_0, "SORMQR", VAR_24, VAR_6, &VAR_22, &VAR_23, &VAR_2, (
   ftnlen)6, (ftnlen)2);
     }
 }
 VAR_35 = FUNC_0(1,VAR_31) * VAR_27;
 VAR_13[1] = (real) VAR_35;
    }

    if (*VAR_15 != 0) {
 VAR_22 = -(*VAR_15);
 FUNC_4("SORMTR", &VAR_22);
 return 0;
    } else if (VAR_36) {
 return 0;
    }



    if (*VAR_6 == 0 || *VAR_7 == 0 || VAR_30 == 1) {
 VAR_13[1] = 1.f;
 return 0;
    }

    if (VAR_32) {
 VAR_28 = *VAR_6 - 1;
 VAR_29 = *VAR_7;
    } else {
 VAR_28 = *VAR_6;
 VAR_29 = *VAR_7 - 1;
    }

    if (VAR_34) {



 VAR_22 = VAR_30 - 1;
 FUNC_6(VAR_3, VAR_5, &VAR_28, &VAR_29, &VAR_22, &VAR_8[(VAR_17 << 1) + 1], VAR_9, &
  VAR_10[1], &VAR_11[VAR_20], VAR_12, &VAR_13[1], VAR_14, &VAR_33);
    } else {



 if (VAR_32) {
     VAR_25 = 2;
     VAR_26 = 1;
 } else {
     VAR_25 = 1;
     VAR_26 = 2;
 }
 VAR_22 = VAR_30 - 1;
 FUNC_7(VAR_3, VAR_5, &VAR_28, &VAR_29, &VAR_22, &VAR_8[VAR_17 + 2], VAR_9, &VAR_10[1], &
  VAR_11[VAR_25 + VAR_26 * VAR_19], VAR_12, &VAR_13[1], VAR_14, &VAR_33);
    }
    VAR_13[1] = (real) VAR_35;
    return 0;



}
