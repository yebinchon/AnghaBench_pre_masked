
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int mpv_opengl_cb_update_fn ;
struct TYPE_5__ {void* callback_ctx; int callback; TYPE_1__* client_api; } ;
typedef TYPE_2__ mpv_opengl_cb_context ;
struct TYPE_4__ {scalar_t__ render_context; } ;


 int FUNC_0 (scalar_t__,int ,void*) ;

void FUNC_1(mpv_opengl_cb_context *VAR_0,
                                       mpv_opengl_cb_update_fn VAR_1,
                                       void *VAR_2)
{


    if (VAR_0->client_api->render_context) {
        FUNC_0(VAR_0->client_api->render_context,
                                               VAR_1, VAR_2);
    }


    VAR_0->callback = VAR_1;
    VAR_0->callback_ctx = VAR_2;
}
