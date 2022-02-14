
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int mpv_sub_api ;
struct TYPE_6__ {TYPE_1__* mpctx; } ;
typedef TYPE_2__ mpv_handle ;
struct TYPE_5__ {int initialized; } ;



 void* FUNC_0 (TYPE_2__*) ;

void *FUNC_1(mpv_handle *VAR_0, mpv_sub_api VAR_1)
{
    if (!VAR_0->mpctx->initialized)
        return ((void*)0);
    void *VAR_2 = ((void*)0);
    switch (VAR_1) {
    case 128:
        VAR_2 = FUNC_0(VAR_0);
        break;
    default:;
    }
    return VAR_2;
}
