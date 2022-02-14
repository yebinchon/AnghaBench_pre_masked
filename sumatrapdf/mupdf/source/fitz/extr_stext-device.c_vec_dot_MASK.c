
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {float x; float y; } ;
typedef TYPE_1__ fz_point ;



__attribute__((used)) static float
FUNC_0(const fz_point *VAR_0, const fz_point *VAR_1)
{
 return VAR_0->x * VAR_1->x + VAR_0->y * VAR_1->y;
}
