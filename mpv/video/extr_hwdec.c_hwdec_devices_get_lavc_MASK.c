
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mp_hwdec_devices {int dummy; } ;
struct mp_hwdec_ctx {int av_device_ref; } ;
struct AVBufferRef {int dummy; } ;


 struct AVBufferRef* FUNC_0 (int ) ;
 struct mp_hwdec_ctx* FUNC_1 (struct mp_hwdec_devices*,int) ;

struct AVBufferRef *FUNC_2(struct mp_hwdec_devices *VAR_0,
                                           int VAR_1)
{
    struct mp_hwdec_ctx *VAR_2 = FUNC_1(VAR_0, VAR_1);
    if (!VAR_2)
        return ((void*)0);
    return FUNC_0(VAR_2->av_device_ref);
}
