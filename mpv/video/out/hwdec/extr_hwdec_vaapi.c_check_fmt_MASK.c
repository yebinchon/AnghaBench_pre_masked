
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ra_hwdec_mapper {TYPE_1__* owner; } ;
struct priv_owner {int* formats; } ;
struct TYPE_2__ {struct priv_owner* priv; } ;



__attribute__((used)) static bool FUNC_0(struct ra_hwdec_mapper *VAR_0, int VAR_1)
{
    struct priv_owner *VAR_2 = VAR_0->owner->priv;
    for (int VAR_3 = 0; VAR_2->formats && VAR_2->formats[VAR_3]; VAR_3++) {
        if (VAR_2->formats[VAR_3] == VAR_1)
            return 1;
    }
    return 0;
}
