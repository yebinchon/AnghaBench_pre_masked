
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int real ;
typedef int integer ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int*) ;
 int FUNC_1 (char*,int*,int*,int*,int*,int*,int *,int *,int *,int*,int *,int*,int *,int*,int *,int*) ;
 int FUNC_2 (int*,int*,int*,int*,int*,int*,int*) ;
 int FUNC_3 (char*,int*) ;

int FUNC_4(integer *VAR_2, integer *VAR_3, real *VAR_4, real *VAR_5,
 real *VAR_6, integer *VAR_7, real *VAR_8, integer *VAR_9, integer *VAR_10,
 integer *VAR_11, real *VAR_12, integer *VAR_13)
{

    integer VAR_14, VAR_15, VAR_16, VAR_17, VAR_18, VAR_19;


    static integer VAR_20, VAR_21, VAR_22, VAR_23, VAR_24, VAR_25, VAR_26, VAR_27, VAR_28, VAR_29, VAR_30, VAR_31, VAR_32, VAR_33,
     VAR_34, VAR_35, VAR_36, VAR_37, VAR_38;
    static real VAR_39;
    static integer VAR_40, VAR_41;
    static real VAR_42;
    static integer VAR_43, VAR_44, VAR_45, VAR_46, VAR_47, VAR_48;
    extern int FUNC_5(integer *, integer *, integer *, real
     *, real *, real *, real *, integer *, real *, integer *, integer *
     , integer *, real *, integer *), FUNC_3(char *, integer *), FUNC_1(char *, integer *, integer *, integer *, integer
     *, integer *, real *, real *, real *, integer *, real *, integer *
     , real *, integer *, real *, integer *), FUNC_2(integer *
     , integer *, integer *, integer *, integer *, integer *, integer *
     );
    --VAR_4;
    --VAR_5;
    VAR_14 = *VAR_7;
    VAR_15 = 1 + VAR_14;
    VAR_6 -= VAR_15;
    VAR_16 = *VAR_9;
    VAR_17 = 1 + VAR_16;
    VAR_8 -= VAR_17;
    --VAR_11;
    --VAR_12;


    *VAR_13 = 0;

    if (*VAR_2 < 0) {
 *VAR_13 = -1;
    } else if (*VAR_3 < 0 || *VAR_3 > 1) {
 *VAR_13 = -2;
    }

    VAR_22 = *VAR_2 + *VAR_3;

    if (*VAR_7 < *VAR_2) {
 *VAR_13 = -6;
    } else if (*VAR_9 < VAR_22) {
 *VAR_13 = -8;
    } else if (*VAR_10 < 3) {
 *VAR_13 = -9;
    }
    if (*VAR_13 != 0) {
 VAR_18 = -(*VAR_13);
 FUNC_3("SLASD0", &VAR_18);
 return 0;
    }



    if (*VAR_2 <= *VAR_10) {
 FUNC_1("U", VAR_3, VAR_2, &VAR_22, VAR_2, &VAR_0, &VAR_4[1], &VAR_5[1], &VAR_8[VAR_17],
  VAR_9, &VAR_6[VAR_15], VAR_7, &VAR_6[VAR_15], VAR_7, &VAR_12[1], VAR_13);
 return 0;
    }



    VAR_43 = 1;
    VAR_44 = VAR_43 + *VAR_2;
    VAR_46 = VAR_44 + *VAR_2;
    VAR_40 = VAR_46 + *VAR_2;
    VAR_34 = VAR_40 + *VAR_2;
    FUNC_2(VAR_2, &VAR_41, &VAR_26, &VAR_11[VAR_43], &VAR_11[VAR_44], &VAR_11[VAR_46],
     VAR_10);






    VAR_36 = (VAR_26 + 1) / 2;
    VAR_31 = 0;
    VAR_18 = VAR_26;
    for (VAR_20 = VAR_36; VAR_20 <= VAR_18; ++VAR_20) {
 VAR_23 = VAR_20 - 1;
 VAR_24 = VAR_11[VAR_43 + VAR_23];
 VAR_28 = VAR_11[VAR_44 + VAR_23];
 VAR_37 = VAR_28 + 1;
 VAR_29 = VAR_11[VAR_46 + VAR_23];
 VAR_38 = VAR_29 + 1;
 VAR_32 = VAR_24 - VAR_28;
 VAR_33 = VAR_24 + 1;
 VAR_48 = 1;
 FUNC_1("U", &VAR_48, &VAR_28, &VAR_37, &VAR_28, &VAR_31, &VAR_4[VAR_32], &VAR_5[VAR_32], &VAR_8[
  VAR_32 + VAR_32 * VAR_16], VAR_9, &VAR_6[VAR_32 + VAR_32 * VAR_14], VAR_7, &VAR_6[
  VAR_32 + VAR_32 * VAR_14], VAR_7, &VAR_12[1], VAR_13);
 if (*VAR_13 != 0) {
     return 0;
 }
 VAR_47 = VAR_40 + VAR_32 - 2;
 VAR_19 = VAR_28;
 for (VAR_21 = 1; VAR_21 <= VAR_19; ++VAR_21) {
     VAR_11[VAR_47 + VAR_21] = VAR_21;

 }
 if (VAR_20 == VAR_26) {
     VAR_48 = *VAR_3;
 } else {
     VAR_48 = 1;
 }
 VAR_38 = VAR_29 + VAR_48;
 FUNC_1("U", &VAR_48, &VAR_29, &VAR_38, &VAR_29, &VAR_31, &VAR_4[VAR_33], &VAR_5[VAR_33], &VAR_8[
  VAR_33 + VAR_33 * VAR_16], VAR_9, &VAR_6[VAR_33 + VAR_33 * VAR_14], VAR_7, &VAR_6[
  VAR_33 + VAR_33 * VAR_14], VAR_7, &VAR_12[1], VAR_13);
 if (*VAR_13 != 0) {
     return 0;
 }
 VAR_47 = VAR_40 + VAR_24;
 VAR_19 = VAR_29;
 for (VAR_21 = 1; VAR_21 <= VAR_19; ++VAR_21) {
     VAR_11[VAR_47 + VAR_21 - 1] = VAR_21;

 }

    }



    for (VAR_35 = VAR_41; VAR_35 >= 1; --VAR_35) {






 if (VAR_35 == 1) {
     VAR_25 = 1;
     VAR_27 = 1;
 } else {
     VAR_18 = VAR_35 - 1;
     VAR_25 = FUNC_0(&VAR_1, &VAR_18);
     VAR_27 = (VAR_25 << 1) - 1;
 }
 VAR_18 = VAR_27;
 for (VAR_20 = VAR_25; VAR_20 <= VAR_18; ++VAR_20) {
     VAR_30 = VAR_20 - 1;
     VAR_24 = VAR_11[VAR_43 + VAR_30];
     VAR_28 = VAR_11[VAR_44 + VAR_30];
     VAR_29 = VAR_11[VAR_46 + VAR_30];
     VAR_32 = VAR_24 - VAR_28;
     if (*VAR_3 == 0 && VAR_20 == VAR_27) {
  VAR_48 = *VAR_3;
     } else {
  VAR_48 = 1;
     }
     VAR_45 = VAR_40 + VAR_32 - 1;
     VAR_42 = VAR_4[VAR_24];
     VAR_39 = VAR_5[VAR_24];
     FUNC_5(&VAR_28, &VAR_29, &VAR_48, &VAR_4[VAR_32], &VAR_42, &VAR_39, &VAR_6[VAR_32 + VAR_32 *
       VAR_14], VAR_7, &VAR_8[VAR_32 + VAR_32 * VAR_16], VAR_9, &VAR_11[
      VAR_45], &VAR_11[VAR_34], &VAR_12[1], VAR_13);
     if (*VAR_13 != 0) {
  return 0;
     }

 }

    }

    return 0;



}
