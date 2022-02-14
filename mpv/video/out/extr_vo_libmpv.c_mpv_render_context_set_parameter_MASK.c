
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int mpv_render_param ;
struct TYPE_6__ {TYPE_3__* renderer; } ;
typedef TYPE_2__ mpv_render_context ;
struct TYPE_7__ {TYPE_1__* fns; } ;
struct TYPE_5__ {int (* set_parameter ) (TYPE_3__*,int ) ;} ;


 int FUNC_0 (TYPE_3__*,int ) ;

int FUNC_1(mpv_render_context *VAR_0,
                                     mpv_render_param VAR_1)
{
    return VAR_0->renderer->fns->set_parameter(VAR_0->renderer, VAR_1);
}
