
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef float real ;
typedef int integer ;
typedef float doublereal ;


 int VAR_0 ;
 float VAR_1 ;
 int FUNC_0 (float) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (int,int) ;
 int FUNC_3 (int*,float*,float*,int*) ;

int FUNC_4(integer *VAR_2, integer *VAR_3, real *VAR_4, integer *VAR_5,
 integer *VAR_6, integer *VAR_7)
{

    integer VAR_8, VAR_9, VAR_10, VAR_11, VAR_12;
    real VAR_13;


    static integer VAR_14, VAR_15, VAR_16;
    extern int FUNC_5(integer *, integer *, real *, real *,
     integer *, real *, integer *, real *, integer *), FUNC_3(integer *
     , real *, real *, integer *);
    static real VAR_17;
    extern int FUNC_6(integer *, real *, integer *, real *,
     integer *);
    extern doublereal FUNC_7(char *);
    extern int FUNC_8(char *, integer *);
    extern integer FUNC_9(integer *, real *, integer *);
    VAR_8 = *VAR_5;
    VAR_9 = 1 + VAR_8;
    VAR_4 -= VAR_9;
    --VAR_6;


    *VAR_7 = 0;
    if (*VAR_2 < 0) {
 *VAR_7 = -1;
    } else if (*VAR_3 < 0) {
 *VAR_7 = -2;
    } else if (*VAR_5 < FUNC_1(1,*VAR_2)) {
 *VAR_7 = -4;
    }
    if (*VAR_7 != 0) {
 VAR_10 = -(*VAR_7);
 FUNC_8("SGETF2", &VAR_10);
 return 0;
    }



    if (*VAR_2 == 0 || *VAR_3 == 0) {
 return 0;
    }



    VAR_17 = FUNC_7("S");

    VAR_10 = FUNC_2(*VAR_2,*VAR_3);
    for (VAR_15 = 1; VAR_15 <= VAR_10; ++VAR_15) {



 VAR_11 = *VAR_2 - VAR_15 + 1;
 VAR_16 = VAR_15 - 1 + FUNC_9(&VAR_11, &VAR_4[VAR_15 + VAR_15 * VAR_8], &VAR_0);
 VAR_6[VAR_15] = VAR_16;
 if (VAR_4[VAR_16 + VAR_15 * VAR_8] != 0.f) {



     if (VAR_16 != VAR_15) {
  FUNC_6(VAR_3, &VAR_4[VAR_15 + VAR_8], VAR_5, &VAR_4[VAR_16 + VAR_8], VAR_5);
     }



     if (VAR_15 < *VAR_2) {
  if ((VAR_13 = VAR_4[VAR_15 + VAR_15 * VAR_8], FUNC_0(VAR_13)) >= VAR_17) {
      VAR_11 = *VAR_2 - VAR_15;
      VAR_13 = 1.f / VAR_4[VAR_15 + VAR_15 * VAR_8];
      FUNC_3(&VAR_11, &VAR_13, &VAR_4[VAR_15 + 1 + VAR_15 * VAR_8], &VAR_0);
  } else {
      VAR_11 = *VAR_2 - VAR_15;
      for (VAR_14 = 1; VAR_14 <= VAR_11; ++VAR_14) {
   VAR_4[VAR_15 + VAR_14 + VAR_15 * VAR_8] /= VAR_4[VAR_15 + VAR_15 * VAR_8];

      }
  }
     }

 } else if (*VAR_7 == 0) {

     *VAR_7 = VAR_15;
 }

 if (VAR_15 < FUNC_2(*VAR_2,*VAR_3)) {



     VAR_11 = *VAR_2 - VAR_15;
     VAR_12 = *VAR_3 - VAR_15;
     FUNC_5(&VAR_11, &VAR_12, &VAR_1, &VAR_4[VAR_15 + 1 + VAR_15 * VAR_8], &VAR_0, &VAR_4[VAR_15
      + (VAR_15 + 1) * VAR_8], VAR_5, &VAR_4[VAR_15 + 1 + (VAR_15 + 1) * VAR_8],
      VAR_5);
 }

    }
    return 0;



}
