
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mp_hwdec_devices {int num_hwctxs; int lock; struct mp_hwdec_ctx** hwctxs; } ;
struct mp_hwdec_ctx {int dummy; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

struct mp_hwdec_ctx *FUNC_2(struct mp_hwdec_devices *VAR_0, int VAR_1)
{
    FUNC_0(&VAR_0->lock);
    struct mp_hwdec_ctx *VAR_2 = VAR_1 < VAR_0->num_hwctxs ? VAR_0->hwctxs[VAR_1] : ((void*)0);
    FUNC_1(&VAR_0->lock);
    return VAR_2;
}
