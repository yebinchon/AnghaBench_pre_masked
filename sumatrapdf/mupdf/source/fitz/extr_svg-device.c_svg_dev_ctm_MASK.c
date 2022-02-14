
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int * out; } ;
typedef TYPE_1__ svg_device ;
typedef int fz_output ;
struct TYPE_6__ {float a; float d; int f; int e; int c; int b; } ;
typedef TYPE_2__ fz_matrix ;
typedef int fz_context ;


 int FUNC_0 (int *,int *,char*,float,int ,int ,float,int ,int ) ;

__attribute__((used)) static void
FUNC_1(fz_context *VAR_0, svg_device *VAR_1, fz_matrix VAR_2)
{
 fz_output *VAR_3 = VAR_1->out;

 if (VAR_2.a != 1.0f || VAR_2.b != 0 || VAR_2.c != 0 || VAR_2.d != 1.0f || VAR_2.e != 0 || VAR_2.f != 0)
 {
  FUNC_0(VAR_0, VAR_3, " transform=\"matrix(%g,%g,%g,%g,%g,%g)\"",
   VAR_2.a, VAR_2.b, VAR_2.c, VAR_2.d, VAR_2.e, VAR_2.f);
 }
}
