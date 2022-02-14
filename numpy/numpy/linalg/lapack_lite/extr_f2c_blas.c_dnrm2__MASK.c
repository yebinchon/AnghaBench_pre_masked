
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int integer ;
typedef int doublereal ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;

doublereal FUNC_2(integer *VAR_0, doublereal *VAR_1, integer *VAR_2)
{

    integer VAR_3, VAR_4;
    doublereal VAR_5, VAR_6;


    static integer VAR_7;
    static doublereal VAR_8, VAR_9, VAR_10, VAR_11;
    --VAR_1;


    if (*VAR_0 < 1 || *VAR_2 < 1) {
 VAR_9 = 0.;
    } else if (*VAR_0 == 1) {
 VAR_9 = FUNC_0(VAR_1[1]);
    } else {
 VAR_10 = 0.;
 VAR_8 = 1.;






 VAR_3 = (*VAR_0 - 1) * *VAR_2 + 1;
 VAR_4 = *VAR_2;
 for (VAR_7 = 1; VAR_4 < 0 ? VAR_7 >= VAR_3 : VAR_7 <= VAR_3; VAR_7 += VAR_4) {
     if (VAR_1[VAR_7] != 0.) {
  VAR_11 = (VAR_6 = VAR_1[VAR_7], FUNC_0(VAR_6));
  if (VAR_10 < VAR_11) {

      VAR_6 = VAR_10 / VAR_11;
      VAR_8 = VAR_8 * (VAR_6 * VAR_6) + 1.;
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
