
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vo {struct vdpctx* priv; } ;
struct vdpctx {TYPE_1__* mpvdp; int vdp_device; int preemption_counter; } ;
struct TYPE_2__ {int vdp_device; } ;


 scalar_t__ FUNC_0 (struct vo*) ;
 int FUNC_1 (struct vo*) ;
 int FUNC_2 (TYPE_1__*,int *) ;

__attribute__((used)) static bool FUNC_3(struct vo *VAR_0)
{
    struct vdpctx *VAR_1 = VAR_0->priv;

    int VAR_2 = FUNC_2(VAR_1->mpvdp, &VAR_1->preemption_counter);
    if (VAR_2 < 1) {
        FUNC_1(VAR_0);
        if (VAR_2 < 0)
            return 0;
        VAR_1->vdp_device = VAR_1->mpvdp->vdp_device;
        if (FUNC_0(VAR_0) < 0)
            return 0;
    }
    return 1;
}
