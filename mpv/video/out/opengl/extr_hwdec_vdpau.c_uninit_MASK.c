
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ra_hwdec {int devs; struct priv_owner* priv; } ;
struct priv_owner {TYPE_1__* ctx; } ;
struct TYPE_2__ {int hwctx; } ;


 int FUNC_0 (int ,int *) ;
 int FUNC_1 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_2(struct ra_hwdec *VAR_0)
{
    struct priv_owner *VAR_1 = VAR_0->priv;

    if (VAR_1->ctx)
        FUNC_0(VAR_0->devs, &VAR_1->ctx->hwctx);
    FUNC_1(VAR_1->ctx);
}
