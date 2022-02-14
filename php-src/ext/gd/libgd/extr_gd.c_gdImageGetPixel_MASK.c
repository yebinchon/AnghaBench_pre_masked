
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef TYPE_1__* gdImagePtr ;
struct TYPE_4__ {int** tpixels; int** pixels; scalar_t__ trueColor; } ;


 scalar_t__ FUNC_0 (TYPE_1__*,int,int) ;

int FUNC_1 (gdImagePtr VAR_0, int VAR_1, int VAR_2)
{
 if (FUNC_0(VAR_0, VAR_1, VAR_2)) {
  if (VAR_0->trueColor) {
   return VAR_0->tpixels[VAR_2][VAR_1];
  } else {
   return VAR_0->pixels[VAR_2][VAR_1];
  }
 } else {
  return 0;
 }
}
