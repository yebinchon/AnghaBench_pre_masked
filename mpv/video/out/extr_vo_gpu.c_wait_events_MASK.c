
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct vo {struct gpu_priv* priv; } ;
struct gpu_priv {TYPE_2__* ctx; } ;
typedef int int64_t ;
struct TYPE_4__ {TYPE_1__* fns; } ;
struct TYPE_3__ {int (* wait_events ) (TYPE_2__*,int ) ;} ;


 int FUNC_0 (TYPE_2__*,int ) ;
 int FUNC_1 (struct vo*,int ) ;

__attribute__((used)) static void FUNC_2(struct vo *VAR_0, int64_t VAR_1)
{
    struct gpu_priv *VAR_2 = VAR_0->priv;
    if (VAR_2->ctx && VAR_2->ctx->fns->wait_events) {
        VAR_2->ctx->fns->wait_events(VAR_2->ctx, VAR_1);
    } else {
        FUNC_1(VAR_0, VAR_1);
    }
}
