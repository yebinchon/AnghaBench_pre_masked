
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct ra_ctx {int vo; struct priv* priv; } ;
struct priv {int active; TYPE_5__* old_crtc; TYPE_4__* kms; } ;
struct TYPE_10__ {int mode; int y; int x; int buffer_id; int crtc_id; } ;
struct TYPE_9__ {TYPE_3__* connector; int fd; TYPE_2__* atomic_context; } ;
struct TYPE_8__ {int connector_id; } ;
struct TYPE_6__ {scalar_t__ saved; } ;
struct TYPE_7__ {TYPE_1__ old_state; } ;


 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct ra_ctx*) ;
 int FUNC_2 (TYPE_5__*) ;
 int FUNC_3 (int ,int ,int ,int ,int ,int *,int,int *) ;

__attribute__((used)) static void FUNC_4(struct ra_ctx *VAR_0)
{
    struct priv *VAR_1 = VAR_0->priv;

    if (!VAR_1->active)
        return;
    VAR_1->active = 0;

    if (VAR_1->kms->atomic_context) {
        if (VAR_1->kms->atomic_context->old_state.saved) {
            if (!FUNC_1(VAR_0))
                FUNC_0(VAR_0->vo, "Failed to restore previous mode\n");
        }
    } else {
        if (VAR_1->old_crtc) {
            FUNC_3(VAR_1->kms->fd,
                           VAR_1->old_crtc->crtc_id, VAR_1->old_crtc->buffer_id,
                           VAR_1->old_crtc->x, VAR_1->old_crtc->y,
                           &VAR_1->kms->connector->connector_id, 1,
                           &VAR_1->old_crtc->mode);
            FUNC_2(VAR_1->old_crtc);
            VAR_1->old_crtc = ((void*)0);
        }
    }
}
