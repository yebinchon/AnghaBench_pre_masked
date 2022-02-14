
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef TYPE_1__* gdImagePtr ;
struct TYPE_3__ {int colorsTotal; int transparent; int * alpha; int trueColor; } ;


 int VAR_0 ;
 int VAR_1 ;

void FUNC_0 (gdImagePtr VAR_2, int VAR_3)
{
 if (VAR_3 < 0) {
  return;
 }
 if (!VAR_2->trueColor) {
  if((VAR_3 >= VAR_2->colorsTotal)) {
   return;
  }

  if (VAR_2->transparent != -1) {
   VAR_2->alpha[VAR_2->transparent] = VAR_0;
  }
  VAR_2->alpha[VAR_3] = VAR_1;
 }
 VAR_2->transparent = VAR_3;
}
