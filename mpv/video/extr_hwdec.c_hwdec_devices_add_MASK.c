
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mp_hwdec_devices {int lock; int num_hwctxs; int hwctxs; } ;
struct mp_hwdec_ctx {int dummy; } ;


 int FUNC_0 (struct mp_hwdec_devices*,int ,int ,struct mp_hwdec_ctx*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

void FUNC_3(struct mp_hwdec_devices *VAR_0, struct mp_hwdec_ctx *VAR_1)
{
    FUNC_1(&VAR_0->lock);
    FUNC_0(VAR_0, VAR_0->hwctxs, VAR_0->num_hwctxs, VAR_1);
    FUNC_2(&VAR_0->lock);
}
