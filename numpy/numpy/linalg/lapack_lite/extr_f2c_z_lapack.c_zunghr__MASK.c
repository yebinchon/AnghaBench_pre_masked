
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int logical ;
typedef int integer ;
typedef int ftnlen ;
typedef void* doublereal ;
struct TYPE_5__ {int r; int i; } ;
typedef TYPE_1__ doublecomplex ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,int) ;
 int FUNC_1 (int,int) ;

int FUNC_2(integer *VAR_2, integer *VAR_3, integer *VAR_4,
 doublecomplex *VAR_5, integer *VAR_6, doublecomplex *VAR_7, doublecomplex *
 VAR_8, integer *VAR_9, integer *VAR_10)
{

    integer VAR_11, VAR_12, VAR_13, VAR_14, VAR_15, VAR_16;


    static integer VAR_17, VAR_18, VAR_19, VAR_20, VAR_21;
    extern int FUNC_3(char *, integer *);
    extern integer FUNC_4(integer *, char *, char *, integer *, integer *,
     integer *, integer *, ftnlen, ftnlen);
    static integer VAR_22;
    static logical VAR_23;
    extern int FUNC_5(integer *, integer *, integer *,
     doublecomplex *, integer *, doublecomplex *, doublecomplex *,
     integer *, integer *);
    VAR_11 = *VAR_6;
    VAR_12 = 1 + VAR_11;
    VAR_5 -= VAR_12;
    --VAR_7;
    --VAR_8;


    *VAR_10 = 0;
    VAR_20 = *VAR_4 - *VAR_3;
    VAR_23 = *VAR_9 == -1;
    if (*VAR_2 < 0) {
 *VAR_10 = -1;
    } else if (*VAR_3 < 1 || *VAR_3 > FUNC_0(1,*VAR_2)) {
 *VAR_10 = -2;
    } else if (*VAR_4 < FUNC_1(*VAR_3,*VAR_2) || *VAR_4 > *VAR_2) {
 *VAR_10 = -3;
    } else if (*VAR_6 < FUNC_0(1,*VAR_2)) {
 *VAR_10 = -5;
    } else if (*VAR_9 < FUNC_0(1,VAR_20) && ! VAR_23) {
 *VAR_10 = -8;
    }

    if (*VAR_10 == 0) {
 VAR_19 = FUNC_4(&VAR_0, "ZUNGQR", " ", &VAR_20, &VAR_20, &VAR_20, &VAR_1, (ftnlen)6, (
  ftnlen)1);
 VAR_22 = FUNC_0(1,VAR_20) * VAR_19;
 VAR_8[1].r = (doublereal) VAR_22, VAR_8[1].i = 0.;
    }

    if (*VAR_10 != 0) {
 VAR_13 = -(*VAR_10);
 FUNC_3("ZUNGHR", &VAR_13);
 return 0;
    } else if (VAR_23) {
 return 0;
    }



    if (*VAR_2 == 0) {
 VAR_8[1].r = 1., VAR_8[1].i = 0.;
 return 0;
    }







    VAR_13 = *VAR_3 + 1;
    for (VAR_18 = *VAR_4; VAR_18 >= VAR_13; --VAR_18) {
 VAR_14 = VAR_18 - 1;
 for (VAR_17 = 1; VAR_17 <= VAR_14; ++VAR_17) {
     VAR_15 = VAR_17 + VAR_18 * VAR_11;
     VAR_5[VAR_15].r = 0., VAR_5[VAR_15].i = 0.;

 }
 VAR_14 = *VAR_4;
 for (VAR_17 = VAR_18 + 1; VAR_17 <= VAR_14; ++VAR_17) {
     VAR_15 = VAR_17 + VAR_18 * VAR_11;
     VAR_16 = VAR_17 + (VAR_18 - 1) * VAR_11;
     VAR_5[VAR_15].r = VAR_5[VAR_16].r, VAR_5[VAR_15].i = VAR_5[VAR_16].i;

 }
 VAR_14 = *VAR_2;
 for (VAR_17 = *VAR_4 + 1; VAR_17 <= VAR_14; ++VAR_17) {
     VAR_15 = VAR_17 + VAR_18 * VAR_11;
     VAR_5[VAR_15].r = 0., VAR_5[VAR_15].i = 0.;

 }

    }
    VAR_13 = *VAR_3;
    for (VAR_18 = 1; VAR_18 <= VAR_13; ++VAR_18) {
 VAR_14 = *VAR_2;
 for (VAR_17 = 1; VAR_17 <= VAR_14; ++VAR_17) {
     VAR_15 = VAR_17 + VAR_18 * VAR_11;
     VAR_5[VAR_15].r = 0., VAR_5[VAR_15].i = 0.;

 }
 VAR_14 = VAR_18 + VAR_18 * VAR_11;
 VAR_5[VAR_14].r = 1., VAR_5[VAR_14].i = 0.;

    }
    VAR_13 = *VAR_2;
    for (VAR_18 = *VAR_4 + 1; VAR_18 <= VAR_13; ++VAR_18) {
 VAR_14 = *VAR_2;
 for (VAR_17 = 1; VAR_17 <= VAR_14; ++VAR_17) {
     VAR_15 = VAR_17 + VAR_18 * VAR_11;
     VAR_5[VAR_15].r = 0., VAR_5[VAR_15].i = 0.;

 }
 VAR_14 = VAR_18 + VAR_18 * VAR_11;
 VAR_5[VAR_14].r = 1., VAR_5[VAR_14].i = 0.;

    }

    if (VAR_20 > 0) {



 FUNC_5(&VAR_20, &VAR_20, &VAR_20, &VAR_5[*VAR_3 + 1 + (*VAR_3 + 1) * VAR_11], VAR_6, &VAR_7[*
  VAR_3], &VAR_8[1], VAR_9, &VAR_21);
    }
    VAR_8[1].r = (doublereal) VAR_22, VAR_8[1].i = 0.;
    return 0;



}
