
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int integer ;
typedef void* doublereal ;
struct TYPE_5__ {int i; void* r; } ;
typedef TYPE_1__ doublecomplex ;


 void* VAR_0 ;
 void* VAR_1 ;
 void* FUNC_0 (TYPE_1__*) ;

int FUNC_1(integer *VAR_2, integer *VAR_3, doublereal *VAR_4, integer *
 VAR_5, doublecomplex *VAR_6, integer *VAR_7, doublecomplex *VAR_8, integer *VAR_9,
  doublereal *VAR_10)
{

    integer VAR_11, VAR_12, VAR_13, VAR_14, VAR_15, VAR_16, VAR_17, VAR_18,
     VAR_19, VAR_20, VAR_21;
    doublereal VAR_22;
    doublecomplex VAR_23;


    static integer VAR_24, VAR_25, VAR_26;
    extern int FUNC_0(char *, char *, integer *, integer *,
     integer *, doublereal *, doublereal *, integer *, doublereal *,
     integer *, doublereal *, doublereal *, integer *);
    VAR_11 = *VAR_5;
    VAR_12 = 1 + VAR_11;
    VAR_4 -= VAR_12;
    VAR_13 = *VAR_7;
    VAR_14 = 1 + VAR_13;
    VAR_6 -= VAR_14;
    VAR_15 = *VAR_9;
    VAR_16 = 1 + VAR_15;
    VAR_8 -= VAR_16;
    --VAR_10;


    if (*VAR_2 == 0 || *VAR_3 == 0) {
 return 0;
    }

    VAR_17 = *VAR_3;
    for (VAR_25 = 1; VAR_25 <= VAR_17; ++VAR_25) {
 VAR_18 = *VAR_2;
 for (VAR_24 = 1; VAR_24 <= VAR_18; ++VAR_24) {
     VAR_19 = VAR_24 + VAR_25 * VAR_13;
     VAR_10[(VAR_25 - 1) * *VAR_2 + VAR_24] = VAR_6[VAR_19].r;

 }

    }

    VAR_26 = *VAR_2 * *VAR_3 + 1;
    FUNC_0("N", "N", VAR_2, VAR_3, VAR_2, &VAR_0, &VAR_4[VAR_12], VAR_5, &VAR_10[1], VAR_2, &
     VAR_1, &VAR_10[VAR_26], VAR_2);
    VAR_17 = *VAR_3;
    for (VAR_25 = 1; VAR_25 <= VAR_17; ++VAR_25) {
 VAR_18 = *VAR_2;
 for (VAR_24 = 1; VAR_24 <= VAR_18; ++VAR_24) {
     VAR_19 = VAR_24 + VAR_25 * VAR_15;
     VAR_20 = VAR_26 + (VAR_25 - 1) * *VAR_2 + VAR_24 - 1;
     VAR_8[VAR_19].r = VAR_10[VAR_20], VAR_8[VAR_19].i = 0.;

 }

    }

    VAR_17 = *VAR_3;
    for (VAR_25 = 1; VAR_25 <= VAR_17; ++VAR_25) {
 VAR_18 = *VAR_2;
 for (VAR_24 = 1; VAR_24 <= VAR_18; ++VAR_24) {
     VAR_10[(VAR_25 - 1) * *VAR_2 + VAR_24] = FUNC_0(&VAR_6[VAR_24 + VAR_25 * VAR_13]);

 }

    }
    FUNC_0("N", "N", VAR_2, VAR_3, VAR_2, &VAR_0, &VAR_4[VAR_12], VAR_5, &VAR_10[1], VAR_2, &
     VAR_1, &VAR_10[VAR_26], VAR_2);
    VAR_17 = *VAR_3;
    for (VAR_25 = 1; VAR_25 <= VAR_17; ++VAR_25) {
 VAR_18 = *VAR_2;
 for (VAR_24 = 1; VAR_24 <= VAR_18; ++VAR_24) {
     VAR_19 = VAR_24 + VAR_25 * VAR_15;
     VAR_20 = VAR_24 + VAR_25 * VAR_15;
     VAR_22 = VAR_8[VAR_20].r;
     VAR_21 = VAR_26 + (VAR_25 - 1) * *VAR_2 + VAR_24 - 1;
     VAR_23 = VAR_22, VAR_23 = VAR_10[VAR_21];
     VAR_8[VAR_19].r = VAR_23, VAR_8[VAR_19].i = VAR_23;

 }

    }

    return 0;



}
