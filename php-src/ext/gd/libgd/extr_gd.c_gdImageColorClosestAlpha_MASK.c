
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
 long VAR_6, VAR_7, VAR_8, VAR_9;
 int VAR_10 = (-1);
 int VAR_11 = 1;
 long VAR_12 = 0;

 if (VAR_0->trueColor) {
  return FUNC_0(VAR_1, VAR_2, VAR_3, VAR_4);
 }
 for (VAR_5 = 0; VAR_5 < VAR_0->colorsTotal; VAR_5++) {
  long VAR_13;
  if (VAR_0->open[VAR_5]) {
   continue;
  }
  VAR_6 = VAR_0->red[VAR_5] - VAR_1;
  VAR_7 = VAR_0->green[VAR_5] - VAR_2;
  VAR_8 = VAR_0->blue[VAR_5] - VAR_3;

  VAR_9 = VAR_0->alpha[VAR_5] - VAR_4;
  VAR_13 = VAR_6 * VAR_6 + VAR_7 * VAR_7 + VAR_8 * VAR_8 + VAR_9 * VAR_9;
  if (VAR_11 || (VAR_13 < VAR_12)) {
   VAR_12 = VAR_13;
   VAR_10 = VAR_5;
   VAR_11 = 0;
  }
 }
 return VAR_10;
}
