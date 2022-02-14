
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int real ;
typedef int integer ;
typedef void* doublereal ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,int) ;
 int FUNC_1 (int*,int*) ;
 int FUNC_2 (int*,int*,int*,int*,int*) ;
 int FUNC_3 (char*,int*,int*,int*,int*,int*,int*) ;
 int FUNC_4 (int*,int*,int*,int*,int*,int*,int*,int*) ;
 int FUNC_5 (char*,int*,int*,int*,int*,int*,int*) ;
 int FUNC_6 (int) ;

int FUNC_7(integer *VAR_3, integer *VAR_4, integer *VAR_5, real *VAR_6,
 real *VAR_7, integer *VAR_8, real *VAR_9, real *VAR_10, real *VAR_11, integer *
 VAR_12, integer *VAR_13, real *VAR_14, real *VAR_15, integer *VAR_16)
{

    integer VAR_17, VAR_18, VAR_19, VAR_20;
    real VAR_21;


    static integer VAR_22, VAR_23, VAR_24, VAR_25, VAR_26, VAR_27, VAR_28;
    static real VAR_29;
    extern doublereal FUNC_8(integer *, real *, integer *);
    extern int FUNC_9(char *, char *, integer *, integer *,
     integer *, real *, real *, integer *, real *, integer *, real *,
     real *, integer *), FUNC_2(integer *, real *,
     integer *, real *, integer *), FUNC_4(integer *, integer *, real
     *, real *, real *, real *, real *, integer *);
    extern doublereal FUNC_10(real *, real *);
    extern int FUNC_11(char *, integer *), FUNC_3(
     char *, integer *, integer *, real *, integer *, real *, integer *
     ), FUNC_5(char *, integer *, integer *, real *, real *,
     real *, integer *);
    --VAR_6;
    VAR_17 = *VAR_8;
    VAR_18 = 1 + VAR_17;
    VAR_7 -= VAR_18;
    --VAR_10;
    --VAR_11;
    --VAR_12;
    --VAR_13;
    --VAR_14;
    --VAR_15;


    *VAR_16 = 0;

    if (*VAR_3 < 0) {
 *VAR_16 = -1;
    } else if (*VAR_4 < *VAR_3) {
 *VAR_16 = -2;
    } else if (*VAR_8 < FUNC_0(1,*VAR_4)) {
 *VAR_16 = -6;
    }
    if (*VAR_16 != 0) {
 VAR_19 = -(*VAR_16);
 FUNC_11("SLAED3", &VAR_19);
 return 0;
    }



    if (*VAR_3 == 0) {
 return 0;
    }
    VAR_19 = *VAR_3;
    for (VAR_22 = 1; VAR_22 <= VAR_19; ++VAR_22) {
 VAR_10[VAR_22] = FUNC_10(&VAR_10[VAR_22], &VAR_10[VAR_22]) - VAR_10[VAR_22];

    }

    VAR_19 = *VAR_3;
    for (VAR_23 = 1; VAR_23 <= VAR_19; ++VAR_23) {
 FUNC_4(VAR_3, &VAR_23, &VAR_10[1], &VAR_14[1], &VAR_7[VAR_23 * VAR_17 + 1], VAR_9, &VAR_6[VAR_23],
  VAR_16);



 if (*VAR_16 != 0) {
     goto L120;
 }

    }

    if (*VAR_3 == 1) {
 goto L110;
    }
    if (*VAR_3 == 2) {
 VAR_19 = *VAR_3;
 for (VAR_23 = 1; VAR_23 <= VAR_19; ++VAR_23) {
     VAR_14[1] = VAR_7[VAR_23 * VAR_17 + 1];
     VAR_14[2] = VAR_7[VAR_23 * VAR_17 + 2];
     VAR_26 = VAR_12[1];
     VAR_7[VAR_23 * VAR_17 + 1] = VAR_14[VAR_26];
     VAR_26 = VAR_12[2];
     VAR_7[VAR_23 * VAR_17 + 2] = VAR_14[VAR_26];

 }
 goto L110;
    }



    FUNC_2(VAR_3, &VAR_14[1], &VAR_0, &VAR_15[1], &VAR_0);



    VAR_19 = *VAR_8 + 1;
    FUNC_2(VAR_3, &VAR_7[VAR_18], &VAR_19, &VAR_14[1], &VAR_0);
    VAR_19 = *VAR_3;
    for (VAR_23 = 1; VAR_23 <= VAR_19; ++VAR_23) {
 VAR_20 = VAR_23 - 1;
 for (VAR_22 = 1; VAR_22 <= VAR_20; ++VAR_22) {
     VAR_14[VAR_22] *= VAR_7[VAR_22 + VAR_23 * VAR_17] / (VAR_10[VAR_22] - VAR_10[VAR_23]);

 }
 VAR_20 = *VAR_3;
 for (VAR_22 = VAR_23 + 1; VAR_22 <= VAR_20; ++VAR_22) {
     VAR_14[VAR_22] *= VAR_7[VAR_22 + VAR_23 * VAR_17] / (VAR_10[VAR_22] - VAR_10[VAR_23]);

 }

    }
    VAR_19 = *VAR_3;
    for (VAR_22 = 1; VAR_22 <= VAR_19; ++VAR_22) {
 VAR_21 = FUNC_6(-VAR_14[VAR_22]);
 VAR_14[VAR_22] = FUNC_1(&VAR_21, &VAR_15[VAR_22]);

    }



    VAR_19 = *VAR_3;
    for (VAR_23 = 1; VAR_23 <= VAR_19; ++VAR_23) {
 VAR_20 = *VAR_3;
 for (VAR_22 = 1; VAR_22 <= VAR_20; ++VAR_22) {
     VAR_15[VAR_22] = VAR_14[VAR_22] / VAR_7[VAR_22 + VAR_23 * VAR_17];

 }
 VAR_29 = FUNC_8(VAR_3, &VAR_15[1], &VAR_0);
 VAR_20 = *VAR_3;
 for (VAR_22 = 1; VAR_22 <= VAR_20; ++VAR_22) {
     VAR_26 = VAR_12[VAR_22];
     VAR_7[VAR_22 + VAR_23 * VAR_17] = VAR_15[VAR_26] / VAR_29;

 }

    }



L110:

    VAR_24 = *VAR_4 - *VAR_5;
    VAR_25 = VAR_13[1] + VAR_13[2];
    VAR_27 = VAR_13[2] + VAR_13[3];

    FUNC_3("A", &VAR_27, VAR_3, &VAR_7[VAR_13[1] + 1 + VAR_17], VAR_8, &VAR_15[1], &VAR_27);
    VAR_28 = *VAR_5 * VAR_25 + 1;
    if (VAR_27 != 0) {
 FUNC_9("N", "N", &VAR_24, VAR_3, &VAR_27, &VAR_1, &VAR_11[VAR_28], &VAR_24, &VAR_15[1], &VAR_27, &
  VAR_2, &VAR_7[*VAR_5 + 1 + VAR_17], VAR_8);
    } else {
 FUNC_5("A", &VAR_24, VAR_3, &VAR_2, &VAR_2, &VAR_7[*VAR_5 + 1 + VAR_17], VAR_8);
    }

    FUNC_3("A", &VAR_25, VAR_3, &VAR_7[VAR_18], VAR_8, &VAR_15[1], &VAR_25);
    if (VAR_25 != 0) {
 FUNC_9("N", "N", VAR_5, VAR_3, &VAR_25, &VAR_1, &VAR_11[1], VAR_5, &VAR_15[1], &VAR_25, &VAR_2,
   &VAR_7[VAR_18], VAR_8);
    } else {
 FUNC_5("A", VAR_5, VAR_3, &VAR_2, &VAR_2, &VAR_7[VAR_17 + 1], VAR_8);
    }


L120:
    return 0;



}
