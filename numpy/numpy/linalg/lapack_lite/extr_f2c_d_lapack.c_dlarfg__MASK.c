
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int integer ;
typedef int doublereal ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int*,int*) ;
 int FUNC_2 (int*,int*) ;

int FUNC_3(integer *VAR_2, doublereal *VAR_3, doublereal *VAR_4,
 integer *VAR_5, doublereal *VAR_6)
{

    integer VAR_7;
    doublereal VAR_8;


    static integer VAR_9, VAR_10;
    static doublereal VAR_11;
    extern doublereal FUNC_4(integer *, doublereal *, integer *);
    extern int FUNC_5(integer *, doublereal *, doublereal *,
     integer *);
    static doublereal VAR_12;

    static doublereal VAR_13, VAR_14;
    --VAR_4;


    if (*VAR_2 <= 1) {
 *VAR_6 = 0.;
 return 0;
    }

    VAR_7 = *VAR_2 - 1;
    VAR_12 = FUNC_4(&VAR_7, &VAR_4[1], VAR_5);

    if (VAR_12 == 0.) {



 *VAR_6 = 0.;
    } else {



 VAR_8 = FUNC_2(VAR_3, &VAR_12);
 VAR_11 = -FUNC_1(&VAR_8, VAR_3);
 VAR_13 = VAR_1 / VAR_0;
 VAR_10 = 0;
 if (FUNC_0(VAR_11) < VAR_13) {



     VAR_14 = 1. / VAR_13;
L10:
     ++VAR_10;
     VAR_7 = *VAR_2 - 1;
     FUNC_5(&VAR_7, &VAR_14, &VAR_4[1], VAR_5);
     VAR_11 *= VAR_14;
     *VAR_3 *= VAR_14;
     if (FUNC_0(VAR_11) < VAR_13) {
  goto L10;
     }



     VAR_7 = *VAR_2 - 1;
     VAR_12 = FUNC_4(&VAR_7, &VAR_4[1], VAR_5);
     VAR_8 = FUNC_2(VAR_3, &VAR_12);
     VAR_11 = -FUNC_1(&VAR_8, VAR_3);
 }
 *VAR_6 = (VAR_11 - *VAR_3) / VAR_11;
 VAR_7 = *VAR_2 - 1;
 VAR_8 = 1. / (*VAR_3 - VAR_11);
 FUNC_5(&VAR_7, &VAR_8, &VAR_4[1], VAR_5);



 VAR_7 = VAR_10;
 for (VAR_9 = 1; VAR_9 <= VAR_7; ++VAR_9) {
     VAR_11 *= VAR_13;

 }
 *VAR_3 = VAR_11;
    }

    return 0;



}
