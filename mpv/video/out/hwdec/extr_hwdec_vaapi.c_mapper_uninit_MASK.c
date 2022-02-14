
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ra_hwdec_mapper {TYPE_1__* owner; } ;
struct priv_owner {int (* interop_uninit ) (struct ra_hwdec_mapper*) ;} ;
struct TYPE_2__ {struct priv_owner* priv; } ;


 int FUNC_0 (struct ra_hwdec_mapper*) ;

__attribute__((used)) static void FUNC_1(struct ra_hwdec_mapper *VAR_0)
{
    struct priv_owner *VAR_1 = VAR_0->owner->priv;
    if (VAR_1->interop_uninit) {
        VAR_1->interop_uninit(VAR_0);
    }
}
