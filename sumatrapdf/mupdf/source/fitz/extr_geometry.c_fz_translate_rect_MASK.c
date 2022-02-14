
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {float x0; float y0; float x1; float y1; } ;
typedef TYPE_1__ fz_rect ;


 scalar_t__ FUNC_0 (TYPE_1__) ;
 scalar_t__ FUNC_1 (TYPE_1__) ;

fz_rect
FUNC_2(fz_rect VAR_0, float VAR_1, float VAR_2)
{
 if (FUNC_0(VAR_0)) return VAR_0;
 if (FUNC_1(VAR_0)) return VAR_0;
 VAR_0.x0 += VAR_1;
 VAR_0.y0 += VAR_2;
 VAR_0.x1 += VAR_1;
 VAR_0.y1 += VAR_2;
 return VAR_0;
}
