
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int mode; } ;
struct kms {TYPE_2__ mode; TYPE_1__* connector; } ;
typedef int drmModeModeInfo ;
struct TYPE_3__ {unsigned int count_modes; int * modes; } ;


 int FUNC_0 (struct kms*,char*,char const*) ;
 scalar_t__ FUNC_1 (int *,unsigned int,unsigned int,double) ;

__attribute__((used)) static bool FUNC_2(struct kms *VAR_0,
                                  unsigned int VAR_1,
                                  unsigned int VAR_2,
                                  double VAR_3,
                                  const char *VAR_4)
{
    for (unsigned int VAR_5 = 0; VAR_5 < VAR_0->connector->count_modes; ++VAR_5) {
        drmModeModeInfo *VAR_6 = &VAR_0->connector->modes[VAR_5];
        if (FUNC_1(VAR_6, VAR_1, VAR_2, VAR_3)) {
            VAR_0->mode.mode = *VAR_6;
            return 1;
        }
    }

    FUNC_0(VAR_0, "Could not find mode matching %s\n", VAR_4);
    return 0;
}
