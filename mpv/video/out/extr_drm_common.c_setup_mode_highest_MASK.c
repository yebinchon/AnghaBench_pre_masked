
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {unsigned int hdisplay; unsigned int vdisplay; } ;
struct TYPE_4__ {TYPE_3__ mode; } ;
struct kms {TYPE_1__ mode; TYPE_2__* connector; } ;
typedef TYPE_3__ drmModeModeInfo ;
struct TYPE_5__ {unsigned int count_modes; TYPE_3__* modes; } ;



__attribute__((used)) static bool FUNC_0(struct kms *VAR_0)
{
    unsigned int VAR_1 = 0;
    drmModeModeInfo *VAR_2 = &VAR_0->connector->modes[0];
    for (unsigned int VAR_3 = 0; VAR_3 < VAR_0->connector->count_modes; ++VAR_3) {
        drmModeModeInfo *VAR_4 = &VAR_0->connector->modes[VAR_3];

        const unsigned int VAR_5 =
            VAR_4->hdisplay * VAR_4->vdisplay;
        if (VAR_5 > VAR_1) {
            VAR_2 = VAR_4;
            VAR_1 = VAR_5;
        }
    }

    VAR_0->mode.mode = *VAR_2;
    return 1;
}
