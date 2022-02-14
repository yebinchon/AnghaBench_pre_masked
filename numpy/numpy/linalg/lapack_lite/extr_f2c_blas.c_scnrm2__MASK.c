
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef float real ;
typedef int integer ;
typedef float doublereal ;
struct TYPE_4__ {float r; } ;
typedef TYPE_1__ complex ;


 int FUNC_0 (float) ;
 float FUNC_1 (TYPE_1__*) ;
 float FUNC_2 (float) ;

doublereal FUNC_3(integer *VAR_0, complex *VAR_1, integer *VAR_2)
{

    integer VAR_3, VAR_4, VAR_5;
    real VAR_6, VAR_7;


    static integer VAR_8;
    static real VAR_9, VAR_10, VAR_11, VAR_12;
    --VAR_1;


    if (*VAR_0 < 1 || *VAR_2 < 1) {
 VAR_11 = 0.f;
    } else {
 VAR_12 = 0.f;
 VAR_9 = 1.f;






 VAR_3 = (*VAR_0 - 1) * *VAR_2 + 1;
 VAR_4 = *VAR_2;
 for (VAR_8 = 1; VAR_4 < 0 ? VAR_8 >= VAR_3 : VAR_8 <= VAR_3; VAR_8 += VAR_4) {
     VAR_5 = VAR_8;
     if (VAR_1[VAR_5].r != 0.f) {
  VAR_5 = VAR_8;
  VAR_10 = (VAR_7 = VAR_1[VAR_5].r, FUNC_0(VAR_7));
  if (VAR_12 < VAR_10) {

      VAR_7 = VAR_12 / VAR_10;
      VAR_9 = VAR_9 * (VAR_7 * VAR_7) + 1.f;
      VAR_12 = VAR_10;
  } else {

      VAR_7 = VAR_10 / VAR_12;
      VAR_9 += VAR_7 * VAR_7;
  }
     }
     if (FUNC_1(&VAR_1[VAR_8]) != 0.f) {
  VAR_10 = (VAR_7 = FUNC_1(&VAR_1[VAR_8]), FUNC_0(VAR_7));
  if (VAR_12 < VAR_10) {

      VAR_7 = VAR_12 / VAR_10;
      VAR_9 = VAR_9 * (VAR_7 * VAR_7) + 1.f;
      VAR_12 = VAR_10;
  } else {

      VAR_7 = VAR_10 / VAR_12;
      VAR_9 += VAR_7 * VAR_7;
  }
     }

 }
 VAR_11 = VAR_12 * FUNC_2(VAR_9);
    }

    VAR_6 = VAR_11;
    return VAR_6;



}
