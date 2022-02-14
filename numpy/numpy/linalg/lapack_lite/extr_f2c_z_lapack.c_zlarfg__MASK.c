
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


typedef int integer ;
typedef int doublereal ;
struct TYPE_8__ {int r; int i; } ;
typedef TYPE_1__ doublecomplex ;
typedef int VOID ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 TYPE_1__ VAR_2 ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int*,int*) ;
 int FUNC_3 (int*,TYPE_1__*,int*) ;

int FUNC_4(integer *VAR_3, doublecomplex *VAR_4, doublecomplex *
 VAR_5, integer *VAR_6, doublecomplex *VAR_7)
{

    integer VAR_8;
    doublereal VAR_9, VAR_10;
    doublecomplex VAR_11, VAR_12;


    static integer VAR_13, VAR_14;
    static doublereal VAR_15, VAR_16, VAR_17;
    extern int FUNC_5(integer *, doublecomplex *,
     doublecomplex *, integer *);
    static doublereal VAR_18;
    extern doublereal FUNC_6(doublereal *, doublereal *, doublereal *),
     FUNC_3(integer *, doublecomplex *, integer *), FUNC_7(char *);
    static doublereal VAR_19;
    extern int FUNC_8(integer *, doublereal *,
     doublecomplex *, integer *);
    static doublereal VAR_20;
    extern VOID FUNC_9(doublecomplex *, doublecomplex *,
      doublecomplex *);
    --VAR_5;


    if (*VAR_3 <= 0) {
 VAR_7->r = 0., VAR_7->i = 0.;
 return 0;
    }

    VAR_8 = *VAR_3 - 1;
    VAR_18 = FUNC_3(&VAR_8, &VAR_5[1], VAR_6);
    VAR_17 = VAR_4->r;
    VAR_16 = FUNC_1(VAR_4);

    if (VAR_18 == 0. && VAR_16 == 0.) {



 VAR_7->r = 0., VAR_7->i = 0.;
    } else {



 VAR_9 = FUNC_6(&VAR_17, &VAR_16, &VAR_18);
 VAR_15 = -FUNC_2(&VAR_9, &VAR_17);
 VAR_19 = VAR_1 / VAR_0;
 VAR_20 = 1. / VAR_19;

 VAR_14 = 0;
 if (FUNC_0(VAR_15) < VAR_19) {



L10:
     ++VAR_14;
     VAR_8 = *VAR_3 - 1;
     FUNC_8(&VAR_8, &VAR_20, &VAR_5[1], VAR_6);
     VAR_15 *= VAR_20;
     VAR_16 *= VAR_20;
     VAR_17 *= VAR_20;
     if (FUNC_0(VAR_15) < VAR_19) {
  goto L10;
     }



     VAR_8 = *VAR_3 - 1;
     VAR_18 = FUNC_3(&VAR_8, &VAR_5[1], VAR_6);
     VAR_11 = VAR_17, VAR_11 = VAR_16;
     VAR_4->r = VAR_11, VAR_4->i = VAR_11;
     VAR_9 = FUNC_6(&VAR_17, &VAR_16, &VAR_18);
     VAR_15 = -FUNC_2(&VAR_9, &VAR_17);
 }
 VAR_9 = (VAR_15 - VAR_17) / VAR_15;
 VAR_10 = -VAR_16 / VAR_15;
 VAR_11 = VAR_9, VAR_11 = VAR_10;
 VAR_7->r = VAR_11, VAR_7->i = VAR_11;
 VAR_12 = VAR_4->r - VAR_15, VAR_12 = VAR_4->i;
 FUNC_9(&VAR_11, &VAR_2, &VAR_12);
 VAR_4->r = VAR_11, VAR_4->i = VAR_11;
 VAR_8 = *VAR_3 - 1;
 FUNC_5(&VAR_8, VAR_4, &VAR_5[1], VAR_6);



 VAR_8 = VAR_14;
 for (VAR_13 = 1; VAR_13 <= VAR_8; ++VAR_13) {
     VAR_15 *= VAR_19;

 }
 VAR_4->r = VAR_15, VAR_4->i = 0.;
    }

    return 0;



}
