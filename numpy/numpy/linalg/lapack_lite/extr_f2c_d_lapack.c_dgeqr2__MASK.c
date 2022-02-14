
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int integer ;
typedef int doublereal ;


 int VAR_0 ;
 int FUNC_0 (int*,int *,int *,int*,int *) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (int,int) ;
 int FUNC_3 (char*,int*) ;

int FUNC_4(integer *VAR_1, integer *VAR_2, doublereal *VAR_3, integer *
 VAR_4, doublereal *VAR_5, doublereal *VAR_6, integer *VAR_7)
{

    integer VAR_8, VAR_9, VAR_10, VAR_11, VAR_12;


    static integer VAR_13, VAR_14;
    static doublereal VAR_15;
    extern int FUNC_5(char *, integer *, integer *,
     doublereal *, integer *, doublereal *, doublereal *, integer *,
     doublereal *), FUNC_0(integer *, doublereal *,
     doublereal *, integer *, doublereal *), FUNC_3(char *, integer *);
    VAR_8 = *VAR_4;
    VAR_9 = 1 + VAR_8;
    VAR_3 -= VAR_9;
    --VAR_5;
    --VAR_6;


    *VAR_7 = 0;
    if (*VAR_1 < 0) {
 *VAR_7 = -1;
    } else if (*VAR_2 < 0) {
 *VAR_7 = -2;
    } else if (*VAR_4 < FUNC_1(1,*VAR_1)) {
 *VAR_7 = -4;
    }
    if (*VAR_7 != 0) {
 VAR_10 = -(*VAR_7);
 FUNC_3("DGEQR2", &VAR_10);
 return 0;
    }

    VAR_14 = FUNC_2(*VAR_1,*VAR_2);

    VAR_10 = VAR_14;
    for (VAR_13 = 1; VAR_13 <= VAR_10; ++VAR_13) {



 VAR_11 = *VAR_1 - VAR_13 + 1;

 VAR_12 = VAR_13 + 1;
 FUNC_0(&VAR_11, &VAR_3[VAR_13 + VAR_13 * VAR_8], &VAR_3[FUNC_2(VAR_12,*VAR_1) + VAR_13 * VAR_8]
  , &VAR_0, &VAR_5[VAR_13]);
 if (VAR_13 < *VAR_2) {



     VAR_15 = VAR_3[VAR_13 + VAR_13 * VAR_8];
     VAR_3[VAR_13 + VAR_13 * VAR_8] = 1.;
     VAR_11 = *VAR_1 - VAR_13 + 1;
     VAR_12 = *VAR_2 - VAR_13;
     FUNC_5("Left", &VAR_11, &VAR_12, &VAR_3[VAR_13 + VAR_13 * VAR_8], &VAR_0, &VAR_5[
      VAR_13], &VAR_3[VAR_13 + (VAR_13 + 1) * VAR_8], VAR_4, &VAR_6[1]);
     VAR_3[VAR_13 + VAR_13 * VAR_8] = VAR_15;
 }

    }
    return 0;



}
