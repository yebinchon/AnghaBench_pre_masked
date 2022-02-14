
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int y1; int x1; int y0; int x0; } ;
typedef TYPE_1__ fz_rect ;
struct TYPE_6__ {int y1; int x1; int y0; int x0; } ;
typedef TYPE_2__ fz_irect ;



fz_rect
FUNC_0(fz_irect VAR_0)
{
 fz_rect VAR_1;
 VAR_1.x0 = VAR_0.x0;
 VAR_1.y0 = VAR_0.y0;
 VAR_1.x1 = VAR_0.x1;
 VAR_1.y1 = VAR_0.y1;
 return VAR_1;
}
