
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef TYPE_1__* gdImagePtr ;
struct TYPE_3__ {int colorsTotal; int* red; int* green; int* blue; int* alpha; scalar_t__* open; scalar_t__ trueColor; } ;


 int FUNC_0 (int,int,int,int) ;

int FUNC_1 (gdImagePtr VAR_0, int VAR_1, int VAR_2, int VAR_3, int VAR_4)
{
 int VAR_5;
 if (VAR_0->trueColor) {
  return FUNC_0(VAR_1, VAR_2, VAR_3, VAR_4);
 }
 for (VAR_5 = 0; VAR_5 < VAR_0->colorsTotal; VAR_5++) {
  if (VAR_0->open[VAR_5]) {
   continue;
  }
  if ((VAR_0->red[VAR_5] == VAR_1) && (VAR_0->green[VAR_5] == VAR_2) && (VAR_0->blue[VAR_5] == VAR_3) && (VAR_0->alpha[VAR_5] == VAR_4)) {
   return VAR_5;
  }
 }
 return -1;
}
