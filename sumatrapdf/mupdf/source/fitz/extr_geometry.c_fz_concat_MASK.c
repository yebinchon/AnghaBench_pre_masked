
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int a; int b; int c; int d; int e; int f; } ;
typedef TYPE_1__ fz_matrix ;



fz_matrix
FUNC_0(fz_matrix VAR_0, fz_matrix VAR_1)
{
 fz_matrix VAR_2;
 VAR_2.a = VAR_0.a * VAR_1.a + VAR_0.b * VAR_1.c;
 VAR_2.b = VAR_0.a * VAR_1.b + VAR_0.b * VAR_1.d;
 VAR_2.c = VAR_0.c * VAR_1.a + VAR_0.d * VAR_1.c;
 VAR_2.d = VAR_0.c * VAR_1.b + VAR_0.d * VAR_1.d;
 VAR_2.e = VAR_0.e * VAR_1.a + VAR_0.f * VAR_1.c + VAR_1.e;
 VAR_2.f = VAR_0.e * VAR_1.b + VAR_0.f * VAR_1.d + VAR_1.f;
 return VAR_2;
}
