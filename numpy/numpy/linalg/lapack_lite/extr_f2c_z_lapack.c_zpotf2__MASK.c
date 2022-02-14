
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef void* logical ;
typedef int integer ;
typedef int doublereal ;
struct TYPE_6__ {int r; int i; } ;
typedef TYPE_1__ doublecomplex ;
typedef int VOID ;


 int VAR_0 ;
 TYPE_1__ VAR_1 ;
 int FUNC_0 (int,int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int*,int*,TYPE_1__*,int*) ;
 int FUNC_3 (int*,TYPE_1__*,int*) ;

int FUNC_4(char *VAR_2, integer *VAR_3, doublecomplex *VAR_4,
 integer *VAR_5, integer *VAR_6)
{

    integer VAR_7, VAR_8, VAR_9, VAR_10, VAR_11;
    doublereal VAR_12;
    doublecomplex VAR_13, VAR_14;


    static integer VAR_15;
    static doublereal VAR_16;
    extern logical FUNC_5(char *, char *);
    extern VOID FUNC_6(doublecomplex *, integer *,
     doublecomplex *, integer *, doublecomplex *, integer *);
    extern int FUNC_7(char *, integer *, integer *,
     doublecomplex *, doublecomplex *, integer *, doublecomplex *,
     integer *, doublecomplex *, doublecomplex *, integer *);
    static logical VAR_17;
    extern logical FUNC_8(doublereal *);
    extern int FUNC_9(char *, integer *), FUNC_2(
     integer *, doublereal *, doublecomplex *, integer *), FUNC_3(
     integer *, doublecomplex *, integer *);
    VAR_7 = *VAR_5;
    VAR_8 = 1 + VAR_7;
    VAR_4 -= VAR_8;


    *VAR_6 = 0;
    VAR_17 = FUNC_5(VAR_2, "U");
    if (! VAR_17 && ! FUNC_5(VAR_2, "L")) {
 *VAR_6 = -1;
    } else if (*VAR_3 < 0) {
 *VAR_6 = -2;
    } else if (*VAR_5 < FUNC_0(1,*VAR_3)) {
 *VAR_6 = -4;
    }
    if (*VAR_6 != 0) {
 VAR_9 = -(*VAR_6);
 FUNC_9("ZPOTF2", &VAR_9);
 return 0;
    }



    if (*VAR_3 == 0) {
 return 0;
    }

    if (VAR_17) {



 VAR_9 = *VAR_3;
 for (VAR_15 = 1; VAR_15 <= VAR_9; ++VAR_15) {



     VAR_10 = VAR_15 + VAR_15 * VAR_7;
     VAR_12 = VAR_4[VAR_10].r;
     VAR_11 = VAR_15 - 1;
     FUNC_6(&VAR_14, &VAR_11, &VAR_4[VAR_15 * VAR_7 + 1], &VAR_0, &VAR_4[VAR_15 * VAR_7 + 1]
      , &VAR_0);
     VAR_13 = VAR_12 - VAR_14, VAR_13 = -VAR_14;
     VAR_16 = VAR_13;
     if (VAR_16 <= 0. || FUNC_8(&VAR_16)) {
  VAR_10 = VAR_15 + VAR_15 * VAR_7;
  VAR_4[VAR_10].r = VAR_16, VAR_4[VAR_10].i = 0.;
  goto L30;
     }
     VAR_16 = FUNC_1(VAR_16);
     VAR_10 = VAR_15 + VAR_15 * VAR_7;
     VAR_4[VAR_10].r = VAR_16, VAR_4[VAR_10].i = 0.;



     if (VAR_15 < *VAR_3) {
  VAR_10 = VAR_15 - 1;
  FUNC_3(&VAR_10, &VAR_4[VAR_15 * VAR_7 + 1], &VAR_0);
  VAR_10 = VAR_15 - 1;
  VAR_11 = *VAR_3 - VAR_15;
  VAR_13 = -1., VAR_13 = -0.;
  FUNC_7("Transpose", &VAR_10, &VAR_11, &VAR_13, &VAR_4[(VAR_15 + 1) * VAR_7
   + 1], VAR_5, &VAR_4[VAR_15 * VAR_7 + 1], &VAR_0, &VAR_1, &VAR_4[VAR_15 + (
   VAR_15 + 1) * VAR_7], VAR_5);
  VAR_10 = VAR_15 - 1;
  FUNC_3(&VAR_10, &VAR_4[VAR_15 * VAR_7 + 1], &VAR_0);
  VAR_10 = *VAR_3 - VAR_15;
  VAR_12 = 1. / VAR_16;
  FUNC_2(&VAR_10, &VAR_12, &VAR_4[VAR_15 + (VAR_15 + 1) * VAR_7], VAR_5);
     }

 }
    } else {



 VAR_9 = *VAR_3;
 for (VAR_15 = 1; VAR_15 <= VAR_9; ++VAR_15) {



     VAR_10 = VAR_15 + VAR_15 * VAR_7;
     VAR_12 = VAR_4[VAR_10].r;
     VAR_11 = VAR_15 - 1;
     FUNC_6(&VAR_14, &VAR_11, &VAR_4[VAR_15 + VAR_7], VAR_5, &VAR_4[VAR_15 + VAR_7], VAR_5);
     VAR_13 = VAR_12 - VAR_14, VAR_13 = -VAR_14;
     VAR_16 = VAR_13;
     if (VAR_16 <= 0. || FUNC_8(&VAR_16)) {
  VAR_10 = VAR_15 + VAR_15 * VAR_7;
  VAR_4[VAR_10].r = VAR_16, VAR_4[VAR_10].i = 0.;
  goto L30;
     }
     VAR_16 = FUNC_1(VAR_16);
     VAR_10 = VAR_15 + VAR_15 * VAR_7;
     VAR_4[VAR_10].r = VAR_16, VAR_4[VAR_10].i = 0.;



     if (VAR_15 < *VAR_3) {
  VAR_10 = VAR_15 - 1;
  FUNC_3(&VAR_10, &VAR_4[VAR_15 + VAR_7], VAR_5);
  VAR_10 = *VAR_3 - VAR_15;
  VAR_11 = VAR_15 - 1;
  VAR_13 = -1., VAR_13 = -0.;
  FUNC_7("No transpose", &VAR_10, &VAR_11, &VAR_13, &VAR_4[VAR_15 + 1 + VAR_7]
   , VAR_5, &VAR_4[VAR_15 + VAR_7], VAR_5, &VAR_1, &VAR_4[VAR_15 + 1 + VAR_15 *
   VAR_7], &VAR_0);
  VAR_10 = VAR_15 - 1;
  FUNC_3(&VAR_10, &VAR_4[VAR_15 + VAR_7], VAR_5);
  VAR_10 = *VAR_3 - VAR_15;
  VAR_12 = 1. / VAR_16;
  FUNC_2(&VAR_10, &VAR_12, &VAR_4[VAR_15 + 1 + VAR_15 * VAR_7], &VAR_0);
     }

 }
    }
    goto L40;

L30:
    *VAR_6 = VAR_15;

L40:
    return 0;



}
