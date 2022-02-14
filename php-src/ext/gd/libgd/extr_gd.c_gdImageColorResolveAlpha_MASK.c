
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef TYPE_1__* gdImagePtr ;
struct TYPE_3__ {int colorsTotal; int transparent; int* red; int* green; int* blue; int* alpha; scalar_t__* open; scalar_t__ trueColor; } ;


 int VAR_0 ;
 int FUNC_0 (int,int,int,int) ;

int FUNC_1 (gdImagePtr VAR_1, int VAR_2, int VAR_3, int VAR_4, int VAR_5)
{
  int VAR_6;
  int VAR_7 = -1;
  int VAR_8 = -1;
  long VAR_9, VAR_10, VAR_11, VAR_12, VAR_13;
  long VAR_14 = 4 * 255 * 255;
  if (VAR_1->trueColor)
    {
      return FUNC_0 (VAR_2, VAR_3, VAR_4, VAR_5);
    }

  for (VAR_6 = 0; VAR_6 < VAR_1->colorsTotal; VAR_6++)
    {
      if (VAR_1->open[VAR_6])
 {
   VAR_8 = VAR_6;
   continue;
 }
      if (VAR_6 == VAR_1->transparent)
        {


          continue;
 }
      VAR_9 = (long) (VAR_1->red[VAR_6] - VAR_2);
      VAR_10 = (long) (VAR_1->green[VAR_6] - VAR_3);
      VAR_11 = (long) (VAR_1->blue[VAR_6] - VAR_4);
      VAR_12 = (long) (VAR_1->alpha[VAR_6] - VAR_5);
      VAR_13 = VAR_9 * VAR_9 + VAR_10 * VAR_10 + VAR_11 * VAR_11 + VAR_12 * VAR_12;
      if (VAR_13 < VAR_14)
 {
   if (VAR_13 == 0)
     {
       return VAR_6;
     }
   VAR_14 = VAR_13;
   VAR_7 = VAR_6;
 }
    }

  if (VAR_8 == -1)
    {
      VAR_8 = VAR_1->colorsTotal;
      if (VAR_8 == VAR_0)
 {
   return VAR_7;
 }
      VAR_1->colorsTotal++;
    }
  VAR_1->red[VAR_8] = VAR_2;
  VAR_1->green[VAR_8] = VAR_3;
  VAR_1->blue[VAR_8] = VAR_4;
  VAR_1->alpha[VAR_8] = VAR_5;
  VAR_1->open[VAR_8] = 0;
  return VAR_8;
}
