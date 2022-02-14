
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mp_hwdec_devices {int num_hwctxs; int lock; struct mp_hwdec_ctx** hwctxs; } ;
struct mp_hwdec_ctx {int dummy; } ;


 int FUNC_0 (struct mp_hwdec_ctx**,int,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

void FUNC_3(struct mp_hwdec_devices *VAR_0, struct mp_hwdec_ctx *VAR_1)
{
    FUNC_1(&VAR_0->lock);
    for (int VAR_2 = 0; VAR_2 < VAR_0->num_hwctxs; VAR_2++) {
        if (VAR_0->hwctxs[VAR_2] == VAR_1) {
            FUNC_0(VAR_0->hwctxs, VAR_0->num_hwctxs, VAR_2);
            break;
        }
    }
    FUNC_2(&VAR_0->lock);
}
