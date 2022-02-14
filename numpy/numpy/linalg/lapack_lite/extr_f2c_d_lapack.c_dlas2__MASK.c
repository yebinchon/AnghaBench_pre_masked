
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int doublereal ;


 int FUNC_0 (int) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (int,int) ;
 int FUNC_3 (int) ;

int FUNC_4(doublereal *VAR_0, doublereal *VAR_1, doublereal *VAR_2,
 doublereal *VAR_3, doublereal *VAR_4)
{

    doublereal VAR_5, VAR_6;


    static doublereal VAR_7, VAR_8, VAR_9, VAR_10, VAR_11, VAR_12, VAR_13, VAR_14, VAR_15;
    VAR_8 = FUNC_0(*VAR_0);
    VAR_9 = FUNC_0(*VAR_1);
    VAR_10 = FUNC_0(*VAR_2);
    VAR_14 = FUNC_2(VAR_8,VAR_10);
    VAR_15 = FUNC_1(VAR_8,VAR_10);
    if (VAR_14 == 0.) {
 *VAR_3 = 0.;
 if (VAR_15 == 0.) {
     *VAR_4 = VAR_9;
 } else {

     VAR_5 = FUNC_2(VAR_15,VAR_9) / FUNC_1(VAR_15,VAR_9);
     *VAR_4 = FUNC_1(VAR_15,VAR_9) * FUNC_3(VAR_5 * VAR_5 + 1.);
 }
    } else {
 if (VAR_9 < VAR_15) {
     VAR_11 = VAR_14 / VAR_15 + 1.;
     VAR_12 = (VAR_15 - VAR_14) / VAR_15;

     VAR_5 = VAR_9 / VAR_15;
     VAR_13 = VAR_5 * VAR_5;
     VAR_7 = 2. / (FUNC_3(VAR_11 * VAR_11 + VAR_13) + FUNC_3(VAR_12 * VAR_12 + VAR_13));
     *VAR_3 = VAR_14 * VAR_7;
     *VAR_4 = VAR_15 / VAR_7;
 } else {
     VAR_13 = VAR_15 / VAR_9;
     if (VAR_13 == 0.) {







  *VAR_3 = VAR_14 * VAR_15 / VAR_9;
  *VAR_4 = VAR_9;
     } else {
  VAR_11 = VAR_14 / VAR_15 + 1.;
  VAR_12 = (VAR_15 - VAR_14) / VAR_15;

  VAR_5 = VAR_11 * VAR_13;

  VAR_6 = VAR_12 * VAR_13;
  VAR_7 = 1. / (FUNC_3(VAR_5 * VAR_5 + 1.) + FUNC_3(VAR_6 * VAR_6 + 1.));
  *VAR_3 = VAR_14 * VAR_7 * VAR_13;
  *VAR_3 += *VAR_3;
  *VAR_4 = VAR_9 / (VAR_7 + VAR_7);
     }
 }
    }
    return 0;



}
