
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int logical ;
typedef int integer ;
typedef int ftnlen ;
typedef int doublereal ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,int) ;
 int FUNC_1 (int,int) ;

int FUNC_2(integer *VAR_2, integer *VAR_3, integer *VAR_4,
 doublereal *VAR_5, integer *VAR_6, doublereal *VAR_7, doublereal *VAR_8,
 integer *VAR_9, integer *VAR_10)
{

    integer VAR_11, VAR_12, VAR_13, VAR_14;


    static integer VAR_15, VAR_16, VAR_17, VAR_18, VAR_19;
    extern int FUNC_3(char *, integer *);
    extern integer FUNC_4(integer *, char *, char *, integer *, integer *,
     integer *, integer *, ftnlen, ftnlen);
    extern int FUNC_5(integer *, integer *, integer *,
     doublereal *, integer *, doublereal *, doublereal *, integer *,
     integer *);
    static integer VAR_20;
    static logical VAR_21;
    VAR_11 = *VAR_6;
    VAR_12 = 1 + VAR_11;
    VAR_5 -= VAR_12;
    --VAR_7;
    --VAR_8;


    *VAR_10 = 0;
    VAR_18 = *VAR_4 - *VAR_3;
    VAR_21 = *VAR_9 == -1;
    if (*VAR_2 < 0) {
 *VAR_10 = -1;
    } else if (*VAR_3 < 1 || *VAR_3 > FUNC_0(1,*VAR_2)) {
 *VAR_10 = -2;
    } else if (*VAR_4 < FUNC_1(*VAR_3,*VAR_2) || *VAR_4 > *VAR_2) {
 *VAR_10 = -3;
    } else if (*VAR_6 < FUNC_0(1,*VAR_2)) {
 *VAR_10 = -5;
    } else if (*VAR_9 < FUNC_0(1,VAR_18) && ! VAR_21) {
 *VAR_10 = -8;
    }

    if (*VAR_10 == 0) {
 VAR_17 = FUNC_4(&VAR_0, "DORGQR", " ", &VAR_18, &VAR_18, &VAR_18, &VAR_1, (ftnlen)6, (
  ftnlen)1);
 VAR_20 = FUNC_0(1,VAR_18) * VAR_17;
 VAR_8[1] = (doublereal) VAR_20;
    }

    if (*VAR_10 != 0) {
 VAR_13 = -(*VAR_10);
 FUNC_3("DORGHR", &VAR_13);
 return 0;
    } else if (VAR_21) {
 return 0;
    }



    if (*VAR_2 == 0) {
 VAR_8[1] = 1.;
 return 0;
    }







    VAR_13 = *VAR_3 + 1;
    for (VAR_16 = *VAR_4; VAR_16 >= VAR_13; --VAR_16) {
 VAR_14 = VAR_16 - 1;
 for (VAR_15 = 1; VAR_15 <= VAR_14; ++VAR_15) {
     VAR_5[VAR_15 + VAR_16 * VAR_11] = 0.;

 }
 VAR_14 = *VAR_4;
 for (VAR_15 = VAR_16 + 1; VAR_15 <= VAR_14; ++VAR_15) {
     VAR_5[VAR_15 + VAR_16 * VAR_11] = VAR_5[VAR_15 + (VAR_16 - 1) * VAR_11];

 }
 VAR_14 = *VAR_2;
 for (VAR_15 = *VAR_4 + 1; VAR_15 <= VAR_14; ++VAR_15) {
     VAR_5[VAR_15 + VAR_16 * VAR_11] = 0.;

 }

    }
    VAR_13 = *VAR_3;
    for (VAR_16 = 1; VAR_16 <= VAR_13; ++VAR_16) {
 VAR_14 = *VAR_2;
 for (VAR_15 = 1; VAR_15 <= VAR_14; ++VAR_15) {
     VAR_5[VAR_15 + VAR_16 * VAR_11] = 0.;

 }
 VAR_5[VAR_16 + VAR_16 * VAR_11] = 1.;

    }
    VAR_13 = *VAR_2;
    for (VAR_16 = *VAR_4 + 1; VAR_16 <= VAR_13; ++VAR_16) {
 VAR_14 = *VAR_2;
 for (VAR_15 = 1; VAR_15 <= VAR_14; ++VAR_15) {
     VAR_5[VAR_15 + VAR_16 * VAR_11] = 0.;

 }
 VAR_5[VAR_16 + VAR_16 * VAR_11] = 1.;

    }

    if (VAR_18 > 0) {



 FUNC_5(&VAR_18, &VAR_18, &VAR_18, &VAR_5[*VAR_3 + 1 + (*VAR_3 + 1) * VAR_11], VAR_6, &VAR_7[*
  VAR_3], &VAR_8[1], VAR_9, &VAR_19);
    }
    VAR_8[1] = (doublereal) VAR_20;
    return 0;



}
