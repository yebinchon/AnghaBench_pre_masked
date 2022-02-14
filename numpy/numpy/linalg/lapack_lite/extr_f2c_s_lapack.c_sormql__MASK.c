
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
 int VAR_3 ;
 int FUNC_0 (int,int) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (char*,char**,int*,int*,int ) ;
 int FUNC_3 (char*,char*,char*,char*,int*,int*,int*,int *,int*,int *,int*,int *,int*,int *,int*) ;
 int FUNC_4 (char*,int*) ;

int FUNC_5(char *VAR_4, char *VAR_5, integer *VAR_6, integer *VAR_7,
 integer *VAR_8, real *VAR_9, integer *VAR_10, real *VAR_11, real *VAR_12, integer *VAR_13,
  real *VAR_14, integer *VAR_15, integer *VAR_16)
{

    address VAR_17[2];
    integer VAR_18, VAR_19, VAR_20, VAR_21, VAR_22, VAR_23, VAR_24[2], VAR_25,
     VAR_26;
    char VAR_27[2];


    static integer VAR_28;
    static real VAR_29[4160] ;
    static integer VAR_30, VAR_31, VAR_32, VAR_33, VAR_34, VAR_35, VAR_36, VAR_37, VAR_38, VAR_39;
    static logical VAR_40;
    extern logical FUNC_6(char *, char *);
    static integer VAR_41, VAR_42;
    extern int FUNC_7(char *, char *, integer *, integer *,
     integer *, real *, integer *, real *, real *, integer *, real *,
     integer *), FUNC_3(char *, char *, char *, char *
     , integer *, integer *, integer *, real *, integer *, real *,
     integer *, real *, integer *, real *, integer *), FUNC_4(char *, integer *);
    extern integer FUNC_8(integer *, char *, char *, integer *, integer *,
     integer *, integer *, ftnlen, ftnlen);
    extern int FUNC_9(char *, char *, integer *, integer *,
     real *, integer *, real *, real *, integer *);
    static logical VAR_43;
    static integer VAR_44, VAR_45;
    static logical VAR_46;
    VAR_18 = *VAR_10;
    VAR_19 = 1 + VAR_18;
    VAR_9 -= VAR_19;
    --VAR_11;
    VAR_20 = *VAR_13;
    VAR_21 = 1 + VAR_20;
    VAR_12 -= VAR_21;
    --VAR_14;


    *VAR_16 = 0;
    VAR_40 = FUNC_6(VAR_4, "L");
    VAR_43 = FUNC_6(VAR_5, "N");
    VAR_46 = *VAR_15 == -1;



    if (VAR_40) {
 VAR_37 = *VAR_6;
 VAR_38 = FUNC_0(1,*VAR_7);
    } else {
 VAR_37 = *VAR_7;
 VAR_38 = FUNC_0(1,*VAR_6);
    }
    if (! VAR_40 && ! FUNC_6(VAR_4, "R")) {
 *VAR_16 = -1;
    } else if (! VAR_43 && ! FUNC_6(VAR_5, "T")) {
 *VAR_16 = -2;
    } else if (*VAR_6 < 0) {
 *VAR_16 = -3;
    } else if (*VAR_7 < 0) {
 *VAR_16 = -4;
    } else if (*VAR_8 < 0 || *VAR_8 > VAR_37) {
 *VAR_16 = -5;
    } else if (*VAR_10 < FUNC_0(1,VAR_37)) {
 *VAR_16 = -7;
    } else if (*VAR_13 < FUNC_0(1,*VAR_6)) {
 *VAR_16 = -10;
    }

    if (*VAR_16 == 0) {
 if (*VAR_6 == 0 || *VAR_7 == 0) {
     VAR_45 = 1;
 } else {
     VAR_24[0] = 1, VAR_17[0] = VAR_4;
     VAR_24[1] = 1, VAR_17[1] = VAR_5;
     FUNC_2(VAR_27, VAR_17, VAR_24, &VAR_1, (ftnlen)2);
     VAR_22 = 64, VAR_23 = FUNC_8(&VAR_0, "SORMQL", VAR_27, VAR_6, VAR_7, VAR_8, &VAR_3,
      (ftnlen)6, (ftnlen)2);
     VAR_34 = FUNC_1(VAR_22,VAR_23);
     VAR_45 = VAR_38 * VAR_34;
 }
 VAR_14[1] = (real) VAR_45;

 if (*VAR_15 < VAR_38 && ! VAR_46) {
     *VAR_16 = -12;
 }
    }

    if (*VAR_16 != 0) {
 VAR_22 = -(*VAR_16);
 FUNC_4("SORMQL", &VAR_22);
 return 0;
    } else if (VAR_46) {
 return 0;
    }



    if (*VAR_6 == 0 || *VAR_7 == 0) {
 return 0;
    }

    VAR_41 = 2;
    VAR_44 = VAR_38;
    if (VAR_34 > 1 && VAR_34 < *VAR_8) {
 VAR_39 = VAR_38 * VAR_34;
 if (*VAR_15 < VAR_39) {
     VAR_34 = *VAR_15 / VAR_44;




     VAR_24[0] = 1, VAR_17[0] = VAR_4;
     VAR_24[1] = 1, VAR_17[1] = VAR_5;
     FUNC_2(VAR_27, VAR_17, VAR_24, &VAR_1, (ftnlen)2);
     VAR_22 = 2, VAR_23 = FUNC_8(&VAR_1, "SORMQL", VAR_27, VAR_6, VAR_7, VAR_8, &VAR_3, (
      ftnlen)6, (ftnlen)2);
     VAR_41 = FUNC_0(VAR_22,VAR_23);
 }
    } else {
 VAR_39 = VAR_38;
    }

    if (VAR_34 < VAR_41 || VAR_34 >= *VAR_8) {



 FUNC_7(VAR_4, VAR_5, VAR_6, VAR_7, VAR_8, &VAR_9[VAR_19], VAR_10, &VAR_11[1], &VAR_12[
  VAR_21], VAR_13, &VAR_14[1], &VAR_42);
    } else {



 if (VAR_40 && VAR_43 || ! VAR_40 && ! VAR_43) {
     VAR_30 = 1;
     VAR_31 = *VAR_8;
     VAR_32 = VAR_34;
 } else {
     VAR_30 = (*VAR_8 - 1) / VAR_34 * VAR_34 + 1;
     VAR_31 = 1;
     VAR_32 = -VAR_34;
 }

 if (VAR_40) {
     VAR_36 = *VAR_7;
 } else {
     VAR_35 = *VAR_6;
 }

 VAR_22 = VAR_31;
 VAR_23 = VAR_32;
 for (VAR_28 = VAR_30; VAR_23 < 0 ? VAR_28 >= VAR_22 : VAR_28 <= VAR_22; VAR_28 += VAR_23) {

     VAR_25 = VAR_34, VAR_26 = *VAR_8 - VAR_28 + 1;
     VAR_33 = FUNC_1(VAR_25,VAR_26);






     VAR_25 = VAR_37 - *VAR_8 + VAR_28 + VAR_33 - 1;
     FUNC_9("Backward", "Columnwise", &VAR_25, &VAR_33, &VAR_9[VAR_28 * VAR_18 + 1]
      , VAR_10, &VAR_11[VAR_28], VAR_29, &VAR_2);
     if (VAR_40) {



  VAR_35 = *VAR_6 - *VAR_8 + VAR_28 + VAR_33 - 1;
     } else {



  VAR_36 = *VAR_7 - *VAR_8 + VAR_28 + VAR_33 - 1;
     }



     FUNC_3(VAR_4, VAR_5, "Backward", "Columnwise", &VAR_35, &VAR_36, &VAR_33, &VAR_9[
      VAR_28 * VAR_18 + 1], VAR_10, VAR_29, &VAR_2, &VAR_12[VAR_21], VAR_13, &
      VAR_14[1], &VAR_44);

 }
    }
    VAR_14[1] = (real) VAR_45;
    return 0;



}
