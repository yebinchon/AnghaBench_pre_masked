
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mpv_handle {TYPE_1__* mpctx; } ;
struct mpv_global {int dummy; } ;
struct TYPE_2__ {struct mpv_global* global; } ;



struct mpv_global *FUNC_0(struct mpv_handle *VAR_0)
{
    return VAR_0->mpctx->global;
}
