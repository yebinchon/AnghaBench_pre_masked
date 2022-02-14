
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ hwdec_devs; } ;
typedef TYPE_1__ vd_ffmpeg_ctx ;
struct mp_filter {int log; int global; TYPE_1__* priv; } ;
struct hwdec_info {int lavc_device; scalar_t__ copying; } ;
struct hwcontext_fns {int * (* create_dev ) (int ,int ,struct hwcontext_create_dev_params*) ;} ;
struct hwcontext_create_dev_params {int probing; } ;
typedef int AVBufferRef ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int **,int ,int *,int *,int ) ;
 int * FUNC_2 (scalar_t__,int ) ;
 int FUNC_3 (scalar_t__) ;
 struct hwcontext_fns* FUNC_4 (int ) ;
 int * FUNC_5 (int ,int ,struct hwcontext_create_dev_params*) ;

__attribute__((used)) static AVBufferRef *FUNC_6(struct mp_filter *VAR_0,
                                     struct hwdec_info *VAR_1,
                                     bool VAR_2)
{
    vd_ffmpeg_ctx *VAR_3 = VAR_0->priv;
    FUNC_0(VAR_1->lavc_device);

    if (VAR_1->copying) {
        const struct hwcontext_fns *VAR_4 =
            FUNC_4(VAR_1->lavc_device);
        if (VAR_4 && VAR_4->create_dev) {
            struct hwcontext_create_dev_params VAR_5 = {
                .probing = VAR_2,
            };
            return VAR_4->create_dev(VAR_0->global, VAR_0->log, &VAR_5);
        } else {
            AVBufferRef* VAR_6 = ((void*)0);
            FUNC_1(&VAR_6, VAR_1->lavc_device, ((void*)0), ((void*)0), 0);
            return VAR_6;
        }
    } else if (VAR_3->hwdec_devs) {
        FUNC_3(VAR_3->hwdec_devs);
        return FUNC_2(VAR_3->hwdec_devs, VAR_1->lavc_device);
    }

    return ((void*)0);
}
