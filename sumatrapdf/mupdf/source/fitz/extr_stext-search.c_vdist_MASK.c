
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {float x; float y; } ;
typedef TYPE_1__ fz_point ;


 float FUNC_0 (float) ;

__attribute__((used)) static float FUNC_1(fz_point *VAR_0, fz_point *VAR_1, fz_point *VAR_2)
{
 float VAR_3 = VAR_2->x - VAR_1->x;
 float VAR_4 = VAR_2->y - VAR_1->y;
 return FUNC_0(VAR_3 * VAR_0->y + VAR_4 * VAR_0->x);
}
