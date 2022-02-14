
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_28__ TYPE_9__ ;
typedef struct TYPE_27__ TYPE_8__ ;
typedef struct TYPE_26__ TYPE_7__ ;
typedef struct TYPE_25__ TYPE_6__ ;
typedef struct TYPE_24__ TYPE_5__ ;
typedef struct TYPE_23__ TYPE_4__ ;
typedef struct TYPE_22__ TYPE_3__ ;
typedef struct TYPE_21__ TYPE_2__ ;
typedef struct TYPE_20__ TYPE_1__ ;
typedef struct TYPE_19__ TYPE_13__ ;
typedef struct TYPE_18__ TYPE_10__ ;


struct TYPE_24__ {int msec; int sec; } ;
typedef TYPE_5__ ngx_time_t ;
typedef int ngx_table_elt_t ;
typedef int ngx_pool_t ;
typedef int ngx_http_variable_value_t ;
struct TYPE_23__ {int content_length_n; int last_modified_time; int trailers; int headers; } ;
struct TYPE_22__ {int content_length_n; int keep_alive_n; } ;
struct TYPE_25__ {int main_filter_need_in_memory; int count; int log_handler; int http_state; scalar_t__ subrequests; scalar_t__ uri_changes; TYPE_4__ headers_out; TYPE_3__ headers_in; int http_version; int method; int start_msec; int start_sec; struct TYPE_25__* main; int * pool; int * variables; int * ctx; int header_in; int read_event_handler; int loc_conf; int srv_conf; int main_conf; TYPE_10__* connection; int signature; TYPE_9__* http_connection; } ;
typedef TYPE_6__ ngx_http_request_t ;
struct TYPE_26__ {int request_pool_size; } ;
typedef TYPE_7__ ngx_http_core_srv_conf_t ;
struct TYPE_21__ {int nelts; } ;
struct TYPE_27__ {TYPE_2__ variables; } ;
typedef TYPE_8__ ngx_http_core_main_conf_t ;
struct TYPE_28__ {TYPE_1__* busy; TYPE_13__* conf_ctx; } ;
typedef TYPE_9__ ngx_http_connection_t ;
struct TYPE_18__ {scalar_t__ ssl; int buffer; int log; TYPE_9__* data; } ;
typedef TYPE_10__ ngx_connection_t ;
struct TYPE_20__ {int buf; } ;
struct TYPE_19__ {int loc_conf; int srv_conf; int main_conf; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int * FUNC_0 (int ,int ) ;
 int FUNC_1 (int *) ;
 int VAR_7 ;
 int VAR_8 ;
 TYPE_8__* FUNC_2 (TYPE_6__*,int ) ;
 TYPE_7__* FUNC_3 (TYPE_13__*,int ) ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ FUNC_4 (int *,int *,int,int) ;
 void* FUNC_5 (int *,int) ;
 TYPE_5__* FUNC_6 () ;

__attribute__((used)) static ngx_http_request_t *
FUNC_7(ngx_connection_t *VAR_11)
{
    ngx_pool_t *VAR_12;
    ngx_time_t *VAR_13;
    ngx_http_request_t *VAR_14;
    ngx_http_connection_t *VAR_15;
    ngx_http_core_srv_conf_t *VAR_16;
    ngx_http_core_main_conf_t *VAR_17;

    VAR_15 = VAR_11->data;

    VAR_16 = FUNC_3(VAR_15->conf_ctx, VAR_8);

    VAR_12 = FUNC_0(VAR_16->request_pool_size, VAR_11->log);
    if (VAR_12 == ((void*)0)) {
        return ((void*)0);
    }

    VAR_14 = FUNC_5(VAR_12, sizeof(ngx_http_request_t));
    if (VAR_14 == ((void*)0)) {
        FUNC_1(VAR_12);
        return ((void*)0);
    }

    VAR_14->pool = VAR_12;

    VAR_14->http_connection = VAR_15;
    VAR_14->signature = VAR_2;
    VAR_14->connection = VAR_11;

    VAR_14->main_conf = VAR_15->conf_ctx->main_conf;
    VAR_14->srv_conf = VAR_15->conf_ctx->srv_conf;
    VAR_14->loc_conf = VAR_15->conf_ctx->loc_conf;

    VAR_14->read_event_handler = VAR_7;

    VAR_14->header_in = VAR_15->busy ? VAR_15->busy->buf : VAR_11->buffer;

    if (FUNC_4(&VAR_14->headers_out.headers, VAR_14->pool, 20,
                      sizeof(ngx_table_elt_t))
        != VAR_6)
    {
        FUNC_1(VAR_14->pool);
        return ((void*)0);
    }

    if (FUNC_4(&VAR_14->headers_out.trailers, VAR_14->pool, 4,
                      sizeof(ngx_table_elt_t))
        != VAR_6)
    {
        FUNC_1(VAR_14->pool);
        return ((void*)0);
    }

    VAR_14->ctx = FUNC_5(VAR_14->pool, sizeof(void *) * VAR_10);
    if (VAR_14->ctx == ((void*)0)) {
        FUNC_1(VAR_14->pool);
        return ((void*)0);
    }

    VAR_17 = FUNC_2(VAR_14, VAR_8);

    VAR_14->variables = FUNC_5(VAR_14->pool, VAR_17->variables.nelts
                                        * sizeof(ngx_http_variable_value_t));
    if (VAR_14->variables == ((void*)0)) {
        FUNC_1(VAR_14->pool);
        return ((void*)0);
    }







    VAR_14->main = VAR_14;
    VAR_14->count = 1;

    VAR_13 = FUNC_6();
    VAR_14->start_sec = VAR_13->sec;
    VAR_14->start_msec = VAR_13->msec;

    VAR_14->method = VAR_4;
    VAR_14->http_version = VAR_5;

    VAR_14->headers_in.content_length_n = -1;
    VAR_14->headers_in.keep_alive_n = -1;
    VAR_14->headers_out.content_length_n = -1;
    VAR_14->headers_out.last_modified_time = -1;

    VAR_14->uri_changes = VAR_1 + 1;
    VAR_14->subrequests = VAR_0 + 1;

    VAR_14->http_state = VAR_3;

    VAR_14->log_handler = VAR_9;

    return VAR_14;
}
