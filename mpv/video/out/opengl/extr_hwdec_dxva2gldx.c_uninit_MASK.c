
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ra_hwdec {int devs; struct priv_owner* priv; } ;
struct TYPE_2__ {int av_device_ref; } ;
struct priv_owner {scalar_t__ device; TYPE_1__ hwctx; } ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,TYPE_1__*) ;

__attribute__((used)) static void FUNC_3(struct ra_hwdec *VAR_0)
{
    struct priv_owner *VAR_1 = VAR_0->priv;

    FUNC_2(VAR_0->devs, &VAR_1->hwctx);
    FUNC_1(&VAR_1->hwctx.av_device_ref);

    if (VAR_1->device)
        FUNC_0(VAR_1->device);
}
