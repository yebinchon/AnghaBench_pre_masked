
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef float real ;
typedef int integer ;


 int FUNC_0 (int,int) ;
 int FUNC_1 (char*,int*,int*,float*,int*,float*,float*,int*,float*) ;
 int FUNC_2 (char*,int*) ;

int FUNC_3(integer *VAR_0, integer *VAR_1, integer *VAR_2, real *VAR_3,
 integer *VAR_4, real *VAR_5, real *VAR_6, integer *VAR_7)
{

    integer VAR_8, VAR_9, VAR_10, VAR_11;
    real VAR_12;


    static integer VAR_13, VAR_14, VAR_15;
    extern int FUNC_4(integer *, real *, real *, integer *),
     FUNC_1(char *, integer *, integer *, real *, integer *, real *,
     real *, integer *, real *), FUNC_2(char *, integer *);
    VAR_8 = *VAR_4;
    VAR_9 = 1 + VAR_8;
    VAR_3 -= VAR_9;
    --VAR_5;
    --VAR_6;


    *VAR_7 = 0;
    if (*VAR_0 < 0) {
 *VAR_7 = -1;
    } else if (*VAR_1 < *VAR_0) {
 *VAR_7 = -2;
    } else if (*VAR_2 < 0 || *VAR_2 > *VAR_0) {
 *VAR_7 = -3;
    } else if (*VAR_4 < FUNC_0(1,*VAR_0)) {
 *VAR_7 = -5;
    }
    if (*VAR_7 != 0) {
 VAR_10 = -(*VAR_7);
 FUNC_2("SORGL2", &VAR_10);
 return 0;
    }



    if (*VAR_0 <= 0) {
 return 0;
    }

    if (*VAR_2 < *VAR_0) {



 VAR_10 = *VAR_1;
 for (VAR_14 = 1; VAR_14 <= VAR_10; ++VAR_14) {
     VAR_11 = *VAR_0;
     for (VAR_15 = *VAR_2 + 1; VAR_15 <= VAR_11; ++VAR_15) {
  VAR_3[VAR_15 + VAR_14 * VAR_8] = 0.f;

     }
     if (VAR_14 > *VAR_2 && VAR_14 <= *VAR_0) {
  VAR_3[VAR_14 + VAR_14 * VAR_8] = 1.f;
     }

 }
    }

    for (VAR_13 = *VAR_2; VAR_13 >= 1; --VAR_13) {



 if (VAR_13 < *VAR_1) {
     if (VAR_13 < *VAR_0) {
  VAR_3[VAR_13 + VAR_13 * VAR_8] = 1.f;
  VAR_10 = *VAR_0 - VAR_13;
  VAR_11 = *VAR_1 - VAR_13 + 1;
  FUNC_1("Right", &VAR_10, &VAR_11, &VAR_3[VAR_13 + VAR_13 * VAR_8], VAR_4, &
   VAR_5[VAR_13], &VAR_3[VAR_13 + 1 + VAR_13 * VAR_8], VAR_4, &VAR_6[1]);
     }
     VAR_10 = *VAR_1 - VAR_13;
     VAR_12 = -VAR_5[VAR_13];
     FUNC_4(&VAR_10, &VAR_12, &VAR_3[VAR_13 + (VAR_13 + 1) * VAR_8], VAR_4);
 }
 VAR_3[VAR_13 + VAR_13 * VAR_8] = 1.f - VAR_5[VAR_13];



 VAR_10 = VAR_13 - 1;
 for (VAR_15 = 1; VAR_15 <= VAR_10; ++VAR_15) {
     VAR_3[VAR_13 + VAR_15 * VAR_8] = 0.f;

 }

    }
    return 0;



}
