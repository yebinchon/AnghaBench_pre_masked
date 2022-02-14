
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vo {int hwdec_devs; int osd; int global; int log; struct gpu_priv* priv; } ;
struct ra_ctx_opts {int want_alpha; } ;
struct gpu_priv {int renderer; TYPE_1__* ctx; int context_name; int context_type; struct ra_ctx_opts opts; int log; } ;
struct TYPE_2__ {int ra; int swapchain; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (struct gpu_priv*) ;
 int FUNC_2 (int ,struct vo*) ;
 int FUNC_3 (int ,int ,int ) ;
 int FUNC_4 (int ,int ,int) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 () ;
 int FUNC_7 (int ,int ,struct vo*) ;
 int VAR_1 ;
 int FUNC_8 (int ,char*,int *,int*) ;
 TYPE_1__* FUNC_9 (struct vo*,int ,int ,struct ra_ctx_opts) ;
 int FUNC_10 (struct vo*) ;

__attribute__((used)) static int FUNC_11(struct vo *VAR_2)
{
    struct gpu_priv *VAR_3 = VAR_2->priv;
    VAR_3->log = VAR_2->log;

    int VAR_4;
    FUNC_8(VAR_2->global, "alpha", &VAR_1, &VAR_4);

    struct ra_ctx_opts VAR_5 = VAR_3->opts;
    VAR_5.want_alpha = VAR_4 == 1;

    VAR_3->ctx = FUNC_9(VAR_2, VAR_3->context_type, VAR_3->context_name, VAR_5);
    if (!VAR_3->ctx)
        goto err_out;
    FUNC_0(VAR_3->ctx->ra);
    FUNC_0(VAR_3->ctx->swapchain);

    VAR_3->renderer = FUNC_3(VAR_3->ctx->ra, VAR_2->log, VAR_2->global);
    FUNC_5(VAR_3->renderer, VAR_2->osd);
    FUNC_2(VAR_3->renderer, VAR_2);

    FUNC_1(VAR_3);

    VAR_2->hwdec_devs = FUNC_6();
    FUNC_7(VAR_2->hwdec_devs, VAR_0, VAR_2);

    FUNC_4(VAR_3->renderer, VAR_2->hwdec_devs, 0);

    return 0;

err_out:
    FUNC_10(VAR_2);
    return -1;
}
