
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int real ;
typedef int integer ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,int) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (int*,int*,int*,int *,int *,int*,int*,int *,int *,int *,int *,int *,int*,int*,int*,int*,int*) ;
 int FUNC_3 (int*,int*,int*,int *,int *,int*,int *,int *,int *,int*,int*,int *,int *,int*) ;
 int FUNC_4 (int*,int*,int *,int*,int *,int*) ;

int FUNC_5(integer *VAR_2, real *VAR_3, real *VAR_4, integer *VAR_5,
 integer *VAR_6, real *VAR_7, integer *VAR_8, real *VAR_9, integer *
 VAR_10, integer *VAR_11)
{

    integer VAR_12, VAR_13, VAR_14, VAR_15;


    static integer VAR_16, VAR_17, VAR_18, VAR_19, VAR_20, VAR_21, VAR_22, VAR_23, VAR_24, VAR_25, VAR_26, VAR_27;
    extern int FUNC_0(integer *, real *, integer *, real *,
     integer *), FUNC_2(integer *, integer *, integer *, real *, real
     *, integer *, integer *, real *, real *, real *, real *, real *,
     integer *, integer *, integer *, integer *, integer *), FUNC_3(
     integer *, integer *, integer *, real *, real *, integer *, real *
     , real *, real *, integer *, integer *, real *, real *, integer *)
     ;
    static integer VAR_28;
    extern int FUNC_6(char *, integer *), FUNC_4(
     integer *, integer *, real *, integer *, integer *, integer *);
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
    } else if (*VAR_5 < FUNC_0(1,*VAR_2)) {
 *VAR_11 = -4;
    } else {

 VAR_14 = 1, VAR_15 = *VAR_2 / 2;
 if (FUNC_1(VAR_14,VAR_15) > *VAR_8 || *VAR_2 / 2 < *VAR_8) {
     *VAR_11 = -7;
 }
    }
    if (*VAR_11 != 0) {
 VAR_14 = -(*VAR_11);
 FUNC_6("SLAED1", &VAR_14);
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



    FUNC_2(&VAR_17, VAR_2, VAR_8, &VAR_3[1], &VAR_4[VAR_13], VAR_5, &VAR_6[1], VAR_7, &VAR_9[
     VAR_22], &VAR_9[VAR_28], &VAR_9[VAR_21], &VAR_9[VAR_23], &VAR_10[VAR_25], &VAR_10[
     VAR_26], &VAR_10[VAR_27], &VAR_10[VAR_29], VAR_11);

    if (*VAR_11 != 0) {
 goto L20;
    }



    if (VAR_17 != 0) {
 VAR_20 = (VAR_10[VAR_29] + VAR_10[VAR_29 + 1]) * *VAR_8 + (VAR_10[VAR_29 +
  1] + VAR_10[VAR_29 + 2]) * (*VAR_2 - *VAR_8) + VAR_23;
 FUNC_3(&VAR_17, VAR_2, VAR_8, &VAR_3[1], &VAR_4[VAR_13], VAR_5, VAR_7, &VAR_9[VAR_28],
   &VAR_9[VAR_23], &VAR_10[VAR_26], &VAR_10[VAR_29], &VAR_9[VAR_21], &VAR_9[
  VAR_20], VAR_11);
 if (*VAR_11 != 0) {
     goto L20;
 }



 VAR_18 = VAR_17;
 VAR_19 = *VAR_2 - VAR_17;
 FUNC_4(&VAR_18, &VAR_19, &VAR_3[1], &VAR_0, &VAR_1, &VAR_6[1]);
    } else {
 VAR_14 = *VAR_2;
 for (VAR_16 = 1; VAR_16 <= VAR_14; ++VAR_16) {
     VAR_6[VAR_16] = VAR_16;

 }
    }

L20:
    return 0;



}
