
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int fz_rasterizer ;
struct TYPE_3__ {float a; float c; float e; float b; float d; float f; } ;
typedef TYPE_1__ fz_matrix ;
typedef int fz_context ;


 int FUNC_0 (int *,int *,float,float,float,float,int ) ;

__attribute__((used)) static void
FUNC_1(fz_context *VAR_0, fz_rasterizer *VAR_1, fz_matrix VAR_2, float VAR_3, float VAR_4, float VAR_5, float VAR_6)
{
 float VAR_7 = VAR_2.a * VAR_3 + VAR_2.c * VAR_4 + VAR_2.e;
 float VAR_8 = VAR_2.b * VAR_3 + VAR_2.d * VAR_4 + VAR_2.f;
 float VAR_9 = VAR_2.a * VAR_5 + VAR_2.c * VAR_6 + VAR_2.e;
 float VAR_10 = VAR_2.b * VAR_5 + VAR_2.d * VAR_6 + VAR_2.f;
 FUNC_0(VAR_0, VAR_1, VAR_7, VAR_8, VAR_9, VAR_10, 0);
}
