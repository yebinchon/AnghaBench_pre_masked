
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int x1; int x0; int y1; int y0; } ;
typedef TYPE_1__ fz_irect ;



void FUNC_0(void *VAR_0, int VAR_1, int VAR_2, int VAR_3, fz_irect *VAR_4)
{
 (void)VAR_0;

 if ((VAR_4->x1-VAR_4->x0)*(VAR_4->y1-VAR_4->y0) >= (VAR_1*VAR_2/10)*9)
 {


  VAR_4->x0 = 0;
  VAR_4->y0 = 0;
  VAR_4->x1 = VAR_1;
  VAR_4->y1 = VAR_2;
 }
 else
 {

  if (VAR_4->x0 <= VAR_1/100)
   VAR_4->x0 = 0;
  if (VAR_4->y0 <= VAR_2/100)
   VAR_4->y0 = 0;
  if (VAR_4->x1 >= VAR_1*99/100)
   VAR_4->x1 = VAR_1;
  if (VAR_4->y1 >= VAR_2*99/100)
   VAR_4->y1 = VAR_2;
 }
}
