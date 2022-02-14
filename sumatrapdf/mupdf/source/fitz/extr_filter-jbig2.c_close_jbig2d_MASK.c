
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int chain; int ctx; int gctx; scalar_t__ page; } ;
typedef TYPE_1__ fz_jbig2d ;
typedef int fz_context ;


 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,TYPE_1__*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,scalar_t__) ;

__attribute__((used)) static void
FUNC_5(fz_context *VAR_0, void *VAR_1)
{
 fz_jbig2d *VAR_2 = VAR_1;
 if (VAR_2->page)
  FUNC_4(VAR_2->ctx, VAR_2->page);
 FUNC_0(VAR_0, VAR_2->gctx);
 FUNC_3(VAR_2->ctx);
 FUNC_1(VAR_0, VAR_2->chain);
 FUNC_2(VAR_0, VAR_2);
}
