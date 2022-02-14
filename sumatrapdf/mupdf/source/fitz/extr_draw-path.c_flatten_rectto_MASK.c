
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {float b; float c; float a; float e; float d; float f; } ;
typedef TYPE_1__ fz_matrix ;
typedef int fz_context ;
struct TYPE_4__ {int rast; TYPE_1__ ctm; } ;
typedef TYPE_2__ flatten_arg ;


 int FUNC_0 (int *,void*) ;
 int FUNC_1 (int *,void*,float,float) ;
 int FUNC_2 (int *,void*,float,float) ;
 scalar_t__ FUNC_3 (int *,int ) ;
 int FUNC_4 (int *,int ,float,float,float,float) ;

__attribute__((used)) static void
FUNC_5(fz_context *VAR_0, void *VAR_1, float VAR_2, float VAR_3, float VAR_4, float VAR_5)
{
 flatten_arg *VAR_6 = (flatten_arg *)VAR_1;
 fz_matrix VAR_7 = VAR_6->ctm;

 FUNC_2(VAR_0, VAR_1, VAR_2, VAR_3);

 if (FUNC_3(VAR_0, VAR_6->rast))
 {


  if (VAR_7.b == 0 && VAR_7.c == 0)
  {
   float VAR_8 = VAR_7.a * VAR_2 + VAR_7.e;
   float VAR_9 = VAR_7.d * VAR_3 + VAR_7.f;
   float VAR_10 = VAR_7.a * VAR_4 + VAR_7.e;
   float VAR_11 = VAR_7.d * VAR_5 + VAR_7.f;
   FUNC_4(VAR_0, VAR_6->rast, VAR_8, VAR_9, VAR_10, VAR_11);
   return;
  }
  else if (VAR_7.a == 0 && VAR_7.d == 0)
  {
   float VAR_12 = VAR_7.c * VAR_3 + VAR_7.e;
   float VAR_13 = VAR_7.b * VAR_2 + VAR_7.f;
   float VAR_14 = VAR_7.c * VAR_5 + VAR_7.e;
   float VAR_15 = VAR_7.b * VAR_4 + VAR_7.f;
   FUNC_4(VAR_0, VAR_6->rast, VAR_12, VAR_15, VAR_14, VAR_13);
   return;
  }
 }

 FUNC_1(VAR_0, VAR_1, VAR_4, VAR_3);
 FUNC_1(VAR_0, VAR_1, VAR_4, VAR_5);
 FUNC_1(VAR_0, VAR_1, VAR_2, VAR_5);
 FUNC_0(VAR_0, VAR_1);
}
