
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ x0; scalar_t__ y0; scalar_t__ x1; scalar_t__ y1; } ;
typedef TYPE_1__ fz_rect ;


 scalar_t__ FUNC_0 (TYPE_1__) ;
 scalar_t__ FUNC_1 (TYPE_1__) ;

fz_rect
FUNC_2(fz_rect VAR_0, fz_rect VAR_1)
{

 if (FUNC_0(VAR_1)) return VAR_0;
 if (FUNC_0(VAR_0)) return VAR_1;
 if (FUNC_1(VAR_0)) return VAR_0;
 if (FUNC_1(VAR_1)) return VAR_1;
 if (VAR_0.x0 > VAR_1.x0)
  VAR_0.x0 = VAR_1.x0;
 if (VAR_0.y0 > VAR_1.y0)
  VAR_0.y0 = VAR_1.y0;
 if (VAR_0.x1 < VAR_1.x1)
  VAR_0.x1 = VAR_1.x1;
 if (VAR_0.y1 < VAR_1.y1)
  VAR_0.y1 = VAR_1.y1;
 return VAR_0;
}
