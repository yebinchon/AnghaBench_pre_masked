
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {float x; float y; } ;
typedef TYPE_1__ fz_point ;


 float FUNC_0 (float) ;

__attribute__((used)) static float
FUNC_1(const fz_point VAR_0, const fz_point VAR_1)
{
 float VAR_2 = VAR_0.x * VAR_1.y - VAR_0.y * VAR_1.x;
 float VAR_3 = (VAR_2 < 0 ? -1 : 1);
 float VAR_4 = VAR_0.x * VAR_0.x + VAR_0.y * VAR_0.y;
 float VAR_5 = VAR_1.x * VAR_1.x + VAR_1.y * VAR_1.y;
 float VAR_6 = VAR_0.x * VAR_1.x + VAR_0.y * VAR_1.y;
 float VAR_7 = VAR_6 / (VAR_4 * VAR_5);

 if (VAR_7 < -1) VAR_7 = -1;
 if (VAR_7 > 1) VAR_7 = 1;
 return VAR_3 * FUNC_0(VAR_7);
}
