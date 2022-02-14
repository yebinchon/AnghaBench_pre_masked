
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct vo {struct gpu_priv* priv; } ;
struct gpu_priv {TYPE_2__* ctx; } ;
struct TYPE_4__ {TYPE_1__* fns; } ;
struct TYPE_3__ {int (* wakeup ) (TYPE_2__*) ;} ;


 int FUNC_0 (TYPE_2__*) ;

__attribute__((used)) static void FUNC_1(struct vo *VAR_0)
{
    struct gpu_priv *VAR_1 = VAR_0->priv;
    if (VAR_1->ctx && VAR_1->ctx->fns->wakeup)
        VAR_1->ctx->fns->wakeup(VAR_1->ctx);
}
