
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_1__ ;


typedef int integer ;
struct TYPE_9__ {int r; int i; } ;
typedef TYPE_1__ doublecomplex ;


 int FUNC_0 (int,int) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (char*,int*) ;
 int FUNC_3 (int*,TYPE_1__*,int*) ;
 int FUNC_4 (int*,TYPE_1__*,TYPE_1__*,int*,TYPE_1__*) ;

int FUNC_5(integer *VAR_0, integer *VAR_1, doublecomplex *VAR_2,
 integer *VAR_3, doublecomplex *VAR_4, doublecomplex *VAR_5, integer *VAR_6)
{

    integer VAR_7, VAR_8, VAR_9, VAR_10, VAR_11;


    static integer VAR_12, VAR_13;
    static doublecomplex VAR_14;
    extern int FUNC_6(char *, integer *, integer *,
     doublecomplex *, integer *, doublecomplex *, doublecomplex *,
     integer *, doublecomplex *), FUNC_2(char *, integer *), FUNC_4(integer *, doublecomplex *, doublecomplex *,
     integer *, doublecomplex *), FUNC_3(integer *, doublecomplex *,
     integer *);
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
    } else if (*VAR_3 < FUNC_0(1,*VAR_0)) {
 *VAR_6 = -4;
    }
    if (*VAR_6 != 0) {
 VAR_9 = -(*VAR_6);
 FUNC_2("ZGELQ2", &VAR_9);
 return 0;
    }

    VAR_13 = FUNC_1(*VAR_0,*VAR_1);

    VAR_9 = VAR_13;
    for (VAR_12 = 1; VAR_12 <= VAR_9; ++VAR_12) {



 VAR_10 = *VAR_1 - VAR_12 + 1;
 FUNC_3(&VAR_10, &VAR_2[VAR_12 + VAR_12 * VAR_7], VAR_3);
 VAR_10 = VAR_12 + VAR_12 * VAR_7;
 VAR_14.r = VAR_2[VAR_10].r, VAR_14.i = VAR_2[VAR_10].i;
 VAR_10 = *VAR_1 - VAR_12 + 1;

 VAR_11 = VAR_12 + 1;
 FUNC_4(&VAR_10, &VAR_14, &VAR_2[VAR_12 + FUNC_1(VAR_11,*VAR_1) * VAR_7], VAR_3, &VAR_4[VAR_12]
  );
 if (VAR_12 < *VAR_0) {



     VAR_10 = VAR_12 + VAR_12 * VAR_7;
     VAR_2[VAR_10].r = 1., VAR_2[VAR_10].i = 0.;
     VAR_10 = *VAR_0 - VAR_12;
     VAR_11 = *VAR_1 - VAR_12 + 1;
     FUNC_6("Right", &VAR_10, &VAR_11, &VAR_2[VAR_12 + VAR_12 * VAR_7], VAR_3, &VAR_4[
      VAR_12], &VAR_2[VAR_12 + 1 + VAR_12 * VAR_7], VAR_3, &VAR_5[1]);
 }
 VAR_10 = VAR_12 + VAR_12 * VAR_7;
 VAR_2[VAR_10].r = VAR_14.r, VAR_2[VAR_10].i = VAR_14.i;
 VAR_10 = *VAR_1 - VAR_12 + 1;
 FUNC_3(&VAR_10, &VAR_2[VAR_12 + VAR_12 * VAR_7], VAR_3);

    }
    return 0;



}
