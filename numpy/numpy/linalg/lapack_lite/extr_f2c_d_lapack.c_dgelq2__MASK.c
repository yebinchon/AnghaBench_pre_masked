
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int integer ;
typedef int doublereal ;


 int FUNC_0 (int*,int *,int *,int*,int *) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (int,int) ;
 int FUNC_3 (char*,int*) ;

int FUNC_4(integer *VAR_0, integer *VAR_1, doublereal *VAR_2, integer *
 VAR_3, doublereal *VAR_4, doublereal *VAR_5, integer *VAR_6)
{

    integer VAR_7, VAR_8, VAR_9, VAR_10, VAR_11;


    static integer VAR_12, VAR_13;
    static doublereal VAR_14;
    extern int FUNC_5(char *, integer *, integer *,
     doublereal *, integer *, doublereal *, doublereal *, integer *,
     doublereal *), FUNC_0(integer *, doublereal *,
     doublereal *, integer *, doublereal *), FUNC_3(char *, integer *);
    VAR_7 = *VAR_3;
    VAR_8 = 1 + VAR_7;
    VAR_2 -= VAR_8;
    --VAR_4;
    --VAR_5;


    *VAR_6 = 0;
    if (*VAR_0 < 0) {
 *VAR_6 = -1;
    } else if (*VAR_1 < 0) {
 *VAR_6 = -2;
    } else if (*VAR_3 < FUNC_1(1,*VAR_0)) {
 *VAR_6 = -4;
    }
    if (*VAR_6 != 0) {
 VAR_9 = -(*VAR_6);
 FUNC_3("DGELQ2", &VAR_9);
 return 0;
    }

    VAR_13 = FUNC_2(*VAR_0,*VAR_1);

    VAR_9 = VAR_13;
    for (VAR_12 = 1; VAR_12 <= VAR_9; ++VAR_12) {



 VAR_10 = *VAR_1 - VAR_12 + 1;

 VAR_11 = VAR_12 + 1;
 FUNC_0(&VAR_10, &VAR_2[VAR_12 + VAR_12 * VAR_7], &VAR_2[VAR_12 + FUNC_2(VAR_11,*VAR_1) * VAR_7]
  , VAR_3, &VAR_4[VAR_12]);
 if (VAR_12 < *VAR_0) {



     VAR_14 = VAR_2[VAR_12 + VAR_12 * VAR_7];
     VAR_2[VAR_12 + VAR_12 * VAR_7] = 1.;
     VAR_10 = *VAR_0 - VAR_12;
     VAR_11 = *VAR_1 - VAR_12 + 1;
     FUNC_5("Right", &VAR_10, &VAR_11, &VAR_2[VAR_12 + VAR_12 * VAR_7], VAR_3, &VAR_4[
      VAR_12], &VAR_2[VAR_12 + 1 + VAR_12 * VAR_7], VAR_3, &VAR_5[1]);
     VAR_2[VAR_12 + VAR_12 * VAR_7] = VAR_14;
 }

    }
    return 0;



}
