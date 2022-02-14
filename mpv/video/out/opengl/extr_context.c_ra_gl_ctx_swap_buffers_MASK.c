
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct ra_swapchain {TYPE_7__* ctx; struct priv* priv; } ;
struct TYPE_8__ {int (* swap_buffers ) (TYPE_7__*) ;} ;
struct priv {int frames_rendered; unsigned int prev_sgi_sync_count; scalar_t__ num_vsync_fences; int * vsync_fences; TYPE_3__* opts; TYPE_1__ params; TYPE_6__* gl; } ;
struct TYPE_9__ {int debug; } ;
struct TYPE_14__ {TYPE_5__* vo; int ra; TYPE_2__ opts; } ;
struct TYPE_13__ {int (* DeleteSync ) (int ) ;int (* ClientWaitSync ) (int ,int ,int) ;int (* WaitVideoSync ) (int,unsigned int,unsigned int*) ;int (* GetVideoSync ) (unsigned int*) ;} ;
struct TYPE_12__ {TYPE_4__* opts; } ;
struct TYPE_11__ {scalar_t__ swapchain_depth; } ;
struct TYPE_10__ {scalar_t__* vsync_pattern; scalar_t__ waitvsync; } ;
typedef TYPE_6__ GL ;


 int VAR_0 ;
 int FUNC_0 (struct priv*,char*,unsigned int,unsigned int,int) ;
 int FUNC_1 (int *,scalar_t__,int ) ;
 int FUNC_2 (struct priv*,int) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (TYPE_7__*) ;
 int FUNC_5 (unsigned int*) ;
 int FUNC_6 (int,unsigned int,unsigned int*) ;
 int FUNC_7 (int ,int ,int) ;
 int FUNC_8 (int ) ;

void FUNC_9(struct ra_swapchain *VAR_1)
{
    struct priv *VAR_2 = VAR_1->priv;
    GL *VAR_3 = VAR_2->gl;

    VAR_2->params.swap_buffers(VAR_1->ctx);
    VAR_2->frames_rendered++;

    if (VAR_2->frames_rendered > 5 && !VAR_1->ctx->opts.debug)
        FUNC_3(VAR_1->ctx->ra, 0);

    if ((VAR_2->opts->waitvsync || VAR_2->opts->vsync_pattern[0])
        && VAR_3->GetVideoSync)
    {
        unsigned int VAR_4 = 0, VAR_5 = 0;
        VAR_3->GetVideoSync(&VAR_4);
        if (VAR_2->opts->waitvsync)
            VAR_3->WaitVideoSync(2, (VAR_4 + 1) % 2, &VAR_5);
        int VAR_6 = VAR_4 - VAR_2->prev_sgi_sync_count;
        VAR_2->prev_sgi_sync_count = VAR_4;
        FUNC_0(VAR_2, "Flip counts: %u->%u, step=%d\n", VAR_4, VAR_5, VAR_6);
        if (VAR_2->opts->vsync_pattern[0])
            FUNC_2(VAR_2, VAR_6);
    }

    while (VAR_2->num_vsync_fences >= VAR_1->ctx->vo->opts->swapchain_depth) {
        VAR_3->ClientWaitSync(VAR_2->vsync_fences[0], VAR_0, 1e9);
        VAR_3->DeleteSync(VAR_2->vsync_fences[0]);
        FUNC_1(VAR_2->vsync_fences, VAR_2->num_vsync_fences, 0);
    }
}
