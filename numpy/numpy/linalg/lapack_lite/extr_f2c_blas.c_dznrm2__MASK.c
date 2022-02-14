
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
 int FUNC_2 (int) ;

doublereal FUNC_3(integer *VAR_0, doublecomplex *VAR_1, integer *VAR_2)
{

    integer VAR_3, VAR_4, VAR_5;
    doublereal VAR_6, VAR_7;


    static integer VAR_8;
    static doublereal VAR_9, VAR_10, VAR_11, VAR_12;
    --VAR_1;


    if (*VAR_0 < 1 || *VAR_2 < 1) {
 VAR_11 = 0.;
    } else {
 VAR_12 = 0.;
 VAR_9 = 1.;






 VAR_3 = (*VAR_0 - 1) * *VAR_2 + 1;
 VAR_4 = *VAR_2;
 for (VAR_8 = 1; VAR_4 < 0 ? VAR_8 >= VAR_3 : VAR_8 <= VAR_3; VAR_8 += VAR_4) {
     VAR_5 = VAR_8;
     if (VAR_1[VAR_5].r != 0.) {
  VAR_5 = VAR_8;
  VAR_10 = (VAR_7 = VAR_1[VAR_5].r, FUNC_0(VAR_7));
  if (VAR_12 < VAR_10) {

      VAR_7 = VAR_12 / VAR_10;
      VAR_9 = VAR_9 * (VAR_7 * VAR_7) + 1.;
      VAR_12 = VAR_10;
  } else {

      VAR_7 = VAR_10 / VAR_12;
      VAR_9 += VAR_7 * VAR_7;
  }
     }
     if (FUNC_1(&VAR_1[VAR_8]) != 0.) {
  VAR_10 = (VAR_7 = FUNC_1(&VAR_1[VAR_8]), FUNC_0(VAR_7));
  if (VAR_12 < VAR_10) {

      VAR_7 = VAR_12 / VAR_10;
      VAR_9 = VAR_9 * (VAR_7 * VAR_7) + 1.;
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
