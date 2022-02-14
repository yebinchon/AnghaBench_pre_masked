
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* client_api; } ;
typedef TYPE_2__ mpv_opengl_cb_context ;
typedef int int64_t ;
struct TYPE_4__ {int render_context; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;

int FUNC_1(mpv_opengl_cb_context *VAR_1, int64_t VAR_2)
{
    if (!VAR_1->client_api->render_context)
        return VAR_0;

    FUNC_0(VAR_1->client_api->render_context);
    return 0;
}
