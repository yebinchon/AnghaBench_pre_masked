
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct mp_hwdec_devices {int num_hwctxs; int lock; struct mp_hwdec_ctx** hwctxs; } ;
struct mp_hwdec_ctx {TYPE_1__* av_device_ref; } ;
struct TYPE_4__ {int type; } ;
struct TYPE_3__ {scalar_t__ data; } ;
typedef TYPE_2__ AVHWDeviceContext ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

struct mp_hwdec_ctx *FUNC_2(struct mp_hwdec_devices *VAR_0,
                                               int VAR_1)
{
    struct mp_hwdec_ctx *VAR_2 = ((void*)0);
    FUNC_0(&VAR_0->lock);
    for (int VAR_3 = 0; VAR_3 < VAR_0->num_hwctxs; VAR_3++) {
        struct mp_hwdec_ctx *VAR_4 = VAR_0->hwctxs[VAR_3];
        if (VAR_4->av_device_ref) {
            AVHWDeviceContext *VAR_5 = (void *)VAR_4->av_device_ref->data;
            if (VAR_5->type == VAR_1) {
                VAR_2 = VAR_4;
                break;
            }
        }
    }
    FUNC_1(&VAR_0->lock);
    return VAR_2;
}
