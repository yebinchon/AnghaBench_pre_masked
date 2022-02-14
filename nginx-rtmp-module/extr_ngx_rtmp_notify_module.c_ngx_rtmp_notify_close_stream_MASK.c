
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_8__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {scalar_t__ auto_pushed; } ;
typedef TYPE_1__ ngx_rtmp_session_t ;
struct TYPE_12__ {scalar_t__ timer_set; } ;
struct TYPE_11__ {int flags; TYPE_8__ update_evt; } ;
typedef TYPE_2__ ngx_rtmp_notify_ctx_t ;
typedef int ngx_rtmp_notify_app_conf_t ;
typedef int ngx_rtmp_close_stream_t ;
typedef int ngx_int_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (TYPE_1__*,int *) ;
 int FUNC_1 (TYPE_8__*) ;
 int * FUNC_2 (TYPE_1__*,int ) ;
 TYPE_2__* FUNC_3 (TYPE_1__*,int ) ;
 int FUNC_4 (TYPE_1__*,char*,int ) ;
 int VAR_5 ;

__attribute__((used)) static ngx_int_t
FUNC_5(ngx_rtmp_session_t *VAR_6,
                             ngx_rtmp_close_stream_t *VAR_7)
{
    ngx_rtmp_notify_ctx_t *VAR_8;
    ngx_rtmp_notify_app_conf_t *VAR_9;

    if (VAR_6->auto_pushed) {
        goto next;
    }

    VAR_8 = FUNC_3(VAR_6, VAR_5);

    if (VAR_8 == ((void*)0)) {
        goto next;
    }

    VAR_9 = FUNC_2(VAR_6, VAR_5);

    if (VAR_9 == ((void*)0)) {
        goto next;
    }

    if (VAR_8->flags & VAR_3) {
        FUNC_4(VAR_6, "publish_done", VAR_4);
    }

    if (VAR_8->flags & VAR_1) {
        FUNC_4(VAR_6, "play_done", VAR_2);
    }

    if (VAR_8->flags) {
        FUNC_4(VAR_6, "done", VAR_0);
    }

    if (VAR_8->update_evt.timer_set) {
        FUNC_1(&VAR_8->update_evt);
    }

    VAR_8->flags = 0;

next:
    return FUNC_0(VAR_6, VAR_7);
}
