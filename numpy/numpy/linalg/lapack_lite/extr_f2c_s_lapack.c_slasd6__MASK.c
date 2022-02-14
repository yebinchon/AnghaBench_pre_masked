
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int real ;
typedef int integer ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int*,int*,int *,int*,int *,int*) ;
 int FUNC_3 (char*,int *,int *,int *,int *,int*,int*,int *,int*,int*) ;
 int FUNC_4 (int*,int*,int*,int*,int*,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int*,int*,int*,int*,int*,int*,int*,int *,int*,int *,int *,int*) ;
 int FUNC_5 (int*,int*,int *,int *,int *,int *,int *,int *,int*,int *,int *,int*) ;

int FUNC_6(integer *VAR_4, integer *VAR_5, integer *VAR_6,
 integer *VAR_7, real *VAR_8, real *VAR_9, real *VAR_10, real *VAR_11, real *VAR_12,
  integer *VAR_13, integer *VAR_14, integer *VAR_15, integer *VAR_16,
 integer *VAR_17, real *VAR_18, integer *VAR_19, real *VAR_20, real *
 VAR_21, real *VAR_22, real *VAR_23, integer *VAR_24, real *VAR_25, real *VAR_26, real *
 VAR_27, integer *VAR_28, integer *VAR_29)
{

    integer VAR_30, VAR_31, VAR_32, VAR_33,
     VAR_34, VAR_35, VAR_36;
    real VAR_37, VAR_38;


    static integer VAR_39, VAR_40, VAR_41, VAR_42, VAR_43, VAR_44, VAR_45, VAR_46, VAR_47, VAR_48, VAR_49;
    extern int FUNC_7(integer *, real *, integer *, real *,
     integer *), FUNC_4(integer *, integer *, integer *, integer *,
     integer *, real *, real *, real *, real *, real *, real *, real *,
      real *, real *, real *, integer *, integer *, integer *, integer
     *, integer *, integer *, integer *, real *, integer *, real *,
     real *, integer *), FUNC_5(integer *, integer *, real *, real *,
     real *, real *, real *, real *, integer *, real *, real *,
     integer *);
    static integer VAR_50;
    extern int FUNC_8(char *, integer *), FUNC_3(
     char *, integer *, integer *, real *, real *, integer *, integer *
     , real *, integer *, integer *), FUNC_2(integer *,
     integer *, real *, integer *, integer *, integer *);
    static real VAR_51;
    --VAR_8;
    --VAR_9;
    --VAR_10;
    --VAR_13;
    --VAR_14;
    VAR_30 = *VAR_17;
    VAR_31 = 1 + VAR_30;
    VAR_16 -= VAR_31;
    VAR_34 = *VAR_19;
    VAR_35 = 1 + VAR_34;
    VAR_20 -= VAR_35;
    VAR_32 = *VAR_19;
    VAR_33 = 1 + VAR_32;
    VAR_18 -= VAR_33;
    --VAR_21;
    --VAR_22;
    --VAR_23;
    --VAR_27;
    --VAR_28;


    *VAR_29 = 0;
    VAR_41 = *VAR_5 + *VAR_6 + 1;
    VAR_40 = VAR_41 + *VAR_7;

    if (*VAR_4 < 0 || *VAR_4 > 1) {
 *VAR_29 = -1;
    } else if (*VAR_5 < 1) {
 *VAR_29 = -2;
    } else if (*VAR_6 < 1) {
 *VAR_29 = -3;
    } else if (*VAR_7 < 0 || *VAR_7 > 1) {
 *VAR_29 = -4;
    } else if (*VAR_17 < VAR_41) {
 *VAR_29 = -14;
    } else if (*VAR_19 < VAR_41) {
 *VAR_29 = -16;
    }
    if (*VAR_29 != 0) {
 VAR_36 = -(*VAR_29);
 FUNC_8("SLASD6", &VAR_36);
 return 0;
    }







    VAR_50 = 1;
    VAR_44 = VAR_50 + VAR_41;
    VAR_48 = VAR_44 + VAR_40;
    VAR_49 = VAR_48 + VAR_40;

    VAR_45 = 1;
    VAR_46 = VAR_45 + VAR_41;
    VAR_47 = VAR_46 + VAR_41;






    VAR_37 = FUNC_0(*VAR_11), VAR_38 = FUNC_0(*VAR_12);
    VAR_51 = FUNC_1(VAR_37,VAR_38);
    VAR_8[*VAR_5 + 1] = 0.f;
    VAR_36 = VAR_41;
    for (VAR_39 = 1; VAR_39 <= VAR_36; ++VAR_39) {
 if ((VAR_37 = VAR_8[VAR_39], FUNC_0(VAR_37)) > VAR_51) {
     VAR_51 = (VAR_37 = VAR_8[VAR_39], FUNC_0(VAR_37));
 }

    }
    FUNC_3("G", &VAR_0, &VAR_0, &VAR_51, &VAR_2, &VAR_41, &VAR_1, &VAR_8[1], &VAR_41, VAR_29);
    *VAR_11 /= VAR_51;
    *VAR_12 /= VAR_51;



    FUNC_4(VAR_4, VAR_5, VAR_6, VAR_7, VAR_24, &VAR_8[1], &VAR_23[1], &VAR_27[VAR_44], &VAR_9[1], &
     VAR_27[VAR_48], &VAR_10[1], &VAR_27[VAR_49], VAR_11, VAR_12, &VAR_27[VAR_50], &
     VAR_28[VAR_45], &VAR_28[VAR_47], &VAR_13[1], &VAR_14[1], VAR_15, &VAR_16[
     VAR_31], VAR_17, &VAR_18[VAR_33], VAR_19, VAR_25, VAR_26,
     VAR_29);



    FUNC_5(VAR_4, VAR_24, &VAR_8[1], &VAR_23[1], &VAR_9[1], &VAR_10[1], &VAR_21[1], &VAR_22[1],
     VAR_19, &VAR_27[VAR_50], &VAR_27[VAR_44], VAR_29);



    if (*VAR_4 == 1) {
 FUNC_7(VAR_24, &VAR_8[1], &VAR_1, &VAR_20[VAR_34 + 1], &VAR_1);
 FUNC_7(VAR_24, &VAR_27[VAR_50], &VAR_1, &VAR_20[(VAR_34 << 1) + 1], &VAR_1);
    }



    FUNC_3("G", &VAR_0, &VAR_0, &VAR_2, &VAR_51, &VAR_41, &VAR_1, &VAR_8[1], &VAR_41, VAR_29);



    VAR_42 = *VAR_24;
    VAR_43 = VAR_41 - *VAR_24;
    FUNC_2(&VAR_42, &VAR_43, &VAR_8[1], &VAR_1, &VAR_3, &VAR_13[1]);

    return 0;



}
