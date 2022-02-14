
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int real ;
typedef int integer ;
typedef void* doublereal ;


 int VAR_0 ;
 int FUNC_0 (int,int) ;
 int FUNC_1 (int*,int*) ;
 int FUNC_2 (int*,int*,int*,int*,int*,int*,int*,int*) ;
 int FUNC_3 (int) ;

int FUNC_4(integer *VAR_1, integer *VAR_2, integer *VAR_3,
 integer *VAR_4, real *VAR_5, real *VAR_6, integer *VAR_7, real *VAR_8, real *VAR_9,
  real *VAR_10, real *VAR_11, integer *VAR_12, integer *VAR_13)
{

    integer VAR_14, VAR_15, VAR_16, VAR_17, VAR_18, VAR_19;
    real VAR_20;


    static integer VAR_21, VAR_22;
    static real VAR_23;
    extern doublereal FUNC_5(integer *, real *, integer *);
    extern int FUNC_0(integer *, real *, integer *, real *,
     integer *), FUNC_2(integer *, integer *, real *, real *, real *,
     real *, real *, integer *);
    extern doublereal FUNC_6(real *, real *);
    extern int FUNC_7(char *, integer *);
    --VAR_5;
    VAR_14 = *VAR_7;
    VAR_15 = 1 + VAR_14;
    VAR_6 -= VAR_15;
    --VAR_9;
    --VAR_10;
    VAR_16 = *VAR_12;
    VAR_17 = 1 + VAR_16;
    VAR_11 -= VAR_17;


    *VAR_13 = 0;

    if (*VAR_1 < 0) {
 *VAR_13 = -1;
    } else if (*VAR_2 < 1 || *VAR_2 > FUNC_0(1,*VAR_1)) {
 *VAR_13 = -2;
    } else if (FUNC_0(1,*VAR_3) < *VAR_2 || *VAR_3 > FUNC_0(1,*VAR_1)) {
 *VAR_13 = -3;
    } else if (*VAR_4 < *VAR_1) {
 *VAR_13 = -4;
    } else if (*VAR_7 < FUNC_0(1,*VAR_1)) {
 *VAR_13 = -7;
    } else if (*VAR_12 < FUNC_0(1,*VAR_1)) {
 *VAR_13 = -12;
    }
    if (*VAR_13 != 0) {
 VAR_18 = -(*VAR_13);
 FUNC_7("SLAED9", &VAR_18);
 return 0;
    }



    if (*VAR_1 == 0) {
 return 0;
    }
    VAR_18 = *VAR_4;
    for (VAR_21 = 1; VAR_21 <= VAR_18; ++VAR_21) {
 VAR_9[VAR_21] = FUNC_6(&VAR_9[VAR_21], &VAR_9[VAR_21]) - VAR_9[VAR_21];

    }

    VAR_18 = *VAR_3;
    for (VAR_22 = *VAR_2; VAR_22 <= VAR_18; ++VAR_22) {
 FUNC_2(VAR_1, &VAR_22, &VAR_9[1], &VAR_10[1], &VAR_6[VAR_22 * VAR_14 + 1], VAR_8, &VAR_5[VAR_22],
  VAR_13);



 if (*VAR_13 != 0) {
     goto L120;
 }

    }

    if (*VAR_1 == 1 || *VAR_1 == 2) {
 VAR_18 = *VAR_1;
 for (VAR_21 = 1; VAR_21 <= VAR_18; ++VAR_21) {
     VAR_19 = *VAR_1;
     for (VAR_22 = 1; VAR_22 <= VAR_19; ++VAR_22) {
  VAR_11[VAR_22 + VAR_21 * VAR_16] = VAR_6[VAR_22 + VAR_21 * VAR_14];

     }

 }
 goto L120;
    }



    FUNC_0(VAR_1, &VAR_10[1], &VAR_0, &VAR_11[VAR_17], &VAR_0);



    VAR_18 = *VAR_7 + 1;
    FUNC_0(VAR_1, &VAR_6[VAR_15], &VAR_18, &VAR_10[1], &VAR_0);
    VAR_18 = *VAR_1;
    for (VAR_22 = 1; VAR_22 <= VAR_18; ++VAR_22) {
 VAR_19 = VAR_22 - 1;
 for (VAR_21 = 1; VAR_21 <= VAR_19; ++VAR_21) {
     VAR_10[VAR_21] *= VAR_6[VAR_21 + VAR_22 * VAR_14] / (VAR_9[VAR_21] - VAR_9[VAR_22]);

 }
 VAR_19 = *VAR_1;
 for (VAR_21 = VAR_22 + 1; VAR_21 <= VAR_19; ++VAR_21) {
     VAR_10[VAR_21] *= VAR_6[VAR_21 + VAR_22 * VAR_14] / (VAR_9[VAR_21] - VAR_9[VAR_22]);

 }

    }
    VAR_18 = *VAR_1;
    for (VAR_21 = 1; VAR_21 <= VAR_18; ++VAR_21) {
 VAR_20 = FUNC_3(-VAR_10[VAR_21]);
 VAR_10[VAR_21] = FUNC_1(&VAR_20, &VAR_11[VAR_21 + VAR_16]);

    }



    VAR_18 = *VAR_1;
    for (VAR_22 = 1; VAR_22 <= VAR_18; ++VAR_22) {
 VAR_19 = *VAR_1;
 for (VAR_21 = 1; VAR_21 <= VAR_19; ++VAR_21) {
     VAR_6[VAR_21 + VAR_22 * VAR_14] = VAR_10[VAR_21] / VAR_6[VAR_21 + VAR_22 * VAR_14];

 }
 VAR_23 = FUNC_5(VAR_1, &VAR_6[VAR_22 * VAR_14 + 1], &VAR_0);
 VAR_19 = *VAR_1;
 for (VAR_21 = 1; VAR_21 <= VAR_19; ++VAR_21) {
     VAR_11[VAR_21 + VAR_22 * VAR_16] = VAR_6[VAR_21 + VAR_22 * VAR_14] / VAR_23;

 }

    }

L120:
    return 0;



}
