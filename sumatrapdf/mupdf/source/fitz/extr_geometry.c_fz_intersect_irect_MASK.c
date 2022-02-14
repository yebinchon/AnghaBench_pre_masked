
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ x0; scalar_t__ y0; scalar_t__ x1; scalar_t__ y1; } ;
typedef TYPE_1__ fz_irect ;


 TYPE_1__ VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_1__) ;
 scalar_t__ FUNC_1 (TYPE_1__) ;

fz_irect
FUNC_2(fz_irect VAR_1, fz_irect VAR_2)
{

 if (FUNC_0(VAR_1)) return VAR_0;
 if (FUNC_0(VAR_2)) return VAR_0;
 if (FUNC_1(VAR_2)) return VAR_1;
 if (FUNC_1(VAR_1)) return VAR_2;
 if (VAR_1.x0 < VAR_2.x0)
  VAR_1.x0 = VAR_2.x0;
 if (VAR_1.y0 < VAR_2.y0)
  VAR_1.y0 = VAR_2.y0;
 if (VAR_1.x1 > VAR_2.x1)
  VAR_1.x1 = VAR_2.x1;
 if (VAR_1.y1 > VAR_2.y1)
  VAR_1.y1 = VAR_2.y1;
 if (VAR_1.x1 < VAR_1.x0 || VAR_1.y1 < VAR_1.y0)
  return VAR_0;
 return VAR_1;
}
