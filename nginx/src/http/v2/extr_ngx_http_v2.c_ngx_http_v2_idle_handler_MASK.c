
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_25__ TYPE_8__ ;
typedef struct TYPE_24__ TYPE_7__ ;
typedef struct TYPE_23__ TYPE_6__ ;
typedef struct TYPE_22__ TYPE_5__ ;
typedef struct TYPE_21__ TYPE_4__ ;
typedef struct TYPE_20__ TYPE_3__ ;
typedef struct TYPE_19__ TYPE_2__ ;
typedef struct TYPE_18__ TYPE_1__ ;
typedef struct TYPE_17__ TYPE_10__ ;


struct TYPE_22__ {int max_requests; int pool_size; } ;
typedef TYPE_5__ ngx_http_v2_srv_conf_t ;
struct TYPE_23__ {int * pool; TYPE_3__* connection; int idle; TYPE_2__* http_connection; } ;
typedef TYPE_6__ ngx_http_v2_connection_t ;
struct TYPE_24__ {int (* handler ) (TYPE_7__*) ;int kq_errno; scalar_t__ pending_eof; scalar_t__ timedout; TYPE_8__* data; } ;
typedef TYPE_7__ ngx_event_t ;
struct TYPE_25__ {TYPE_4__* write; scalar_t__ destroyed; TYPE_1__* ssl; int addr_text; TYPE_10__* log; scalar_t__ close; TYPE_6__* data; } ;
typedef TYPE_8__ ngx_connection_t ;
struct TYPE_21__ {int handler; } ;
struct TYPE_20__ {int log; } ;
struct TYPE_19__ {int conf_ctx; } ;
struct TYPE_18__ {int no_send_shutdown; } ;
struct TYPE_17__ {int * handler; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int * FUNC_0 (int ,int ) ;
 int VAR_5 ;
 int FUNC_1 (TYPE_8__*) ;
 TYPE_5__* FUNC_2 (int ,int ) ;
 int FUNC_3 (TYPE_6__*,int ) ;
 int VAR_6 ;
 int FUNC_4 (TYPE_7__*) ;
 int VAR_7 ;
 int FUNC_5 (int ,TYPE_10__*,int ,char*) ;
 int FUNC_6 (int ,TYPE_10__*,int ,char*,...) ;
 int FUNC_7 (TYPE_8__*,int ) ;

__attribute__((used)) static void
FUNC_8(ngx_event_t *VAR_8)
{
    ngx_connection_t *VAR_9;
    ngx_http_v2_srv_conf_t *VAR_10;
    ngx_http_v2_connection_t *VAR_11;

    VAR_9 = VAR_8->data;
    VAR_11 = VAR_9->data;

    FUNC_5(VAR_2, VAR_9->log, 0, "http2 idle handler");

    if (VAR_8->timedout || VAR_9->close) {
        FUNC_3(VAR_11, VAR_1);
        return;
    }
    VAR_10 = FUNC_2(VAR_11->http_connection->conf_ctx,
                                         VAR_6);

    if (VAR_11->idle++ > 10 * VAR_10->max_requests) {
        FUNC_6(VAR_3, VAR_11->connection->log, 0,
                      "http2 flood detected");
        FUNC_3(VAR_11, VAR_1);
        return;
    }

    VAR_9->destroyed = 0;
    FUNC_7(VAR_9, 0);

    VAR_11->pool = FUNC_0(VAR_10->pool_size, VAR_11->connection->log);
    if (VAR_11->pool == ((void*)0)) {
        FUNC_3(VAR_11, VAR_0);
        return;
    }

    VAR_9->write->handler = VAR_7;

    VAR_8->handler = FUNC_4;
    FUNC_4(VAR_8);
}
