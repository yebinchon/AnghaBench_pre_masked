
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ra_ctx {int vo; struct priv* priv; } ;
struct priv {TYPE_1__* kms; } ;
struct drm_atomic_context {int dummy; } ;
typedef int drmModeAtomicReqPtr ;
struct TYPE_2__ {int fd; struct drm_atomic_context* atomic_context; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ,char*,...) ;
 int FUNC_2 () ;
 int FUNC_3 (int ,int ,int ,int *) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,struct drm_atomic_context*) ;

__attribute__((used)) static bool FUNC_6(struct ra_ctx *VAR_1)
{
    struct priv *VAR_2 = VAR_1->priv;

    struct drm_atomic_context *VAR_3 = VAR_2->kms->atomic_context;
    drmModeAtomicReqPtr VAR_4 = FUNC_2();
    if (!VAR_4) {
        FUNC_0(VAR_1->vo, "Failed to allocate drm atomic request\n");
        return 0;
    }

    if (!FUNC_5(VAR_4, VAR_3)) {
        FUNC_1(VAR_1->vo, "Got error while restoring old state\n");
    }

    int VAR_5 = FUNC_3(VAR_2->kms->fd, VAR_4, VAR_0, ((void*)0));

    if (VAR_5)
        FUNC_1(VAR_1->vo, "Failed to commit ModeSetting atomic request (%d)\n", VAR_5);

    FUNC_4(VAR_4);
    return VAR_5 == 0;
}
