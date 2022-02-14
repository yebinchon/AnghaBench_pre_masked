
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int x0; int x1; int y0; int y1; } ;
typedef TYPE_1__ fz_irect ;



int FUNC_0(int VAR_0, int VAR_1, fz_irect VAR_2)
{
 return (VAR_0 >= VAR_2.x0 && VAR_0 < VAR_2.x1 && VAR_1 >= VAR_2.y0 && VAR_1 < VAR_2.y1);
}
