
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ logical ;
typedef int integer ;
typedef int doublereal ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,int) ;

int FUNC_1(char *VAR_2, integer *VAR_3, doublereal *VAR_4, integer *
 VAR_5, integer *VAR_6)
{

    integer VAR_7, VAR_8, VAR_9, VAR_10, VAR_11;


    static integer VAR_12;
    static doublereal VAR_13;
    extern doublereal FUNC_2(integer *, doublereal *, integer *, doublereal *,
     integer *);
    extern int FUNC_3(integer *, doublereal *, doublereal *,
     integer *);
    extern logical FUNC_4(char *, char *);
    extern int FUNC_5(char *, integer *, integer *,
     doublereal *, doublereal *, integer *, doublereal *, integer *,
     doublereal *, doublereal *, integer *);
    static logical VAR_14;
    extern int FUNC_6(char *, integer *);
    VAR_7 = *VAR_5;
    VAR_8 = 1 + VAR_7;
    VAR_4 -= VAR_8;


    *VAR_6 = 0;
    VAR_14 = FUNC_4(VAR_2, "U");
    if (! VAR_14 && ! FUNC_4(VAR_2, "L")) {
 *VAR_6 = -1;
    } else if (*VAR_3 < 0) {
 *VAR_6 = -2;
    } else if (*VAR_5 < FUNC_0(1,*VAR_3)) {
 *VAR_6 = -4;
    }
    if (*VAR_6 != 0) {
 VAR_9 = -(*VAR_6);
 FUNC_6("DLAUU2", &VAR_9);
 return 0;
    }



    if (*VAR_3 == 0) {
 return 0;
    }

    if (VAR_14) {



 VAR_9 = *VAR_3;
 for (VAR_12 = 1; VAR_12 <= VAR_9; ++VAR_12) {
     VAR_13 = VAR_4[VAR_12 + VAR_12 * VAR_7];
     if (VAR_12 < *VAR_3) {
  VAR_10 = *VAR_3 - VAR_12 + 1;
  VAR_4[VAR_12 + VAR_12 * VAR_7] = FUNC_2(&VAR_10, &VAR_4[VAR_12 + VAR_12 * VAR_7],
   VAR_5, &VAR_4[VAR_12 + VAR_12 * VAR_7], VAR_5);
  VAR_10 = VAR_12 - 1;
  VAR_11 = *VAR_3 - VAR_12;
  FUNC_5("No transpose", &VAR_10, &VAR_11, &VAR_1, &VAR_4[(VAR_12 + 1) *
   VAR_7 + 1], VAR_5, &VAR_4[VAR_12 + (VAR_12 + 1) * VAR_7], VAR_5, &
   VAR_13, &VAR_4[VAR_12 * VAR_7 + 1], &VAR_0);
     } else {
  FUNC_3(&VAR_12, &VAR_13, &VAR_4[VAR_12 * VAR_7 + 1], &VAR_0);
     }

 }

    } else {



 VAR_9 = *VAR_3;
 for (VAR_12 = 1; VAR_12 <= VAR_9; ++VAR_12) {
     VAR_13 = VAR_4[VAR_12 + VAR_12 * VAR_7];
     if (VAR_12 < *VAR_3) {
  VAR_10 = *VAR_3 - VAR_12 + 1;
  VAR_4[VAR_12 + VAR_12 * VAR_7] = FUNC_2(&VAR_10, &VAR_4[VAR_12 + VAR_12 * VAR_7], &
   VAR_0, &VAR_4[VAR_12 + VAR_12 * VAR_7], &VAR_0);
  VAR_10 = *VAR_3 - VAR_12;
  VAR_11 = VAR_12 - 1;
  FUNC_5("Transpose", &VAR_10, &VAR_11, &VAR_1, &VAR_4[VAR_12 + 1 + VAR_7]
   , VAR_5, &VAR_4[VAR_12 + 1 + VAR_12 * VAR_7], &VAR_0, &VAR_13, &VAR_4[
   VAR_12 + VAR_7], VAR_5);
     } else {
  FUNC_3(&VAR_12, &VAR_13, &VAR_4[VAR_12 + VAR_7], VAR_5);
     }

 }
    }

    return 0;



}
