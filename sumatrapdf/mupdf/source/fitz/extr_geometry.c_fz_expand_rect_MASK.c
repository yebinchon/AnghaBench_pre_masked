
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {float x0; float y0; float x1; float y1; } ;
typedef TYPE_1__ fz_rect ;


 scalar_t__ FUNC_0 (TYPE_1__) ;

fz_rect
FUNC_1(fz_rect VAR_0, float VAR_1)
{
 if (FUNC_0(VAR_0)) return VAR_0;
 VAR_0.x0 -= VAR_1;
 VAR_0.y0 -= VAR_1;
 VAR_0.x1 += VAR_1;
 VAR_0.y1 += VAR_1;
 return VAR_0;
}
