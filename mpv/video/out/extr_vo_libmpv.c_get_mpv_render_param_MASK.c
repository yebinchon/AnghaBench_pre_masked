
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ mpv_render_param_type ;
struct TYPE_3__ {scalar_t__ type; void* data; } ;
typedef TYPE_1__ mpv_render_param ;



void *FUNC_0(mpv_render_param *VAR_0, mpv_render_param_type VAR_1,
                           void *VAR_2)
{
    for (int VAR_3 = 0; VAR_0 && VAR_0[VAR_3].type; VAR_3++) {
        if (VAR_0[VAR_3].type == VAR_1)
            return VAR_0[VAR_3].data;
    }
    return VAR_2;
}
