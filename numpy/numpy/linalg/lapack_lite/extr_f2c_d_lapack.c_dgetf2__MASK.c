
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int integer ;
typedef int doublereal ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int*,int*,int*,int*) ;
 int FUNC_2 (int,int) ;
 int FUNC_3 (int,int) ;

int FUNC_4(integer *VAR_3, integer *VAR_4, doublereal *VAR_5, integer *
 VAR_6, integer *VAR_7, integer *VAR_8)
{

    integer VAR_9, VAR_10, VAR_11, VAR_12, VAR_13;
    doublereal VAR_14;


    static integer VAR_15, VAR_16, VAR_17;
    extern int FUNC_5(integer *, integer *, doublereal *,
     doublereal *, integer *, doublereal *, integer *, doublereal *,
     integer *), FUNC_1(integer *, doublereal *, doublereal *, integer
     *);
    static doublereal VAR_18;
    extern int FUNC_6(integer *, doublereal *, integer *,
     doublereal *, integer *);

    extern integer FUNC_7(integer *, doublereal *, integer *);
    extern int FUNC_8(char *, integer *);
    VAR_9 = *VAR_6;
    VAR_10 = 1 + VAR_9;
    VAR_5 -= VAR_10;
    --VAR_7;


    *VAR_8 = 0;
    if (*VAR_3 < 0) {
 *VAR_8 = -1;
    } else if (*VAR_4 < 0) {
 *VAR_8 = -2;
    } else if (*VAR_6 < FUNC_2(1,*VAR_3)) {
 *VAR_8 = -4;
    }
    if (*VAR_8 != 0) {
 VAR_11 = -(*VAR_8);
 FUNC_8("DGETF2", &VAR_11);
 return 0;
    }



    if (*VAR_3 == 0 || *VAR_4 == 0) {
 return 0;
    }



    VAR_18 = VAR_0;

    VAR_11 = FUNC_3(*VAR_3,*VAR_4);
    for (VAR_16 = 1; VAR_16 <= VAR_11; ++VAR_16) {



 VAR_12 = *VAR_3 - VAR_16 + 1;
 VAR_17 = VAR_16 - 1 + FUNC_7(&VAR_12, &VAR_5[VAR_16 + VAR_16 * VAR_9], &VAR_1);
 VAR_7[VAR_16] = VAR_17;
 if (VAR_5[VAR_17 + VAR_16 * VAR_9] != 0.) {



     if (VAR_17 != VAR_16) {
  FUNC_6(VAR_4, &VAR_5[VAR_16 + VAR_9], VAR_6, &VAR_5[VAR_17 + VAR_9], VAR_6);
     }



     if (VAR_16 < *VAR_3) {
  if ((VAR_14 = VAR_5[VAR_16 + VAR_16 * VAR_9], FUNC_0(VAR_14)) >= VAR_18) {
      VAR_12 = *VAR_3 - VAR_16;
      VAR_14 = 1. / VAR_5[VAR_16 + VAR_16 * VAR_9];
      FUNC_1(&VAR_12, &VAR_14, &VAR_5[VAR_16 + 1 + VAR_16 * VAR_9], &VAR_1);
  } else {
      VAR_12 = *VAR_3 - VAR_16;
      for (VAR_15 = 1; VAR_15 <= VAR_12; ++VAR_15) {
   VAR_5[VAR_16 + VAR_15 + VAR_16 * VAR_9] /= VAR_5[VAR_16 + VAR_16 * VAR_9];

      }
  }
     }

 } else if (*VAR_8 == 0) {

     *VAR_8 = VAR_16;
 }

 if (VAR_16 < FUNC_3(*VAR_3,*VAR_4)) {



     VAR_12 = *VAR_3 - VAR_16;
     VAR_13 = *VAR_4 - VAR_16;
     FUNC_5(&VAR_12, &VAR_13, &VAR_2, &VAR_5[VAR_16 + 1 + VAR_16 * VAR_9], &VAR_1, &VAR_5[VAR_16
      + (VAR_16 + 1) * VAR_9], VAR_6, &VAR_5[VAR_16 + 1 + (VAR_16 + 1) * VAR_9],
      VAR_6);
 }

    }
    return 0;



}
