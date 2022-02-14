
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef TYPE_1__* gdImagePtr ;
struct TYPE_3__ {int sy; int** tpixels; int sx; unsigned char** pixels; scalar_t__ trueColor; } ;



void FUNC_0(gdImagePtr VAR_0)
{
 register int VAR_1, VAR_2;

 if (VAR_0->trueColor) {
  for (VAR_2 = 0; VAR_2 < VAR_0->sy / 2; VAR_2++) {
   int *VAR_3 = VAR_0->tpixels[VAR_2];
   int *VAR_4 = VAR_0->tpixels[VAR_0->sy - 1 - VAR_2];
   for (VAR_1 = 0; VAR_1 < VAR_0->sx; VAR_1++) {
    register int VAR_5;
    VAR_5 = VAR_3[VAR_1];
    VAR_3[VAR_1] = VAR_0->tpixels[VAR_0->sy - 1 - VAR_2][VAR_1];
    VAR_4[VAR_1] = VAR_5;
   }
  }
 } else {
  unsigned char VAR_6;
  for (VAR_2 = 0; VAR_2 < VAR_0->sy / 2; VAR_2++) {
   for (VAR_1 = 0; VAR_1 < VAR_0->sx; VAR_1++) {
    VAR_6 = VAR_0->pixels[VAR_2][VAR_1];
    VAR_0->pixels[VAR_2][VAR_1] = VAR_0->pixels[VAR_0->sy - 1 - VAR_2][VAR_1];
    VAR_0->pixels[VAR_0->sy - 1 - VAR_2][VAR_1] = VAR_6;
   }
  }
 }
 return;
}
