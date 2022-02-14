
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct ra_swapchain {struct ra_ctx* ctx; } ;
struct ra_ctx {TYPE_5__* vo; struct priv* priv; } ;
struct TYPE_8__ {int num_bos; TYPE_4__** bo_queue; int surface; } ;
struct TYPE_6__ {int surface; int display; } ;
struct priv {TYPE_3__ gbm; scalar_t__ waiting_for_flip; TYPE_1__ egl; int active; scalar_t__ still; scalar_t__ paused; } ;
struct gbm_bo {int dummy; } ;
struct TYPE_10__ {TYPE_2__* opts; } ;
struct TYPE_9__ {int bo; } ;
struct TYPE_7__ {int swapchain_depth; } ;


 int FUNC_0 (TYPE_5__*,char*) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (struct ra_ctx*,struct gbm_bo*) ;
 int FUNC_3 (int ) ;
 struct gbm_bo* FUNC_4 (int ) ;
 int FUNC_5 (struct ra_ctx*) ;
 int FUNC_6 (struct ra_ctx*,TYPE_4__*) ;
 int FUNC_7 (struct ra_ctx*) ;
 int FUNC_8 (struct ra_ctx*) ;
 int FUNC_9 (struct ra_ctx*) ;

__attribute__((used)) static void FUNC_10(struct ra_swapchain *VAR_0)
{
    struct ra_ctx *VAR_1 = VAR_0->ctx;
    struct priv *VAR_2 = VAR_1->priv;
    const bool VAR_3 = VAR_2->paused || VAR_2->still;

    if (!VAR_2->active)
        return;

    FUNC_8(VAR_1);

    FUNC_1(VAR_2->egl.display, VAR_2->egl.surface);

    struct gbm_bo *VAR_4 = FUNC_4(VAR_2->gbm.surface);
    if (!VAR_4) {
        FUNC_0(VAR_1->vo, "Couldn't lock front buffer\n");
        return;
    }
    FUNC_2(VAR_1, VAR_4);
    FUNC_5(VAR_1);

    while (VAR_3 || VAR_2->gbm.num_bos > VAR_1->vo->opts->swapchain_depth ||
           !FUNC_3(VAR_2->gbm.surface)) {
        if (VAR_2->waiting_for_flip) {
            FUNC_9(VAR_1);
            FUNC_7(VAR_1);
        }
        if (VAR_2->gbm.num_bos <= 1)
            break;
        if (!VAR_2->gbm.bo_queue[1] || !VAR_2->gbm.bo_queue[1]->bo) {
            FUNC_0(VAR_1->vo, "Hole in swapchain?\n");
            FUNC_7(VAR_1);
            continue;
        }
        FUNC_6(VAR_1, VAR_2->gbm.bo_queue[1]);
    }
}
