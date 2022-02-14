
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct mp_vdpau_ctx {int dummy; } ;
struct TYPE_5__ {scalar_t__ data; } ;
struct TYPE_4__ {scalar_t__ free; struct mp_vdpau_ctx* user_opaque; } ;
typedef TYPE_1__ AVHWDeviceContext ;
typedef TYPE_2__ AVBufferRef ;


 scalar_t__ VAR_0 ;

struct mp_vdpau_ctx *FUNC_0(AVBufferRef *VAR_1)
{
    AVHWDeviceContext *VAR_2 = (void *)VAR_1->data;

    if (VAR_2->free != VAR_0)
        return ((void*)0);

    return VAR_2->user_opaque;
}
