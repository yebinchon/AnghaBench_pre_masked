
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_1__ ;


typedef int integer ;
struct TYPE_10__ {int r; int i; } ;
typedef TYPE_1__ doublecomplex ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,TYPE_1__*) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (int,int) ;
 int FUNC_3 (char*,int*) ;
 int FUNC_4 (int*,TYPE_1__*,TYPE_1__*,int*,TYPE_1__*) ;

int FUNC_5(integer *VAR_1, integer *VAR_2, doublecomplex *VAR_3,
 integer *VAR_4, doublecomplex *VAR_5, doublecomplex *VAR_6, integer *VAR_7)
{

    integer VAR_8, VAR_9, VAR_10, VAR_11, VAR_12;
    doublecomplex VAR_13;


    static integer VAR_14, VAR_15;
    static doublecomplex VAR_16;
    extern int FUNC_6(char *, integer *, integer *,
     doublecomplex *, integer *, doublecomplex *, doublecomplex *,
     integer *, doublecomplex *), FUNC_3(char *, integer *), FUNC_4(integer *, doublecomplex *, doublecomplex *,
     integer *, doublecomplex *);
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
 FUNC_3("ZGEQR2", &VAR_10);
 return 0;
    }

    VAR_15 = FUNC_2(*VAR_1,*VAR_2);

    VAR_10 = VAR_15;
    for (VAR_14 = 1; VAR_14 <= VAR_10; ++VAR_14) {



 VAR_11 = *VAR_1 - VAR_14 + 1;

 VAR_12 = VAR_14 + 1;
 FUNC_4(&VAR_11, &VAR_3[VAR_14 + VAR_14 * VAR_8], &VAR_3[FUNC_2(VAR_12,*VAR_1) + VAR_14 * VAR_8]
  , &VAR_0, &VAR_5[VAR_14]);
 if (VAR_14 < *VAR_2) {



     VAR_11 = VAR_14 + VAR_14 * VAR_8;
     VAR_16.r = VAR_3[VAR_11].r, VAR_16.i = VAR_3[VAR_11].i;
     VAR_11 = VAR_14 + VAR_14 * VAR_8;
     VAR_3[VAR_11].r = 1., VAR_3[VAR_11].i = 0.;
     VAR_11 = *VAR_1 - VAR_14 + 1;
     VAR_12 = *VAR_2 - VAR_14;
     FUNC_0(&VAR_13, &VAR_5[VAR_14]);
     FUNC_6("Left", &VAR_11, &VAR_12, &VAR_3[VAR_14 + VAR_14 * VAR_8], &VAR_0, &VAR_13,
       &VAR_3[VAR_14 + (VAR_14 + 1) * VAR_8], VAR_4, &VAR_6[1]);
     VAR_11 = VAR_14 + VAR_14 * VAR_8;
     VAR_3[VAR_11].r = VAR_16.r, VAR_3[VAR_11].i = VAR_16.i;
 }

    }
    return 0;



}
