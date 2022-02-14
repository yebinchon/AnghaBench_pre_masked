
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int mode; } ;
struct kms {TYPE_2__* connector; TYPE_1__ mode; } ;
struct TYPE_4__ {unsigned int count_modes; int * modes; } ;


 int FUNC_0 (struct kms*,char*,int) ;

__attribute__((used)) static bool FUNC_1(struct kms *VAR_0, unsigned int VAR_1)
{
    if (VAR_1 >= VAR_0->connector->count_modes) {
        FUNC_0(VAR_0, "Bad mode index (max = %d).\n",
               VAR_0->connector->count_modes - 1);
        return 0;
    }

    VAR_0->mode.mode = VAR_0->connector->modes[VAR_1];
    return 1;
}
