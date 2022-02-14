
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct ra_ctx {int vo; struct priv* priv; } ;
struct priv {scalar_t__ gbm_format; TYPE_3__* kms; } ;
struct TYPE_10__ {unsigned int count_formats; scalar_t__* formats; } ;
typedef TYPE_4__ drmModePlane ;
struct TYPE_9__ {TYPE_2__* atomic_context; int fd; } ;
struct TYPE_8__ {TYPE_1__* draw_plane; } ;
struct TYPE_7__ {int id; } ;


 int FUNC_0 (int ,char*,int ,...) ;
 int FUNC_1 (TYPE_4__*) ;
 TYPE_4__* FUNC_2 (int ,int ) ;
 int FUNC_3 (scalar_t__) ;

__attribute__((used)) static bool FUNC_4(struct ra_ctx *VAR_0, uint32_t VAR_1, uint32_t VAR_2)
{
    struct priv *VAR_3 = VAR_0->priv;

    if (!VAR_3->kms->atomic_context) {
        VAR_3->gbm_format = VAR_2;
        FUNC_0(VAR_0->vo, "Not using DRM Atomic: Use %s for draw plane.\n",
                   FUNC_3(VAR_2));
        return 1;
    }

    drmModePlane *VAR_4 =
        FUNC_2(VAR_3->kms->fd, VAR_3->kms->atomic_context->draw_plane->id);
    bool VAR_5 = 0;
    bool VAR_6 = 0;
    bool VAR_7 = 0;
    for (unsigned int VAR_8 = 0; VAR_8 < VAR_4->count_formats; ++VAR_8) {
        if (VAR_4->formats[VAR_8] == VAR_1) {
            VAR_5 = 1;
        } else if (VAR_4->formats[VAR_8] == VAR_2) {
            VAR_6 = 1;
        }
    }

    if (VAR_5) {
        VAR_3->gbm_format = VAR_1;
        FUNC_0(VAR_0->vo, "%s supported by draw plane.\n", FUNC_3(VAR_1));
        VAR_7 = 1;
    } else if (VAR_6) {
        VAR_3->gbm_format = VAR_2;
        FUNC_0(VAR_0->vo, "%s not supported by draw plane: Falling back to %s.\n",
                   FUNC_3(VAR_1), FUNC_3(VAR_2));
        VAR_7 = 1;
    }

    FUNC_1(VAR_4);
    return VAR_7;
}
