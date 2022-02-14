
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int w; int h; int n; int stride; } ;
typedef TYPE_1__ fz_bitmap ;



void FUNC_0(fz_bitmap *VAR_0, int *VAR_1, int *VAR_2, int *VAR_3, int *VAR_4)
{
 if (!VAR_0)
 {
  if (VAR_1)
   *VAR_1 = 0;
  if (VAR_2)
   *VAR_2 = 0;
  if (VAR_3)
   *VAR_3 = 0;
  if (VAR_4)
   *VAR_4 = 0;
  return;
 }
 if (VAR_1)
  *VAR_1 = VAR_0->w;
 if (VAR_2)
  *VAR_2 = VAR_0->h;
 if (VAR_3)
  *VAR_3 = VAR_0->n;
 if (VAR_4)
  *VAR_4 = VAR_0->stride;
}
