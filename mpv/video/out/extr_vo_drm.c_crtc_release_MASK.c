
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct vo {struct priv* priv; } ;
struct priv {int active; TYPE_3__* old_crtc; TYPE_2__* kms; int ev; scalar_t__ waiting_for_flip; } ;
struct TYPE_6__ {int mode; int y; int x; int buffer_id; int crtc_id; } ;
struct TYPE_5__ {TYPE_1__* connector; int fd; } ;
struct TYPE_4__ {int connector_id; } ;


 int FUNC_0 (struct vo*,char*,int) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (int ,int ,int ,int ,int ,int *,int,int *) ;

__attribute__((used)) static void FUNC_4(struct vo *VAR_0)
{
    struct priv *VAR_1 = VAR_0->priv;

    if (!VAR_1->active)
        return;
    VAR_1->active = 0;


    while (VAR_1->waiting_for_flip) {
        int VAR_2 = FUNC_1(VAR_1->kms->fd, &VAR_1->ev);
        if (VAR_2) {
            FUNC_0(VAR_0, "drmHandleEvent failed: %i\n", VAR_2);
            break;
        }
    }

    if (VAR_1->old_crtc) {
        FUNC_3(VAR_1->kms->fd, VAR_1->old_crtc->crtc_id,
                       VAR_1->old_crtc->buffer_id,
                       VAR_1->old_crtc->x, VAR_1->old_crtc->y,
                       &VAR_1->kms->connector->connector_id, 1,
                       &VAR_1->old_crtc->mode);
        FUNC_2(VAR_1->old_crtc);
        VAR_1->old_crtc = ((void*)0);
    }
}
