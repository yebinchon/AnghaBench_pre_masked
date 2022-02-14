
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct vo {struct gpu_priv* priv; } ;
struct mp_image_params {int dummy; } ;
struct gpu_priv {int renderer; TYPE_2__* ctx; } ;
struct TYPE_4__ {TYPE_1__* fns; } ;
struct TYPE_3__ {int (* reconfig ) (TYPE_2__*) ;} ;


 int FUNC_0 (int ,struct mp_image_params*) ;
 int FUNC_1 (struct vo*) ;
 int FUNC_2 (TYPE_2__*) ;

__attribute__((used)) static int FUNC_3(struct vo *VAR_0, struct mp_image_params *VAR_1)
{
    struct gpu_priv *VAR_2 = VAR_0->priv;

    if (!VAR_2->ctx->fns->reconfig(VAR_2->ctx))
        return -1;

    FUNC_1(VAR_0);
    FUNC_0(VAR_2->renderer, VAR_1);

    return 0;
}
