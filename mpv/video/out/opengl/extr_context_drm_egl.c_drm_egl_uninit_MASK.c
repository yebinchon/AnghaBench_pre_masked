
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct ra_ctx {int vo; struct priv* priv; } ;
struct TYPE_7__ {int render_fd; } ;
struct TYPE_6__ {int context; int display; int surface; } ;
struct TYPE_5__ {int device; int surface; scalar_t__ num_bos; } ;
struct priv {TYPE_4__* kms; TYPE_3__ drm_params; TYPE_2__ egl; TYPE_1__ gbm; int vt_switcher; scalar_t__ vt_switcher_active; } ;
struct drm_atomic_context {int request; } ;
struct TYPE_8__ {int fd; struct drm_atomic_context* atomic_context; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct ra_ctx*) ;
 int FUNC_3 (int ,int ,int ,int *) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (int ,int ,int ,int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (TYPE_4__*) ;
 int FUNC_12 (struct ra_ctx*) ;
 int FUNC_13 (struct ra_ctx*) ;
 int FUNC_14 (int *) ;

__attribute__((used)) static void FUNC_15(struct ra_ctx *VAR_2)
{
    struct priv *VAR_3 = VAR_2->priv;
    struct drm_atomic_context *VAR_4 = VAR_3->kms->atomic_context;

    if (VAR_4) {
        int VAR_5 = FUNC_3(VAR_3->kms->fd, VAR_4->request, 0, ((void*)0));
        if (VAR_5)
            FUNC_0(VAR_2->vo, "Failed to commit atomic request (%d)\n", VAR_5);
        FUNC_4(VAR_4->request);
    }

    FUNC_12(VAR_2);

    FUNC_2(VAR_2);
    if (VAR_3->vt_switcher_active)
        FUNC_14(&VAR_3->vt_switcher);



    while (VAR_3->gbm.num_bos) {
        FUNC_13(VAR_2);
    }

    FUNC_7(VAR_3->egl.display, VAR_1, VAR_1,
                   VAR_0);
    FUNC_5(VAR_3->egl.display, VAR_3->egl.context);
    FUNC_6(VAR_3->egl.display, VAR_3->egl.surface);
    FUNC_10(VAR_3->gbm.surface);
    FUNC_8(VAR_3->egl.display);
    FUNC_9(VAR_3->gbm.device);
    VAR_3->egl.context = VAR_0;
    FUNC_5(VAR_3->egl.display, VAR_3->egl.context);

    FUNC_1(VAR_3->drm_params.render_fd);

    if (VAR_3->kms) {
        FUNC_11(VAR_3->kms);
        VAR_3->kms = 0;
    }
}
