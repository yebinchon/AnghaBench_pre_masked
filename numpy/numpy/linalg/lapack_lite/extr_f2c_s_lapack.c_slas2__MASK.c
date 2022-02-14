
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef float real ;


 float FUNC_0 (float) ;
 float FUNC_1 (float,float) ;
 float FUNC_2 (float,float) ;
 float FUNC_3 (float) ;

int FUNC_4(real *VAR_0, real *VAR_1, real *VAR_2, real *VAR_3, real *
 VAR_4)
{

    real VAR_5, VAR_6;


    static real VAR_7, VAR_8, VAR_9, VAR_10, VAR_11, VAR_12, VAR_13, VAR_14, VAR_15;
    VAR_8 = FUNC_0(*VAR_0);
    VAR_9 = FUNC_0(*VAR_1);
    VAR_10 = FUNC_0(*VAR_2);
    VAR_14 = FUNC_2(VAR_8,VAR_10);
    VAR_15 = FUNC_1(VAR_8,VAR_10);
    if (VAR_14 == 0.f) {
 *VAR_3 = 0.f;
 if (VAR_15 == 0.f) {
     *VAR_4 = VAR_9;
 } else {

     VAR_5 = FUNC_2(VAR_15,VAR_9) / FUNC_1(VAR_15,VAR_9);
     *VAR_4 = FUNC_1(VAR_15,VAR_9) * FUNC_3(VAR_5 * VAR_5 + 1.f);
 }
    } else {
 if (VAR_9 < VAR_15) {
     VAR_11 = VAR_14 / VAR_15 + 1.f;
     VAR_12 = (VAR_15 - VAR_14) / VAR_15;

     VAR_5 = VAR_9 / VAR_15;
     VAR_13 = VAR_5 * VAR_5;
     VAR_7 = 2.f / (FUNC_3(VAR_11 * VAR_11 + VAR_13) + FUNC_3(VAR_12 * VAR_12 + VAR_13));
     *VAR_3 = VAR_14 * VAR_7;
     *VAR_4 = VAR_15 / VAR_7;
 } else {
     VAR_13 = VAR_15 / VAR_9;
     if (VAR_13 == 0.f) {







  *VAR_3 = VAR_14 * VAR_15 / VAR_9;
  *VAR_4 = VAR_9;
     } else {
  VAR_11 = VAR_14 / VAR_15 + 1.f;
  VAR_12 = (VAR_15 - VAR_14) / VAR_15;

  VAR_5 = VAR_11 * VAR_13;

  VAR_6 = VAR_12 * VAR_13;
  VAR_7 = 1.f / (FUNC_3(VAR_5 * VAR_5 + 1.f) + FUNC_3(VAR_6 * VAR_6 + 1.f)
   );
  *VAR_3 = VAR_14 * VAR_7 * VAR_13;
  *VAR_3 += *VAR_3;
  *VAR_4 = VAR_9 / (VAR_7 + VAR_7);
     }
 }
    }
    return 0;



}
