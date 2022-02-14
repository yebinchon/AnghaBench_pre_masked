
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mpv_global {int dummy; } ;
struct TYPE_2__ {struct AVBufferRef* av_device_ref; } ;
struct mp_vdpau_ctx {int close_display; TYPE_1__ hwctx; } ;
struct mp_log {int dummy; } ;
struct hwcontext_create_dev_params {int probing; } ;
struct AVBufferRef {int dummy; } ;
typedef int Display ;


 int FUNC_0 (int *) ;
 int FUNC_1 () ;
 int * FUNC_2 (int *) ;
 struct mp_vdpau_ctx* FUNC_3 (struct mp_log*,int *,int ) ;

__attribute__((used)) static struct AVBufferRef *FUNC_4(struct mpv_global *VAR_0,
        struct mp_log *VAR_1, struct hwcontext_create_dev_params *VAR_2)
{
    FUNC_1();

    Display *VAR_3 = FUNC_2(((void*)0));
    if (!VAR_3)
        return ((void*)0);

    struct mp_vdpau_ctx *VAR_4 =
        FUNC_3(VAR_1, VAR_3, VAR_2->probing);
    if (!VAR_4) {
        FUNC_0(VAR_3);
        return ((void*)0);
    }

    VAR_4->close_display = 1;
    return VAR_4->hwctx.av_device_ref;
}
