
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int real ;
typedef int integer ;


 int VAR_0 ;
 int FUNC_0 (int,int) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (int*,int *,int *,int*,int *) ;
 int FUNC_3 (char*,int*) ;

int FUNC_4(integer *VAR_1, integer *VAR_2, integer *VAR_3, real *VAR_4,
 integer *VAR_5, real *VAR_6, real *VAR_7, integer *VAR_8)
{

    integer VAR_9, VAR_10, VAR_11, VAR_12, VAR_13;


    static integer VAR_14;
    static real VAR_15;
    extern int FUNC_5(char *, integer *, integer *, real *,
     integer *, real *, real *, integer *, real *), FUNC_3(
     char *, integer *), FUNC_2(integer *, real *, real *,
     integer *, real *);
    VAR_9 = *VAR_5;
    VAR_10 = 1 + VAR_9;
    VAR_4 -= VAR_10;
    --VAR_6;
    --VAR_7;


    *VAR_8 = 0;
    if (*VAR_1 < 0) {
 *VAR_8 = -1;
    } else if (*VAR_2 < 1 || *VAR_2 > FUNC_0(1,*VAR_1)) {
 *VAR_8 = -2;
    } else if (*VAR_3 < FUNC_1(*VAR_2,*VAR_1) || *VAR_3 > *VAR_1) {
 *VAR_8 = -3;
    } else if (*VAR_5 < FUNC_0(1,*VAR_1)) {
 *VAR_8 = -5;
    }
    if (*VAR_8 != 0) {
 VAR_11 = -(*VAR_8);
 FUNC_3("SGEHD2", &VAR_11);
 return 0;
    }

    VAR_11 = *VAR_3 - 1;
    for (VAR_14 = *VAR_2; VAR_14 <= VAR_11; ++VAR_14) {



 VAR_12 = *VAR_3 - VAR_14;

 VAR_13 = VAR_14 + 2;
 FUNC_2(&VAR_12, &VAR_4[VAR_14 + 1 + VAR_14 * VAR_9], &VAR_4[FUNC_1(VAR_13,*VAR_1) + VAR_14 *
  VAR_9], &VAR_0, &VAR_6[VAR_14]);
 VAR_15 = VAR_4[VAR_14 + 1 + VAR_14 * VAR_9];
 VAR_4[VAR_14 + 1 + VAR_14 * VAR_9] = 1.f;



 VAR_12 = *VAR_3 - VAR_14;
 FUNC_5("Right", VAR_3, &VAR_12, &VAR_4[VAR_14 + 1 + VAR_14 * VAR_9], &VAR_0, &VAR_6[
  VAR_14], &VAR_4[(VAR_14 + 1) * VAR_9 + 1], VAR_5, &VAR_7[1]);



 VAR_12 = *VAR_3 - VAR_14;
 VAR_13 = *VAR_1 - VAR_14;
 FUNC_5("Left", &VAR_12, &VAR_13, &VAR_4[VAR_14 + 1 + VAR_14 * VAR_9], &VAR_0, &VAR_6[
  VAR_14], &VAR_4[VAR_14 + 1 + (VAR_14 + 1) * VAR_9], VAR_5, &VAR_7[1]);

 VAR_4[VAR_14 + 1 + VAR_14 * VAR_9] = VAR_15;

    }

    return 0;



}
