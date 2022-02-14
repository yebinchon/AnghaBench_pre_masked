
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

int FUNC_3(char *VAR_3, char *VAR_4, integer *VAR_5, integer *VAR_6,
 integer *VAR_7, integer *VAR_8, real *VAR_9, integer *VAR_10, real *VAR_11, real *
 VAR_12, integer *VAR_13, real *VAR_14, integer *VAR_15, integer *VAR_16)
{

    address VAR_17[2];
    integer VAR_18, VAR_19, VAR_20, VAR_21, VAR_22[2], VAR_23;
    char VAR_24[2];


    static integer VAR_25, VAR_26, VAR_27, VAR_28, VAR_29, VAR_30, VAR_31, VAR_32;
    static logical VAR_33;
    extern logical FUNC_4(char *, char *);
    static integer VAR_34;
    extern int FUNC_5(char *, integer *);
    extern integer FUNC_6(integer *, char *, char *, integer *, integer *,
     integer *, integer *, ftnlen, ftnlen);
    static integer VAR_35;
    static logical VAR_36;
    extern int FUNC_0(char *, char *, integer *, integer *,
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
    VAR_29 = *VAR_8 - *VAR_7;
    VAR_33 = FUNC_4(VAR_3, "L");
    VAR_36 = *VAR_15 == -1;



    if (VAR_33) {
 VAR_31 = *VAR_5;
 VAR_32 = *VAR_6;
    } else {
 VAR_31 = *VAR_6;
 VAR_32 = *VAR_5;
    }
    if (! VAR_33 && ! FUNC_4(VAR_3, "R")) {
 *VAR_16 = -1;
    } else if (! FUNC_4(VAR_4, "N") && ! FUNC_4(VAR_4,
     "T")) {
 *VAR_16 = -2;
    } else if (*VAR_5 < 0) {
 *VAR_16 = -3;
    } else if (*VAR_6 < 0) {
 *VAR_16 = -4;
    } else if (*VAR_7 < 1 || *VAR_7 > FUNC_0(1,VAR_31)) {
 *VAR_16 = -5;
    } else if (*VAR_8 < FUNC_1(*VAR_7,VAR_31) || *VAR_8 > VAR_31) {
 *VAR_16 = -6;
    } else if (*VAR_10 < FUNC_0(1,VAR_31)) {
 *VAR_16 = -8;
    } else if (*VAR_13 < FUNC_0(1,*VAR_5)) {
 *VAR_16 = -11;
    } else if (*VAR_15 < FUNC_0(1,VAR_32) && ! VAR_36) {
 *VAR_16 = -13;
    }

    if (*VAR_16 == 0) {
 if (VAR_33) {

     VAR_22[0] = 1, VAR_17[0] = VAR_3;
     VAR_22[1] = 1, VAR_17[1] = VAR_4;
     FUNC_2(VAR_24, VAR_17, VAR_22, &VAR_1, (ftnlen)2);
     VAR_27 = FUNC_6(&VAR_0, "SORMQR", VAR_24, &VAR_29, VAR_6, &VAR_29, &VAR_2, (ftnlen)
      6, (ftnlen)2);
 } else {

     VAR_22[0] = 1, VAR_17[0] = VAR_3;
     VAR_22[1] = 1, VAR_17[1] = VAR_4;
     FUNC_2(VAR_24, VAR_17, VAR_22, &VAR_1, (ftnlen)2);
     VAR_27 = FUNC_6(&VAR_0, "SORMQR", VAR_24, VAR_5, &VAR_29, &VAR_29, &VAR_2, (ftnlen)
      6, (ftnlen)2);
 }
 VAR_35 = FUNC_0(1,VAR_32) * VAR_27;
 VAR_14[1] = (real) VAR_35;
    }

    if (*VAR_16 != 0) {
 VAR_23 = -(*VAR_16);
 FUNC_5("SORMHR", &VAR_23);
 return 0;
    } else if (VAR_36) {
 return 0;
    }



    if (*VAR_5 == 0 || *VAR_6 == 0 || VAR_29 == 0) {
 VAR_14[1] = 1.f;
 return 0;
    }

    if (VAR_33) {
 VAR_28 = VAR_29;
 VAR_30 = *VAR_6;
 VAR_25 = *VAR_7 + 1;
 VAR_26 = 1;
    } else {
 VAR_28 = *VAR_5;
 VAR_30 = VAR_29;
 VAR_25 = 1;
 VAR_26 = *VAR_7 + 1;
    }

    FUNC_0(VAR_3, VAR_4, &VAR_28, &VAR_30, &VAR_29, &VAR_9[*VAR_7 + 1 + *VAR_7 * VAR_18], VAR_10, &
     VAR_11[*VAR_7], &VAR_12[VAR_25 + VAR_26 * VAR_20], VAR_13, &VAR_14[1], VAR_15, &VAR_34);

    VAR_14[1] = (real) VAR_35;
    return 0;



}
