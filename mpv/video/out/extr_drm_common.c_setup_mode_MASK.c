
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct kms {TYPE_1__* connector; int log; } ;
struct drm_mode_spec {int type; int refresh; int height; int width; int idx; } ;
struct TYPE_2__ {scalar_t__ count_modes; } ;






 int FUNC_0 (struct kms*,char*) ;
 int FUNC_1 (struct kms*,char*) ;
 int FUNC_2 (int ,TYPE_1__*) ;
 int FUNC_3 (char const*,struct drm_mode_spec*) ;
 int FUNC_4 (struct kms*,int ) ;
 int FUNC_5 (struct kms*,int ,int ,int ,char const*) ;
 int FUNC_6 (struct kms*) ;
 int FUNC_7 (struct kms*) ;

__attribute__((used)) static bool FUNC_8(struct kms *VAR_0, const char *VAR_1)
{
    if (VAR_0->connector->count_modes <= 0) {
        FUNC_0(VAR_0, "No available modes\n");
        return 0;
    }

    struct drm_mode_spec VAR_2;
    if (!FUNC_3(VAR_1, &VAR_2)) {
        FUNC_0(VAR_0, "Parse error\n");
        goto err;
    }

    switch (VAR_2.type) {
    case 131:
        if (!FUNC_4(VAR_0, VAR_2.idx))
            goto err;
        break;
    case 130:
        if (!FUNC_5(VAR_0, VAR_2.width, VAR_2.height, VAR_2.refresh,
                                   VAR_1))
            goto err;
        break;
    case 128:
        if (!FUNC_7(VAR_0))
            goto err;
        break;
    case 129:
        if (!FUNC_6(VAR_0))
            goto err;
        break;
    default:
        FUNC_0(VAR_0, "setup_mode: Internal error\n");
        goto err;
    }

    return 1;

err:
    FUNC_1(VAR_0, "Available modes:\n");
    FUNC_2(VAR_0->log, VAR_0->connector);
    return 0;
}
