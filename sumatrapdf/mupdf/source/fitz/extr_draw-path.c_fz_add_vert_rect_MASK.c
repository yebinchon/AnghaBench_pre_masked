
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {float b; float c; float a; float e; float d; float f; } ;
struct TYPE_6__ {int rast; TYPE_1__ ctm; } ;
typedef TYPE_2__ sctx ;
typedef int fz_context ;


 int FUNC_0 (int *,TYPE_2__*,float,float,float,float,int) ;
 scalar_t__ FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,int ,float,float,float,float) ;

__attribute__((used)) static void
FUNC_3(fz_context *VAR_0, sctx *VAR_1, float VAR_2, float VAR_3, float VAR_4, float VAR_5)
{
 if (FUNC_1(VAR_0, VAR_1->rast))
 {
  if (VAR_1->ctm.b == 0 && VAR_1->ctm.c == 0)
  {
   float VAR_6 = VAR_1->ctm.a * VAR_2 + VAR_1->ctm.e;
   float VAR_7 = VAR_1->ctm.d * VAR_3 + VAR_1->ctm.f;
   float VAR_8 = VAR_1->ctm.a * VAR_4 + VAR_1->ctm.e;
   float VAR_9 = VAR_1->ctm.d * VAR_5 + VAR_1->ctm.f;
   FUNC_2(VAR_0, VAR_1->rast, VAR_6, VAR_9, VAR_8, VAR_7);
   return;
  }
  else if (VAR_1->ctm.a == 0 && VAR_1->ctm.d == 0)
  {
   float VAR_10 = VAR_1->ctm.c * VAR_3 + VAR_1->ctm.e;
   float VAR_11 = VAR_1->ctm.b * VAR_2 + VAR_1->ctm.f;
   float VAR_12 = VAR_1->ctm.c * VAR_5 + VAR_1->ctm.e;
   float VAR_13 = VAR_1->ctm.b * VAR_4 + VAR_1->ctm.f;
   FUNC_2(VAR_0, VAR_1->rast, VAR_10, VAR_11, VAR_12, VAR_13);
   return;
  }
 }

 FUNC_0(VAR_0, VAR_1, VAR_4, VAR_3, VAR_2, VAR_3, 0);
 FUNC_0(VAR_0, VAR_1, VAR_2, VAR_5, VAR_4, VAR_5, 1);
}
