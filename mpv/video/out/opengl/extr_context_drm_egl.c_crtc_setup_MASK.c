
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct ra_ctx {struct priv* priv; } ;
struct priv {int active; TYPE_4__* kms; TYPE_1__* fb; int old_crtc; } ;
struct TYPE_7__ {int mode; } ;
struct TYPE_8__ {TYPE_3__ mode; TYPE_2__* connector; int crtc_id; int fd; scalar_t__ atomic_context; } ;
struct TYPE_6__ {int connector_id; } ;
struct TYPE_5__ {int id; } ;


 int FUNC_0 (struct ra_ctx*) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ,int ,int ,int ,int *,int,int *) ;

__attribute__((used)) static bool FUNC_3(struct ra_ctx *VAR_0)
{
    struct priv *VAR_1 = VAR_0->priv;
    if (VAR_1->active)
        return 1;

    if (VAR_1->kms->atomic_context) {
        int VAR_2 = FUNC_0(VAR_0);
        VAR_1->active = 1;
        return VAR_2;
    } else {
        VAR_1->old_crtc = FUNC_1(VAR_1->kms->fd, VAR_1->kms->crtc_id);
        int VAR_3 = FUNC_2(VAR_1->kms->fd, VAR_1->kms->crtc_id, VAR_1->fb->id,
                                 0, 0, &VAR_1->kms->connector->connector_id, 1,
                                 &VAR_1->kms->mode.mode);
        VAR_1->active = 1;
        return VAR_3 == 0;
    }
}
