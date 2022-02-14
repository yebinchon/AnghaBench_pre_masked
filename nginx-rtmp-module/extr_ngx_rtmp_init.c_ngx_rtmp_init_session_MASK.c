
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_27__ TYPE_7__ ;
typedef struct TYPE_26__ TYPE_6__ ;
typedef struct TYPE_25__ TYPE_5__ ;
typedef struct TYPE_24__ TYPE_4__ ;
typedef struct TYPE_23__ TYPE_3__ ;
typedef struct TYPE_22__ TYPE_2__ ;
typedef struct TYPE_21__ TYPE_1__ ;
typedef struct TYPE_20__ TYPE_14__ ;


typedef int ngx_rtmp_stream_t ;
struct TYPE_23__ {int out_queue; int buflen; int timeout; int epoch; int posted_dry_events; int * in_streams; int out_cork; int * ctx; TYPE_7__* connection; int * addr_text; scalar_t__* srv_conf; int main_conf; } ;
typedef TYPE_3__ ngx_rtmp_session_t ;
struct TYPE_24__ {TYPE_3__* session; int * client; } ;
typedef TYPE_4__ ngx_rtmp_error_log_ctx_t ;
struct TYPE_25__ {int out_queue; int max_streams; int buflen; int timeout; int out_cork; } ;
typedef TYPE_5__ ngx_rtmp_core_srv_conf_t ;
struct TYPE_26__ {int addr_text; TYPE_1__* ctx; } ;
typedef TYPE_6__ ngx_rtmp_addr_conf_t ;
struct TYPE_27__ {int pool; int log_error; TYPE_2__* log; int number; int addr_text; TYPE_3__* data; } ;
typedef TYPE_7__ ngx_connection_t ;
typedef int ngx_chain_t ;
struct TYPE_22__ {int * action; TYPE_4__* data; int handler; int connection; } ;
struct TYPE_21__ {scalar_t__* srv_conf; int main_conf; } ;
struct TYPE_20__ {size_t ctx_index; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_4__* FUNC_0 (int ,int) ;
 void* FUNC_1 (int ,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (TYPE_7__*) ;
 TYPE_14__ VAR_5 ;
 int FUNC_4 (TYPE_3__*) ;
 scalar_t__ FUNC_5 (TYPE_3__*,int ,int *,int *) ;
 TYPE_5__* FUNC_6 (TYPE_3__*,TYPE_14__) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_7 (TYPE_3__*,int ) ;

ngx_rtmp_session_t *
FUNC_8(ngx_connection_t *VAR_8, ngx_rtmp_addr_conf_t *VAR_9)
{
    ngx_rtmp_session_t *VAR_10;
    ngx_rtmp_core_srv_conf_t *VAR_11;
    ngx_rtmp_error_log_ctx_t *VAR_12;

    VAR_10 = FUNC_1(VAR_8->pool, sizeof(ngx_rtmp_session_t) +
            sizeof(ngx_chain_t *) * ((ngx_rtmp_core_srv_conf_t *)
                VAR_9->ctx-> srv_conf[VAR_5
                    .ctx_index])->out_queue);
    if (VAR_10 == ((void*)0)) {
        FUNC_3(VAR_8);
        return ((void*)0);
    }

    VAR_10->main_conf = VAR_9->ctx->main_conf;
    VAR_10->srv_conf = VAR_9->ctx->srv_conf;

    VAR_10->addr_text = &VAR_9->addr_text;

    VAR_8->data = VAR_10;
    VAR_10->connection = VAR_8;

    VAR_12 = FUNC_0(VAR_8->pool, sizeof(ngx_rtmp_error_log_ctx_t));
    if (VAR_12 == ((void*)0)) {
        FUNC_3(VAR_8);
        return ((void*)0);
    }

    VAR_12->client = &VAR_8->addr_text;
    VAR_12->session = VAR_10;

    VAR_8->log->connection = VAR_8->number;
    VAR_8->log->handler = VAR_6;
    VAR_8->log->data = VAR_12;
    VAR_8->log->action = ((void*)0);

    VAR_8->log_error = VAR_0;

    VAR_10->ctx = FUNC_1(VAR_8->pool, sizeof(void *) * VAR_7);
    if (VAR_10->ctx == ((void*)0)) {
        FUNC_3(VAR_8);
        return ((void*)0);
    }

    VAR_11 = FUNC_6(VAR_10, VAR_5);

    VAR_10->out_queue = VAR_11->out_queue;
    VAR_10->out_cork = VAR_11->out_cork;
    VAR_10->in_streams = FUNC_1(VAR_8->pool, sizeof(ngx_rtmp_stream_t)
            * VAR_11->max_streams);
    if (VAR_10->in_streams == ((void*)0)) {
        FUNC_3(VAR_8);
        return ((void*)0);
    }





    VAR_10->epoch = VAR_4;
    VAR_10->timeout = VAR_11->timeout;
    VAR_10->buflen = VAR_11->buflen;
    FUNC_7(VAR_10, VAR_3);


    if (FUNC_5(VAR_10, VAR_2, ((void*)0), ((void*)0)) != VAR_1) {
        FUNC_4(VAR_10);
        return ((void*)0);
    }

    return VAR_10;
}
