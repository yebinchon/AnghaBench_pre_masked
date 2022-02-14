
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int integer ;
struct TYPE_3__ {int r; int i; } ;
typedef TYPE_1__ doublecomplex ;


 int FUNC_0 (int,int) ;

integer FUNC_1(integer *VAR_0, integer *VAR_1, doublecomplex *VAR_2, integer *VAR_3)
{

    integer VAR_4, VAR_5, VAR_6, VAR_7, VAR_8;


    static integer VAR_9, VAR_10;
    VAR_4 = *VAR_3;
    VAR_5 = 1 + VAR_4;
    VAR_2 -= VAR_5;


    if (*VAR_0 == 0) {
 VAR_6 = *VAR_0;
    } else {
 VAR_7 = *VAR_0 + VAR_4;
 VAR_8 = *VAR_0 + *VAR_1 * VAR_4;
 if (VAR_2[VAR_7].r != 0. || VAR_2[VAR_7].i != 0. || (VAR_2[VAR_8].r != 0. || VAR_2[VAR_8]
  .i != 0.)) {
     VAR_6 = *VAR_0;
 } else {

     VAR_6 = 0;
     VAR_7 = *VAR_1;
     for (VAR_10 = 1; VAR_10 <= VAR_7; ++VAR_10) {
  for (VAR_9 = *VAR_0; VAR_9 >= 1; --VAR_9) {
      VAR_8 = VAR_9 + VAR_10 * VAR_4;
      if (VAR_2[VAR_8].r != 0. || VAR_2[VAR_8].i != 0.) {
   goto L10;
      }
  }
L10:
  VAR_6 = FUNC_0(VAR_6,VAR_9);
     }
 }
    }
    return VAR_6;
}
