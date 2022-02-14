
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int integer ;
typedef int doublereal ;
struct TYPE_4__ {int r; } ;
typedef TYPE_1__ doublecomplex ;


 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__*) ;

int FUNC_2(integer *VAR_0, doublecomplex *VAR_1, integer *VAR_2,
 doublereal *VAR_3, doublereal *VAR_4)
{

    integer VAR_5, VAR_6, VAR_7;
    doublereal VAR_8;


    static integer VAR_9;
    static doublereal VAR_10;
    --VAR_1;


    if (*VAR_0 > 0) {
 VAR_5 = (*VAR_0 - 1) * *VAR_2 + 1;
 VAR_6 = *VAR_2;
 for (VAR_9 = 1; VAR_6 < 0 ? VAR_9 >= VAR_5 : VAR_9 <= VAR_5; VAR_9 += VAR_6) {
     VAR_7 = VAR_9;
     if (VAR_1[VAR_7].r != 0.) {
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
     if (FUNC_1(&VAR_1[VAR_9]) != 0.) {
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
