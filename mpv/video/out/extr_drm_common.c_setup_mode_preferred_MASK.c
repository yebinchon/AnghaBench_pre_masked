
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int type; } ;
struct TYPE_4__ {TYPE_3__ mode; } ;
struct kms {TYPE_2__* connector; TYPE_1__ mode; } ;
typedef TYPE_3__ drmModeModeInfo ;
struct TYPE_5__ {unsigned int count_modes; TYPE_3__* modes; } ;


 int VAR_0 ;
 int FUNC_0 (struct kms*,char*) ;

__attribute__((used)) static bool FUNC_1(struct kms *VAR_1)
{
    for (unsigned int VAR_2 = 0; VAR_2 < VAR_1->connector->count_modes; ++VAR_2) {
        drmModeModeInfo *VAR_3 = &VAR_1->connector->modes[VAR_2];
        if (VAR_3->type & VAR_0) {
            VAR_1->mode.mode = *VAR_3;
            return 1;
        }
    }


    FUNC_0(VAR_1, "Could not find any preferred mode. Picking the first mode.\n");
    VAR_1->mode.mode = VAR_1->connector->modes[0];
    return 1;
}
