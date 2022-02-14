
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {float e; float a; float c; float f; float b; float d; } ;
typedef TYPE_1__ fz_matrix ;



fz_matrix
FUNC_0(fz_matrix VAR_0, float VAR_1, float VAR_2)
{
 VAR_0.e += VAR_1 * VAR_0.a + VAR_2 * VAR_0.c;
 VAR_0.f += VAR_1 * VAR_0.b + VAR_2 * VAR_0.d;
 return VAR_0;
}
