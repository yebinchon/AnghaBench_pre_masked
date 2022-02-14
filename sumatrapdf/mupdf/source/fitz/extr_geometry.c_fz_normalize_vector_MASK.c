
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {float x; float y; } ;
typedef TYPE_1__ fz_point ;


 float FUNC_0 (float) ;

fz_point
FUNC_1(fz_point VAR_0)
{
 float VAR_1 = VAR_0.x * VAR_0.x + VAR_0.y * VAR_0.y;
 if (VAR_1 != 0)
 {
  VAR_1 = FUNC_0(VAR_1);
  VAR_0.x /= VAR_1;
  VAR_0.y /= VAR_1;
 }
 return VAR_0;
}
