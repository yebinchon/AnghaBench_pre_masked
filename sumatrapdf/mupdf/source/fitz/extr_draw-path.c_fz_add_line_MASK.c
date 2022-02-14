
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {float a; float c; float e; float b; float d; float f; } ;
struct TYPE_5__ {int rast; TYPE_1__ ctm; } ;
typedef TYPE_2__ sctx ;
typedef int fz_context ;


 int FUNC_0 (int *,int ,float,float,float,float,int) ;

__attribute__((used)) static void
FUNC_1(fz_context *VAR_0, sctx *VAR_1, float VAR_2, float VAR_3, float VAR_4, float VAR_5, int VAR_6)
{
 float VAR_7 = VAR_1->ctm.a * VAR_2 + VAR_1->ctm.c * VAR_3 + VAR_1->ctm.e;
 float VAR_8 = VAR_1->ctm.b * VAR_2 + VAR_1->ctm.d * VAR_3 + VAR_1->ctm.f;
 float VAR_9 = VAR_1->ctm.a * VAR_4 + VAR_1->ctm.c * VAR_5 + VAR_1->ctm.e;
 float VAR_10 = VAR_1->ctm.b * VAR_4 + VAR_1->ctm.d * VAR_5 + VAR_1->ctm.f;

 FUNC_0(VAR_0, VAR_1->rast, VAR_7, VAR_8, VAR_9, VAR_10, VAR_6);
}
