
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef float real ;
typedef int integer ;


 int VAR_0 ;
 int FUNC_0 (int,int) ;
 int FUNC_1 (char*,int*,int*,float*,int*,float*,float*,int*,float*) ;
 int FUNC_2 (char*,int*) ;

int FUNC_3(integer *VAR_1, integer *VAR_2, integer *VAR_3, real *VAR_4,
 integer *VAR_5, real *VAR_6, real *VAR_7, integer *VAR_8)
{

    integer VAR_9, VAR_10, VAR_11, VAR_12;
    real VAR_13;


    static integer VAR_14, VAR_15, VAR_16;
    extern int FUNC_4(integer *, real *, real *, integer *),
     FUNC_1(char *, integer *, integer *, real *, integer *, real *,
     real *, integer *, real *), FUNC_2(char *, integer *);
    VAR_9 = *VAR_5;
    VAR_10 = 1 + VAR_9;
    VAR_4 -= VAR_10;
    --VAR_6;
    --VAR_7;


    *VAR_8 = 0;
    if (*VAR_1 < 0) {
 *VAR_8 = -1;
    } else if (*VAR_2 < 0 || *VAR_2 > *VAR_1) {
 *VAR_8 = -2;
    } else if (*VAR_3 < 0 || *VAR_3 > *VAR_2) {
 *VAR_8 = -3;
    } else if (*VAR_5 < FUNC_0(1,*VAR_1)) {
 *VAR_8 = -5;
    }
    if (*VAR_8 != 0) {
 VAR_11 = -(*VAR_8);
 FUNC_2("SORG2R", &VAR_11);
 return 0;
    }



    if (*VAR_2 <= 0) {
 return 0;
    }



    VAR_11 = *VAR_2;
    for (VAR_15 = *VAR_3 + 1; VAR_15 <= VAR_11; ++VAR_15) {
 VAR_12 = *VAR_1;
 for (VAR_16 = 1; VAR_16 <= VAR_12; ++VAR_16) {
     VAR_4[VAR_16 + VAR_15 * VAR_9] = 0.f;

 }
 VAR_4[VAR_15 + VAR_15 * VAR_9] = 1.f;

    }

    for (VAR_14 = *VAR_3; VAR_14 >= 1; --VAR_14) {



 if (VAR_14 < *VAR_2) {
     VAR_4[VAR_14 + VAR_14 * VAR_9] = 1.f;
     VAR_11 = *VAR_1 - VAR_14 + 1;
     VAR_12 = *VAR_2 - VAR_14;
     FUNC_1("Left", &VAR_11, &VAR_12, &VAR_4[VAR_14 + VAR_14 * VAR_9], &VAR_0, &VAR_6[
      VAR_14], &VAR_4[VAR_14 + (VAR_14 + 1) * VAR_9], VAR_5, &VAR_7[1]);
 }
 if (VAR_14 < *VAR_1) {
     VAR_11 = *VAR_1 - VAR_14;
     VAR_13 = -VAR_6[VAR_14];
     FUNC_4(&VAR_11, &VAR_13, &VAR_4[VAR_14 + 1 + VAR_14 * VAR_9], &VAR_0);
 }
 VAR_4[VAR_14 + VAR_14 * VAR_9] = 1.f - VAR_6[VAR_14];



 VAR_11 = VAR_14 - 1;
 for (VAR_16 = 1; VAR_16 <= VAR_11; ++VAR_16) {
     VAR_4[VAR_16 + VAR_14 * VAR_9] = 0.f;

 }

    }
    return 0;



}
