
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ y; scalar_t__ x; } ;
typedef TYPE_1__ fz_point ;
struct TYPE_6__ {float a; float c; float b; float d; scalar_t__ f; scalar_t__ e; } ;
typedef TYPE_2__ fz_matrix ;



fz_point
FUNC_0(float VAR_0, float VAR_1, fz_matrix VAR_2)
{
 fz_point VAR_3;
 VAR_3.x = VAR_0 * VAR_2.a + VAR_1 * VAR_2.c + VAR_2.e;
 VAR_3.y = VAR_0 * VAR_2.b + VAR_1 * VAR_2.d + VAR_2.f;
 return VAR_3;
}
