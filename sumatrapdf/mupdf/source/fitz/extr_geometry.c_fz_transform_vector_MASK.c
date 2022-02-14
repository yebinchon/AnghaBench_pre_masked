
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {float x; float y; } ;
typedef TYPE_1__ fz_point ;
struct TYPE_7__ {float a; float c; float b; float d; } ;
typedef TYPE_2__ fz_matrix ;



fz_point
FUNC_0(fz_point VAR_0, fz_matrix VAR_1)
{
 float VAR_2 = VAR_0.x;
 VAR_0.x = VAR_2 * VAR_1.a + VAR_0.y * VAR_1.c;
 VAR_0.y = VAR_2 * VAR_1.b + VAR_0.y * VAR_1.d;
 return VAR_0;
}
