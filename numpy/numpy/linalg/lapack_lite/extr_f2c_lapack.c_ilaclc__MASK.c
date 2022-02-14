
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int integer ;
struct TYPE_3__ {float r; float i; } ;
typedef TYPE_1__ complex ;



integer FUNC_0(integer *VAR_0, integer *VAR_1, complex *VAR_2, integer *VAR_3)
{

    integer VAR_4, VAR_5, VAR_6, VAR_7, VAR_8;


    static integer VAR_9;
    VAR_4 = *VAR_3;
    VAR_5 = 1 + VAR_4;
    VAR_2 -= VAR_5;


    if (*VAR_1 == 0) {
 VAR_6 = *VAR_1;
    } else {
 VAR_7 = *VAR_1 * VAR_4 + 1;
 VAR_8 = *VAR_0 + *VAR_1 * VAR_4;
 if (VAR_2[VAR_7].r != 0.f || VAR_2[VAR_7].i != 0.f || (VAR_2[VAR_8].r != 0.f || VAR_2[
  VAR_8].i != 0.f)) {
     VAR_6 = *VAR_1;
 } else {

     for (VAR_6 = *VAR_1; VAR_6 >= 1; --VAR_6) {
  VAR_7 = *VAR_0;
  for (VAR_9 = 1; VAR_9 <= VAR_7; ++VAR_9) {
      VAR_8 = VAR_9 + VAR_6 * VAR_4;
      if (VAR_2[VAR_8].r != 0.f || VAR_2[VAR_8].i != 0.f) {
   return VAR_6;
      }
  }
     }
 }
    }
    return VAR_6;
}
