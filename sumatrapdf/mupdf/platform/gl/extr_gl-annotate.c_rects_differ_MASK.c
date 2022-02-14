
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ y1; scalar_t__ x1; scalar_t__ y0; scalar_t__ x0; } ;
typedef TYPE_1__ fz_rect ;


 float FUNC_0 (scalar_t__) ;

__attribute__((used)) static int FUNC_1(fz_rect VAR_0, fz_rect VAR_1, float VAR_2)
{
 if (FUNC_0(VAR_0.x0 - VAR_1.x0) > VAR_2) return 1;
 if (FUNC_0(VAR_0.y0 - VAR_1.y0) > VAR_2) return 1;
 if (FUNC_0(VAR_0.x1 - VAR_1.x1) > VAR_2) return 1;
 if (FUNC_0(VAR_0.y1 - VAR_1.y1) > VAR_2) return 1;
 return 0;
}
