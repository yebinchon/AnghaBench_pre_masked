
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_1__ ;


typedef int integer ;
typedef scalar_t__ doublereal ;
struct TYPE_14__ {int r; int i; } ;
typedef TYPE_1__ doublecomplex ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 TYPE_1__ VAR_2 ;
 int FUNC_0 (int,int) ;
 int FUNC_1 (int,int) ;
 scalar_t__ FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*,TYPE_1__*,TYPE_1__*) ;
 int FUNC_4 (int*,int*,TYPE_1__*,TYPE_1__*,int*,TYPE_1__*,int*,TYPE_1__*,int*) ;
 int FUNC_5 (int*,TYPE_1__*,int*,TYPE_1__*,int*) ;

int FUNC_6(integer *VAR_3, integer *VAR_4, doublecomplex *VAR_5,
 integer *VAR_6, integer *VAR_7, integer *VAR_8)
{

    integer VAR_9, VAR_10, VAR_11, VAR_12, VAR_13;
    doublecomplex VAR_14;


    static integer VAR_15, VAR_16, VAR_17;
    static doublereal VAR_18;
    extern int FUNC_7(integer *, doublecomplex *,
     doublecomplex *, integer *), FUNC_4(integer *, integer *,
     doublecomplex *, doublecomplex *, integer *, doublecomplex *,
     integer *, doublecomplex *, integer *), FUNC_5(integer *,
     doublecomplex *, integer *, doublecomplex *, integer *);

    extern int FUNC_8(char *, integer *);
    extern integer FUNC_9(integer *, doublecomplex *, integer *);
    VAR_9 = *VAR_6;
    VAR_10 = 1 + VAR_9;
    VAR_5 -= VAR_10;
    --VAR_7;


    *VAR_8 = 0;
    if (*VAR_3 < 0) {
 *VAR_8 = -1;
    } else if (*VAR_4 < 0) {
 *VAR_8 = -2;
    } else if (*VAR_6 < FUNC_0(1,*VAR_3)) {
 *VAR_8 = -4;
    }
    if (*VAR_8 != 0) {
 VAR_11 = -(*VAR_8);
 FUNC_8("ZGETF2", &VAR_11);
 return 0;
    }



    if (*VAR_3 == 0 || *VAR_4 == 0) {
 return 0;
    }



    VAR_18 = VAR_0;

    VAR_11 = FUNC_1(*VAR_3,*VAR_4);
    for (VAR_16 = 1; VAR_16 <= VAR_11; ++VAR_16) {



 VAR_12 = *VAR_3 - VAR_16 + 1;
 VAR_17 = VAR_16 - 1 + FUNC_9(&VAR_12, &VAR_5[VAR_16 + VAR_16 * VAR_9], &VAR_1);
 VAR_7[VAR_16] = VAR_17;
 VAR_12 = VAR_17 + VAR_16 * VAR_9;
 if (VAR_5[VAR_12].r != 0. || VAR_5[VAR_12].i != 0.) {



     if (VAR_17 != VAR_16) {
  FUNC_5(VAR_4, &VAR_5[VAR_16 + VAR_9], VAR_6, &VAR_5[VAR_17 + VAR_9], VAR_6);
     }



     if (VAR_16 < *VAR_3) {
  if (FUNC_2(&VAR_5[VAR_16 + VAR_16 * VAR_9]) >= VAR_18) {
      VAR_12 = *VAR_3 - VAR_16;
      FUNC_3(&VAR_14, &VAR_2, &VAR_5[VAR_16 + VAR_16 * VAR_9]);
      FUNC_7(&VAR_12, &VAR_14, &VAR_5[VAR_16 + 1 + VAR_16 * VAR_9], &VAR_1);
  } else {
      VAR_12 = *VAR_3 - VAR_16;
      for (VAR_15 = 1; VAR_15 <= VAR_12; ++VAR_15) {
   VAR_13 = VAR_16 + VAR_15 + VAR_16 * VAR_9;
   FUNC_3(&VAR_14, &VAR_5[VAR_16 + VAR_15 + VAR_16 * VAR_9], &VAR_5[VAR_16 + VAR_16 *
    VAR_9]);
   VAR_5[VAR_13].r = VAR_14, VAR_5[VAR_13].i = VAR_14;

      }
  }
     }

 } else if (*VAR_8 == 0) {

     *VAR_8 = VAR_16;
 }

 if (VAR_16 < FUNC_1(*VAR_3,*VAR_4)) {



     VAR_12 = *VAR_3 - VAR_16;
     VAR_13 = *VAR_4 - VAR_16;
     VAR_14 = -1., VAR_14 = -0.;
     FUNC_4(&VAR_12, &VAR_13, &VAR_14, &VAR_5[VAR_16 + 1 + VAR_16 * VAR_9], &VAR_1, &VAR_5[VAR_16 +
      (VAR_16 + 1) * VAR_9], VAR_6, &VAR_5[VAR_16 + 1 + (VAR_16 + 1) * VAR_9], VAR_6)
      ;
 }

    }
    return 0;



}
