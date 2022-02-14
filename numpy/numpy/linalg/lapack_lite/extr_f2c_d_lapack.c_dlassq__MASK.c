
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int integer ;
typedef int doublereal ;


 int FUNC_0 (int) ;

int FUNC_1(integer *VAR_0, doublereal *VAR_1, integer *VAR_2,
 doublereal *VAR_3, doublereal *VAR_4)
{

    integer VAR_5, VAR_6;
    doublereal VAR_7;


    static integer VAR_8;
    static doublereal VAR_9;
    --VAR_1;


    if (*VAR_0 > 0) {
 VAR_5 = (*VAR_0 - 1) * *VAR_2 + 1;
 VAR_6 = *VAR_2;
 for (VAR_8 = 1; VAR_6 < 0 ? VAR_8 >= VAR_5 : VAR_8 <= VAR_5; VAR_8 += VAR_6) {
     if (VAR_1[VAR_8] != 0.) {
  VAR_9 = (VAR_7 = VAR_1[VAR_8], FUNC_0(VAR_7));
  if (*VAR_3 < VAR_9) {

      VAR_7 = *VAR_3 / VAR_9;
      *VAR_4 = *VAR_4 * (VAR_7 * VAR_7) + 1;
      *VAR_3 = VAR_9;
  } else {

      VAR_7 = VAR_9 / *VAR_3;
      *VAR_4 += VAR_7 * VAR_7;
  }
     }

 }
    }
    return 0;



}
