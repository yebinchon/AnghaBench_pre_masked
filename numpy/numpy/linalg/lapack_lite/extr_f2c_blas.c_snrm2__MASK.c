
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef float real ;
typedef int integer ;
typedef float doublereal ;


 float FUNC_0 (float) ;
 float FUNC_1 (float) ;

doublereal FUNC_2(integer *VAR_0, real *VAR_1, integer *VAR_2)
{

    integer VAR_3, VAR_4;
    real VAR_5, VAR_6;


    static integer VAR_7;
    static real VAR_8, VAR_9, VAR_10, VAR_11;
    --VAR_1;


    if (*VAR_0 < 1 || *VAR_2 < 1) {
 VAR_9 = 0.f;
    } else if (*VAR_0 == 1) {
 VAR_9 = FUNC_0(VAR_1[1]);
    } else {
 VAR_10 = 0.f;
 VAR_8 = 1.f;






 VAR_3 = (*VAR_0 - 1) * *VAR_2 + 1;
 VAR_4 = *VAR_2;
 for (VAR_7 = 1; VAR_4 < 0 ? VAR_7 >= VAR_3 : VAR_7 <= VAR_3; VAR_7 += VAR_4) {
     if (VAR_1[VAR_7] != 0.f) {
  VAR_11 = (VAR_6 = VAR_1[VAR_7], FUNC_0(VAR_6));
  if (VAR_10 < VAR_11) {

      VAR_6 = VAR_10 / VAR_11;
      VAR_8 = VAR_8 * (VAR_6 * VAR_6) + 1.f;
      VAR_10 = VAR_11;
  } else {

      VAR_6 = VAR_11 / VAR_10;
      VAR_8 += VAR_6 * VAR_6;
  }
     }

 }
 VAR_9 = VAR_10 * FUNC_1(VAR_8);
    }

    VAR_5 = VAR_9;
    return VAR_5;



}
