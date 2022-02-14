
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef float real ;
typedef int integer ;


 int FUNC_0 (int,int) ;

integer FUNC_1(integer *VAR_0, integer *VAR_1, real *VAR_2, integer *VAR_3)
{

    integer VAR_4, VAR_5, VAR_6, VAR_7;


    static integer VAR_8, VAR_9;
    VAR_4 = *VAR_3;
    VAR_5 = 1 + VAR_4;
    VAR_2 -= VAR_5;


    if (*VAR_0 == 0) {
 VAR_6 = *VAR_0;
    } else if (VAR_2[*VAR_0 + VAR_4] != 0.f || VAR_2[*VAR_0 + *VAR_1 * VAR_4] != 0.f) {
 VAR_6 = *VAR_0;
    } else {

 VAR_6 = 0;
 VAR_7 = *VAR_1;
 for (VAR_9 = 1; VAR_9 <= VAR_7; ++VAR_9) {
     for (VAR_8 = *VAR_0; VAR_8 >= 1; --VAR_8) {
  if (VAR_2[VAR_8 + VAR_9 * VAR_4] != 0.f) {
      goto L10;
  }
     }
L10:
     VAR_6 = FUNC_0(VAR_6,VAR_8);
 }
    }
    return VAR_6;
}
