
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* client_api; } ;
typedef TYPE_2__ mpv_opengl_cb_context ;
struct TYPE_4__ {int * render_context; } ;


 int FUNC_0 (int *) ;

int FUNC_1(mpv_opengl_cb_context *VAR_0)
{
    if (VAR_0->client_api->render_context)
        FUNC_0(VAR_0->client_api->render_context);
    VAR_0->client_api->render_context = ((void*)0);
    return 0;
}
