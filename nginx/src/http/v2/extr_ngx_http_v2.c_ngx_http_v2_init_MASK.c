
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_31__ TYPE_9__ ;
typedef struct TYPE_30__ TYPE_8__ ;
typedef struct TYPE_29__ TYPE_6__ ;
typedef struct TYPE_28__ TYPE_5__ ;
typedef struct TYPE_27__ TYPE_4__ ;
typedef struct TYPE_26__ TYPE_3__ ;
typedef struct TYPE_25__ TYPE_2__ ;
typedef struct TYPE_24__ TYPE_20__ ;
typedef struct TYPE_23__ TYPE_1__ ;
typedef struct TYPE_22__ TYPE_11__ ;


struct TYPE_26__ {TYPE_6__* data; int handler; } ;
typedef TYPE_3__ ngx_pool_cleanup_t ;
struct TYPE_27__ {int pool_size; int concurrent_streams; int concurrent_pushes; } ;
typedef TYPE_4__ ngx_http_v2_srv_conf_t ;
typedef int ngx_http_v2_node_t ;
struct TYPE_28__ {int * recv_buffer; int recv_buffer_size; } ;
typedef TYPE_5__ ngx_http_v2_main_conf_t ;
struct TYPE_23__ {int handler; } ;
struct TYPE_29__ {int closed; int dependencies; int waiting; scalar_t__ proxy_protocol; TYPE_1__ state; int * streams_index; int * pool; TYPE_9__* connection; int priority_limit; int concurrent_pushes; int conf_ctx; int frame_size; void* init_window; void* recv_window; void* send_window; struct TYPE_29__* http_connection; } ;
typedef TYPE_6__ ngx_http_v2_connection_t ;
typedef TYPE_6__ ngx_http_connection_t ;
struct TYPE_30__ {int (* handler ) (TYPE_8__*) ;TYPE_9__* data; } ;
typedef TYPE_8__ ngx_event_t ;
struct TYPE_31__ {int idle; TYPE_2__* write; TYPE_6__* data; int pool; TYPE_11__* log; } ;
typedef TYPE_9__ ngx_connection_t ;
struct TYPE_25__ {int handler; } ;
struct TYPE_24__ {int pool; } ;
struct TYPE_22__ {char* action; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 void* VAR_2 ;
 void* VAR_3 ;
 int VAR_4 ;
 int * FUNC_0 (int ,TYPE_11__*) ;
 TYPE_20__* VAR_5 ;
 int FUNC_1 (TYPE_9__*) ;
 TYPE_5__* FUNC_2 (int ,int ) ;
 TYPE_4__* FUNC_3 (int ,int ) ;
 int FUNC_4 (TYPE_4__*) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_5 (TYPE_8__*) ;
 scalar_t__ FUNC_6 (TYPE_6__*) ;
 scalar_t__ FUNC_7 (TYPE_6__*,int ,void*) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_8 (int ,TYPE_11__*,int ,char*) ;
 int * FUNC_9 (int ,int ) ;
 void* FUNC_10 (int ,int) ;
 TYPE_3__* FUNC_11 (int ,int ) ;
 int FUNC_12 (int *) ;

void
FUNC_13(ngx_event_t *VAR_11)
{
    ngx_connection_t *VAR_12;
    ngx_pool_cleanup_t *VAR_13;
    ngx_http_connection_t *VAR_14;
    ngx_http_v2_srv_conf_t *VAR_15;
    ngx_http_v2_main_conf_t *VAR_16;
    ngx_http_v2_connection_t *VAR_17;

    VAR_12 = VAR_11->data;
    VAR_14 = VAR_12->data;

    FUNC_8(VAR_4, VAR_12->log, 0, "init http2 connection");

    VAR_12->log->action = "processing HTTP/2 connection";

    VAR_16 = FUNC_2(VAR_14->conf_ctx, VAR_6);

    if (VAR_16->recv_buffer == ((void*)0)) {
        VAR_16->recv_buffer = FUNC_9(VAR_5->pool,
                                        VAR_16->recv_buffer_size);
        if (VAR_16->recv_buffer == ((void*)0)) {
            FUNC_1(VAR_12);
            return;
        }
    }

    VAR_17 = FUNC_10(VAR_12->pool, sizeof(ngx_http_v2_connection_t));
    if (VAR_17 == ((void*)0)) {
        FUNC_1(VAR_12);
        return;
    }

    VAR_17->connection = VAR_12;
    VAR_17->http_connection = VAR_14;

    VAR_17->send_window = VAR_2;
    VAR_17->recv_window = VAR_3;

    VAR_17->init_window = VAR_2;

    VAR_17->frame_size = VAR_1;

    VAR_15 = FUNC_3(VAR_14->conf_ctx, VAR_6);

    VAR_17->concurrent_pushes = VAR_15->concurrent_pushes;
    VAR_17->priority_limit = VAR_15->concurrent_streams;

    VAR_17->pool = FUNC_0(VAR_15->pool_size, VAR_17->connection->log);
    if (VAR_17->pool == ((void*)0)) {
        FUNC_1(VAR_12);
        return;
    }

    VAR_13 = FUNC_11(VAR_12->pool, 0);
    if (VAR_13 == ((void*)0)) {
        FUNC_1(VAR_12);
        return;
    }

    VAR_13->handler = VAR_7;
    VAR_13->data = VAR_17;

    VAR_17->streams_index = FUNC_10(VAR_12->pool, FUNC_4(VAR_15)
                                              * sizeof(ngx_http_v2_node_t *));
    if (VAR_17->streams_index == ((void*)0)) {
        FUNC_1(VAR_12);
        return;
    }

    if (FUNC_6(VAR_17) == VAR_0) {
        FUNC_1(VAR_12);
        return;
    }

    if (FUNC_7(VAR_17, 0, VAR_3
                                               - VAR_2)
        == VAR_0)
    {
        FUNC_1(VAR_12);
        return;
    }

    VAR_17->state.handler = VAR_14->proxy_protocol ? VAR_9
                                            : VAR_8;

    FUNC_12(&VAR_17->waiting);
    FUNC_12(&VAR_17->dependencies);
    FUNC_12(&VAR_17->closed);

    VAR_12->data = VAR_17;

    VAR_11->handler = FUNC_5;
    VAR_12->write->handler = VAR_10;

    VAR_12->idle = 1;

    FUNC_5(VAR_11);
}
