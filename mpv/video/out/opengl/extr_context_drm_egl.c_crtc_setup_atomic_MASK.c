
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
struct TYPE_7__ {int width; int height; } ;
struct priv {TYPE_4__* kms; TYPE_2__ draw_surface_size; TYPE_1__* fb; } ;
struct drm_atomic_context {int draw_plane; int crtc; int connector; } ;
typedef int drmModeAtomicReqPtr ;
struct TYPE_8__ {int hdisplay; int vdisplay; } ;
struct TYPE_10__ {int blob_id; TYPE_3__ mode; } ;
struct TYPE_9__ {int crtc_id; int fd; TYPE_5__ mode; struct drm_atomic_context* atomic_context; } ;
struct TYPE_6__ {int id; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,...) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 () ;
 int FUNC_3 (int ,int ,int ,int *) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct drm_atomic_context*) ;
 int FUNC_6 (int ,TYPE_5__*) ;
 scalar_t__ FUNC_7 (int ,int ,char*,int) ;

__attribute__((used)) static bool FUNC_8(struct ra_ctx *VAR_1)
{
    struct priv *VAR_2 = VAR_1->priv;
    struct drm_atomic_context *VAR_3 = VAR_2->kms->atomic_context;

    if (!FUNC_5(VAR_3)) {
        FUNC_1(VAR_1->vo, "Failed to save old DRM atomic state\n");
    }

    drmModeAtomicReqPtr VAR_4 = FUNC_2();
    if (!VAR_4) {
        FUNC_0(VAR_1->vo, "Failed to allocate drm atomic request\n");
        return 0;
    }

    if (FUNC_7(VAR_4, VAR_3->connector, "CRTC_ID", VAR_2->kms->crtc_id) < 0) {
        FUNC_0(VAR_1->vo, "Could not set CRTC_ID on connector\n");
        return 0;
    }

    if (!FUNC_6(VAR_2->kms->fd, &VAR_2->kms->mode)) {
        FUNC_0(VAR_1->vo, "Failed to create DRM mode blob\n");
        goto err;
    }
    if (FUNC_7(VAR_4, VAR_3->crtc, "MODE_ID", VAR_2->kms->mode.blob_id) < 0) {
        FUNC_0(VAR_1->vo, "Could not set MODE_ID on crtc\n");
        goto err;
    }
    if (FUNC_7(VAR_4, VAR_3->crtc, "ACTIVE", 1) < 0) {
        FUNC_0(VAR_1->vo, "Could not set ACTIVE on crtc\n");
        goto err;
    }

    FUNC_7(VAR_4, VAR_3->draw_plane, "FB_ID", VAR_2->fb->id);
    FUNC_7(VAR_4, VAR_3->draw_plane, "CRTC_ID", VAR_2->kms->crtc_id);
    FUNC_7(VAR_4, VAR_3->draw_plane, "SRC_X", 0);
    FUNC_7(VAR_4, VAR_3->draw_plane, "SRC_Y", 0);
    FUNC_7(VAR_4, VAR_3->draw_plane, "SRC_W", VAR_2->draw_surface_size.width << 16);
    FUNC_7(VAR_4, VAR_3->draw_plane, "SRC_H", VAR_2->draw_surface_size.height << 16);
    FUNC_7(VAR_4, VAR_3->draw_plane, "CRTC_X", 0);
    FUNC_7(VAR_4, VAR_3->draw_plane, "CRTC_Y", 0);
    FUNC_7(VAR_4, VAR_3->draw_plane, "CRTC_W", VAR_2->kms->mode.mode.hdisplay);
    FUNC_7(VAR_4, VAR_3->draw_plane, "CRTC_H", VAR_2->kms->mode.mode.vdisplay);

    int VAR_5 = FUNC_3(VAR_2->kms->fd, VAR_4, VAR_0, ((void*)0));
    if (VAR_5)
        FUNC_0(VAR_1->vo, "Failed to commit ModeSetting atomic request (%d)\n", VAR_5);

    FUNC_4(VAR_4);
    return VAR_5 == 0;

  err:
    FUNC_4(VAR_4);
    return 0;
}
