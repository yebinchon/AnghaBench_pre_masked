
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ x; scalar_t__ y; scalar_t__ cx; scalar_t__ cy; } ;
typedef TYPE_1__ myrect ;



int FUNC_0(myrect* VAR_0, myrect* VAR_1)
{
  if (VAR_0->x >= VAR_1->x &&
      VAR_0->y >= VAR_1->y &&
      VAR_0->x + VAR_0->cx <= VAR_1->x + VAR_1->cx &&
      VAR_0->y + VAR_0->cy <= VAR_1->y + VAR_1->cy)
    return 1;
  else
    return 0;
}
