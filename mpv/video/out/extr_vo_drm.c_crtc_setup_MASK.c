
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct vo {struct priv* priv; } ;
struct priv {int active; TYPE_4__* kms; TYPE_1__* cur_fb; int old_crtc; } ;
struct TYPE_7__ {int mode; } ;
struct TYPE_8__ {TYPE_3__ mode; TYPE_2__* connector; int crtc_id; int fd; } ;
struct TYPE_6__ {int connector_id; } ;
struct TYPE_5__ {int fb; } ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ,int ,int ,int ,int *,int,int *) ;

__attribute__((used)) static bool FUNC_2(struct vo *VAR_0)
{
    struct priv *VAR_1 = VAR_0->priv;
    if (VAR_1->active)
        return 1;
    VAR_1->old_crtc = FUNC_0(VAR_1->kms->fd, VAR_1->kms->crtc_id);
    int VAR_2 = FUNC_1(VAR_1->kms->fd, VAR_1->kms->crtc_id,
                             VAR_1->cur_fb->fb,
                             0, 0, &VAR_1->kms->connector->connector_id, 1,
                             &VAR_1->kms->mode.mode);
    VAR_1->active = 1;
    return VAR_2 == 0;
}
