
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int real ;
typedef int integer ;
struct TYPE_4__ {float r; } ;
typedef TYPE_1__ complex ;


 int FUNC_0 (int) ;
 float FUNC_1 (TYPE_1__*) ;

int FUNC_2(integer *VAR_0, complex *VAR_1, integer *VAR_2, real *
 VAR_3, real *VAR_4)
{

    integer VAR_5, VAR_6, VAR_7;
    real VAR_8;


    static integer VAR_9;
    static real VAR_10;
    --VAR_1;


    if (*VAR_0 > 0) {
 VAR_5 = (*VAR_0 - 1) * *VAR_2 + 1;
 VAR_6 = *VAR_2;
 for (VAR_9 = 1; VAR_6 < 0 ? VAR_9 >= VAR_5 : VAR_9 <= VAR_5; VAR_9 += VAR_6) {
     VAR_7 = VAR_9;
     if (VAR_1[VAR_7].r != 0.f) {
  VAR_7 = VAR_9;
  VAR_10 = (VAR_8 = VAR_1[VAR_7].r, FUNC_0(VAR_8));
  if (*VAR_3 < VAR_10) {

      VAR_8 = *VAR_3 / VAR_10;
      *VAR_4 = *VAR_4 * (VAR_8 * VAR_8) + 1;
      *VAR_3 = VAR_10;
  } else {

      VAR_8 = VAR_10 / *VAR_3;
      *VAR_4 += VAR_8 * VAR_8;
  }
     }
     if (FUNC_1(&VAR_1[VAR_9]) != 0.f) {
  VAR_10 = (VAR_8 = FUNC_1(&VAR_1[VAR_9]), FUNC_0(VAR_8));
  if (*VAR_3 < VAR_10) {

      VAR_8 = *VAR_3 / VAR_10;
      *VAR_4 = *VAR_4 * (VAR_8 * VAR_8) + 1;
      *VAR_3 = VAR_10;
  } else {

      VAR_8 = VAR_10 / *VAR_3;
      *VAR_4 += VAR_8 * VAR_8;
  }
     }

 }
    }

    return 0;



}
