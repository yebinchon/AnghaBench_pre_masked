
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ x0; scalar_t__ x1; scalar_t__ y0; scalar_t__ y1; } ;
typedef TYPE_1__ fz_rect ;
struct TYPE_6__ {scalar_t__ x; scalar_t__ y; } ;
typedef TYPE_2__ fz_point ;



int FUNC_0(fz_point VAR_0, fz_rect VAR_1)
{
 return (VAR_0.x >= VAR_1.x0 && VAR_0.x < VAR_1.x1 && VAR_0.y >= VAR_1.y0 && VAR_0.y < VAR_1.y1);
}
