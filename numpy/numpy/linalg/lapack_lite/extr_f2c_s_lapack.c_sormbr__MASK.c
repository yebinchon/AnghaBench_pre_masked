
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
 int FUNC_1 (int,int) ;
 int FUNC_2 (char*,char**,int*,int *,int ) ;

int FUNC_3(char *VAR_3, char *VAR_4, char *VAR_5, integer *VAR_6,
 integer *VAR_7, integer *VAR_8, real *VAR_9, integer *VAR_10, real *VAR_11, real *VAR_12,
 integer *VAR_13, real *VAR_14, integer *VAR_15, integer *VAR_16)
{

    address VAR_17[2];
    integer VAR_18, VAR_19, VAR_20, VAR_21, VAR_22, VAR_23, VAR_24[2];
    char VAR_25[2];


    static integer VAR_26, VAR_27, VAR_28, VAR_29, VAR_30, VAR_31, VAR_32;
    static logical VAR_33;
    extern logical FUNC_4(char *, char *);
    static integer VAR_34;
    extern int FUNC_5(char *, integer *);
    extern integer FUNC_6(integer *, char *, char *, integer *, integer *,
     integer *, integer *, ftnlen, ftnlen);
    static logical VAR_35, VAR_36;
    static char VAR_37[1];
    extern int FUNC_7(char *, char *, integer *, integer *,
     integer *, real *, integer *, real *, real *, integer *, real *,
     integer *, integer *);
    static integer VAR_38;
    static logical VAR_39;
    extern int FUNC_8(char *, char *, integer *, integer *,
     integer *, real *, integer *, real *, real *, integer *, real *,
     integer *, integer *);
    VAR_18 = *VAR_10;
    VAR_19 = 1 + VAR_18;
    VAR_9 -= VAR_19;
    --VAR_11;
    VAR_20 = *VAR_13;
    VAR_21 = 1 + VAR_20;
    VAR_12 -= VAR_21;
    --VAR_14;


    *VAR_16 = 0;
    VAR_36 = FUNC_4(VAR_3, "Q");
    VAR_33 = FUNC_4(VAR_4, "L");
    VAR_35 = FUNC_4(VAR_5, "N");
    VAR_39 = *VAR_15 == -1;



    if (VAR_33) {
 VAR_31 = *VAR_6;
 VAR_32 = *VAR_7;
    } else {
 VAR_31 = *VAR_7;
 VAR_32 = *VAR_6;
    }
    if (! VAR_36 && ! FUNC_4(VAR_3, "P")) {
 *VAR_16 = -1;
    } else if (! VAR_33 && ! FUNC_4(VAR_4, "R")) {
 *VAR_16 = -2;
    } else if (! VAR_35 && ! FUNC_4(VAR_5, "T")) {
 *VAR_16 = -3;
    } else if (*VAR_6 < 0) {
 *VAR_16 = -4;
    } else if (*VAR_7 < 0) {
 *VAR_16 = -5;
    } else if (*VAR_8 < 0) {
 *VAR_16 = -6;
    } else {

 VAR_22 = 1, VAR_23 = FUNC_1(VAR_31,*VAR_8);
 if (VAR_36 && *VAR_10 < FUNC_0(1,VAR_31) || ! VAR_36 && *VAR_10 < FUNC_0(VAR_22,VAR_23)) {
     *VAR_16 = -8;
 } else if (*VAR_13 < FUNC_0(1,*VAR_6)) {
     *VAR_16 = -11;
 } else if (*VAR_15 < FUNC_0(1,VAR_32) && ! VAR_39) {
     *VAR_16 = -13;
 }
    }

    if (*VAR_16 == 0) {
 if (VAR_36) {
     if (VAR_33) {

  VAR_24[0] = 1, VAR_17[0] = VAR_4;
  VAR_24[1] = 1, VAR_17[1] = VAR_5;
  FUNC_2(VAR_25, VAR_17, VAR_24, &VAR_1, (ftnlen)2);
  VAR_22 = *VAR_6 - 1;
  VAR_23 = *VAR_6 - 1;
  VAR_28 = FUNC_6(&VAR_0, "SORMQR", VAR_25, &VAR_22, VAR_7, &VAR_23, &VAR_2, (
   ftnlen)6, (ftnlen)2);
     } else {

  VAR_24[0] = 1, VAR_17[0] = VAR_4;
  VAR_24[1] = 1, VAR_17[1] = VAR_5;
  FUNC_2(VAR_25, VAR_17, VAR_24, &VAR_1, (ftnlen)2);
  VAR_22 = *VAR_7 - 1;
  VAR_23 = *VAR_7 - 1;
  VAR_28 = FUNC_6(&VAR_0, "SORMQR", VAR_25, VAR_6, &VAR_22, &VAR_23, &VAR_2, (
   ftnlen)6, (ftnlen)2);
     }
 } else {
     if (VAR_33) {

  VAR_24[0] = 1, VAR_17[0] = VAR_4;
  VAR_24[1] = 1, VAR_17[1] = VAR_5;
  FUNC_2(VAR_25, VAR_17, VAR_24, &VAR_1, (ftnlen)2);
  VAR_22 = *VAR_6 - 1;
  VAR_23 = *VAR_6 - 1;
  VAR_28 = FUNC_6(&VAR_0, "SORMLQ", VAR_25, &VAR_22, VAR_7, &VAR_23, &VAR_2, (
   ftnlen)6, (ftnlen)2);
     } else {

  VAR_24[0] = 1, VAR_17[0] = VAR_4;
  VAR_24[1] = 1, VAR_17[1] = VAR_5;
  FUNC_2(VAR_25, VAR_17, VAR_24, &VAR_1, (ftnlen)2);
  VAR_22 = *VAR_7 - 1;
  VAR_23 = *VAR_7 - 1;
  VAR_28 = FUNC_6(&VAR_0, "SORMLQ", VAR_25, VAR_6, &VAR_22, &VAR_23, &VAR_2, (
   ftnlen)6, (ftnlen)2);
     }
 }
 VAR_38 = FUNC_0(1,VAR_32) * VAR_28;
 VAR_14[1] = (real) VAR_38;
    }

    if (*VAR_16 != 0) {
 VAR_22 = -(*VAR_16);
 FUNC_5("SORMBR", &VAR_22);
 return 0;
    } else if (VAR_39) {
 return 0;
    }



    VAR_14[1] = 1.f;
    if (*VAR_6 == 0 || *VAR_7 == 0) {
 return 0;
    }

    if (VAR_36) {



 if (VAR_31 >= *VAR_8) {



     FUNC_8(VAR_4, VAR_5, VAR_6, VAR_7, VAR_8, &VAR_9[VAR_19], VAR_10, &VAR_11[1], &VAR_12[
      VAR_21], VAR_13, &VAR_14[1], VAR_15, &VAR_34);
 } else if (VAR_31 > 1) {



     if (VAR_33) {
  VAR_29 = *VAR_6 - 1;
  VAR_30 = *VAR_7;
  VAR_26 = 2;
  VAR_27 = 1;
     } else {
  VAR_29 = *VAR_6;
  VAR_30 = *VAR_7 - 1;
  VAR_26 = 1;
  VAR_27 = 2;
     }
     VAR_22 = VAR_31 - 1;
     FUNC_8(VAR_4, VAR_5, &VAR_29, &VAR_30, &VAR_22, &VAR_9[VAR_18 + 2], VAR_10, &VAR_11[1]
      , &VAR_12[VAR_26 + VAR_27 * VAR_20], VAR_13, &VAR_14[1], VAR_15, &VAR_34);
 }
    } else {



 if (VAR_35) {
     *(unsigned char *)VAR_37 = 'T';
 } else {
     *(unsigned char *)VAR_37 = 'N';
 }
 if (VAR_31 > *VAR_8) {



     FUNC_7(VAR_4, VAR_37, VAR_6, VAR_7, VAR_8, &VAR_9[VAR_19], VAR_10, &VAR_11[1], &VAR_12[
      VAR_21], VAR_13, &VAR_14[1], VAR_15, &VAR_34);
 } else if (VAR_31 > 1) {



     if (VAR_33) {
  VAR_29 = *VAR_6 - 1;
  VAR_30 = *VAR_7;
  VAR_26 = 2;
  VAR_27 = 1;
     } else {
  VAR_29 = *VAR_6;
  VAR_30 = *VAR_7 - 1;
  VAR_26 = 1;
  VAR_27 = 2;
     }
     VAR_22 = VAR_31 - 1;
     FUNC_7(VAR_4, VAR_37, &VAR_29, &VAR_30, &VAR_22, &VAR_9[(VAR_18 << 1) + 1], VAR_10,
       &VAR_11[1], &VAR_12[VAR_26 + VAR_27 * VAR_20], VAR_13, &VAR_14[1], VAR_15, &
      VAR_34);
 }
    }
    VAR_14[1] = (real) VAR_38;
    return 0;



}
