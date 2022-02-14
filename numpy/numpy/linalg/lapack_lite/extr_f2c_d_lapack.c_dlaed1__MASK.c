
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int integer ;
typedef int doublereal ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int*,int*,int*,int *,int *,int*,int *,int *,int *,int*,int*,int *,int *,int*) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (int,int) ;
 int FUNC_3 (char*,int*) ;

int FUNC_4(integer *VAR_2, doublereal *VAR_3, doublereal *VAR_4,
 integer *VAR_5, integer *VAR_6, doublereal *VAR_7, integer *VAR_8,
 doublereal *VAR_9, integer *VAR_10, integer *VAR_11)
{

    integer VAR_12, VAR_13, VAR_14, VAR_15;


    static integer VAR_16, VAR_17, VAR_18, VAR_19, VAR_20, VAR_21, VAR_22, VAR_23, VAR_24, VAR_25, VAR_26;
    extern int FUNC_0(integer *, doublereal *, integer *,
     doublereal *, integer *);
    static integer VAR_27;
    extern int FUNC_0(integer *, integer *, integer *,
     doublereal *, doublereal *, integer *, integer *, doublereal *,
     doublereal *, doublereal *, doublereal *, doublereal *, integer *,
      integer *, integer *, integer *, integer *), FUNC_0(integer *,
     integer *, integer *, doublereal *, doublereal *, integer *,
     doublereal *, doublereal *, doublereal *, integer *, integer *,
     doublereal *, doublereal *, integer *);
    static integer VAR_28;
    extern int FUNC_5(integer *, integer *, doublereal *,
     integer *, integer *, integer *), FUNC_3(char *, integer *);
    static integer VAR_29;
    --VAR_3;
    VAR_12 = *VAR_5;
    VAR_13 = 1 + VAR_12;
    VAR_4 -= VAR_13;
    --VAR_6;
    --VAR_9;
    --VAR_10;


    *VAR_11 = 0;

    if (*VAR_2 < 0) {
 *VAR_11 = -1;
    } else if (*VAR_5 < FUNC_1(1,*VAR_2)) {
 *VAR_11 = -4;
    } else {

 VAR_14 = 1, VAR_15 = *VAR_2 / 2;
 if (FUNC_2(VAR_14,VAR_15) > *VAR_8 || *VAR_2 / 2 < *VAR_8) {
     *VAR_11 = -7;
 }
    }
    if (*VAR_11 != 0) {
 VAR_14 = -(*VAR_11);
 FUNC_3("DLAED1", &VAR_14);
 return 0;
    }



    if (*VAR_2 == 0) {
 return 0;
    }







    VAR_22 = 1;
    VAR_28 = VAR_22 + *VAR_2;
    VAR_21 = VAR_28 + *VAR_2;
    VAR_23 = VAR_21 + *VAR_2;

    VAR_25 = 1;
    VAR_26 = VAR_25 + *VAR_2;
    VAR_29 = VAR_26 + *VAR_2;
    VAR_27 = VAR_29 + *VAR_2;







    FUNC_0(VAR_8, &VAR_4[*VAR_8 + VAR_12], VAR_5, &VAR_9[VAR_22], &VAR_0);
    VAR_24 = *VAR_8 + 1;
    VAR_14 = *VAR_2 - *VAR_8;
    FUNC_0(&VAR_14, &VAR_4[VAR_24 + VAR_24 * VAR_12], VAR_5, &VAR_9[VAR_22 + *VAR_8], &VAR_0);



    FUNC_0(&VAR_17, VAR_2, VAR_8, &VAR_3[1], &VAR_4[VAR_13], VAR_5, &VAR_6[1], VAR_7, &VAR_9[
     VAR_22], &VAR_9[VAR_28], &VAR_9[VAR_21], &VAR_9[VAR_23], &VAR_10[VAR_25], &VAR_10[
     VAR_26], &VAR_10[VAR_27], &VAR_10[VAR_29], VAR_11);

    if (*VAR_11 != 0) {
 goto L20;
    }



    if (VAR_17 != 0) {
 VAR_20 = (VAR_10[VAR_29] + VAR_10[VAR_29 + 1]) * *VAR_8 + (VAR_10[VAR_29 +
  1] + VAR_10[VAR_29 + 2]) * (*VAR_2 - *VAR_8) + VAR_23;
 FUNC_0(&VAR_17, VAR_2, VAR_8, &VAR_3[1], &VAR_4[VAR_13], VAR_5, VAR_7, &VAR_9[VAR_28],
   &VAR_9[VAR_23], &VAR_10[VAR_26], &VAR_10[VAR_29], &VAR_9[VAR_21], &VAR_9[
  VAR_20], VAR_11);
 if (*VAR_11 != 0) {
     goto L20;
 }



 VAR_18 = VAR_17;
 VAR_19 = *VAR_2 - VAR_17;
 FUNC_5(&VAR_18, &VAR_19, &VAR_3[1], &VAR_0, &VAR_1, &VAR_6[1]);
    } else {
 VAR_14 = *VAR_2;
 for (VAR_16 = 1; VAR_16 <= VAR_14; ++VAR_16) {
     VAR_6[VAR_16] = VAR_16;

 }
    }

L20:
    return 0;



}
