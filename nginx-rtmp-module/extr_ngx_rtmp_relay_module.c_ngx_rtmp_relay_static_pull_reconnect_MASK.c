
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_8__ ;
typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_12__ {TYPE_8__* target; int cctx; } ;
typedef TYPE_2__ ngx_rtmp_relay_static_t ;
struct TYPE_13__ {TYPE_5__* static_evt; TYPE_1__* session; } ;
typedef TYPE_3__ ngx_rtmp_relay_ctx_t ;
struct TYPE_14__ {int pull_reconnect; int log; } ;
typedef TYPE_4__ ngx_rtmp_relay_app_conf_t ;
struct TYPE_15__ {TYPE_2__* data; } ;
typedef TYPE_5__ ngx_event_t ;
struct TYPE_16__ {int name; } ;
struct TYPE_11__ {int static_relay; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_5__*,int ) ;
 int FUNC_1 (int ,int ,int ,char*) ;
 TYPE_4__* FUNC_2 (int *,int ) ;
 TYPE_3__* FUNC_3 (int *,int *,TYPE_8__*) ;
 int VAR_1 ;

__attribute__((used)) static void
FUNC_4(ngx_event_t *VAR_2)
{
    ngx_rtmp_relay_static_t *VAR_3 = VAR_2->data;

    ngx_rtmp_relay_ctx_t *VAR_4;
    ngx_rtmp_relay_app_conf_t *VAR_5;

    VAR_5 = FUNC_2(&VAR_3->cctx, VAR_1);

    FUNC_1(VAR_0, VAR_5->log, 0,
                   "relay: reconnecting static pull");

    VAR_4 = FUNC_3(&VAR_3->cctx, &VAR_3->target->name,
                                           VAR_3->target);
    if (VAR_4) {
        VAR_4->session->static_relay = 1;
        VAR_4->static_evt = VAR_2;
        return;
    }

    FUNC_0(VAR_2, VAR_5->pull_reconnect);
}
