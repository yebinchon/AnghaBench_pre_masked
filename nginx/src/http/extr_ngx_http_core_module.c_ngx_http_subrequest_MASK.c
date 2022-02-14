
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_28__ TYPE_8__ ;
typedef struct TYPE_27__ TYPE_7__ ;
typedef struct TYPE_26__ TYPE_6__ ;
typedef struct TYPE_25__ TYPE_5__ ;
typedef struct TYPE_24__ TYPE_4__ ;
typedef struct TYPE_23__ TYPE_3__ ;
typedef struct TYPE_22__ TYPE_2__ ;
typedef struct TYPE_21__ TYPE_1__ ;


typedef int ngx_uint_t ;
struct TYPE_24__ {int msec; int sec; } ;
typedef TYPE_4__ ngx_time_t ;
typedef int ngx_table_elt_t ;
typedef void* ngx_str_t ;
typedef int ngx_int_t ;
struct TYPE_22__ {int trailers; int headers; } ;
struct TYPE_25__ {scalar_t__ subrequests; int subrequest_in_memory; int waited; int background; int filter_need_in_memory; int internal; int expect_tested; int realloc_captures; int captures_data; int captures; int ncaptures; int write_event_handler; int phase_handler; int content_handler; int valid_unparsed_uri; int valid_location; int loc_conf; int method_name; int method; TYPE_1__* main; int start_msec; int start_sec; scalar_t__ uri_changes; int main_filter_need_in_memory; int discard_body; TYPE_6__* postponed; int pool; int log_handler; int variables; int read_event_handler; int * post_subrequest; struct TYPE_25__* parent; int schema; int http_protocol; int unparsed_uri; void* args; void* uri; int request_line; int http_version; int stream; int request_body; int headers_in; int srv_conf; int main_conf; TYPE_2__ headers_out; int * ctx; TYPE_8__* connection; int signature; } ;
typedef TYPE_5__ ngx_http_request_t ;
struct TYPE_26__ {struct TYPE_26__* next; int * out; TYPE_5__* request; } ;
typedef TYPE_6__ ngx_http_postponed_request_t ;
typedef int ngx_http_post_subrequest_t ;
struct TYPE_27__ {TYPE_3__* ctx; } ;
typedef TYPE_7__ ngx_http_core_srv_conf_t ;
struct TYPE_28__ {TYPE_5__* data; int log; } ;
typedef TYPE_8__ ngx_connection_t ;
struct TYPE_23__ {int loc_conf; int srv_conf; int main_conf; } ;
struct TYPE_21__ {int count; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 int FUNC_0 (TYPE_5__*) ;
 int FUNC_1 (TYPE_5__*) ;
 int FUNC_2 (TYPE_5__*) ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 TYPE_7__* FUNC_3 (TYPE_5__*,int ) ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_4 (TYPE_5__*,int *) ;
 int VAR_17 ;
 int FUNC_5 (TYPE_5__*) ;
 int FUNC_6 (TYPE_5__*) ;
 scalar_t__ FUNC_7 (int *,int ,int,int) ;
 int FUNC_8 (int ,int ,int ,char*,void**,void**) ;
 int FUNC_9 (int ,int ,int ,char*,void**) ;
 TYPE_6__* FUNC_10 (int ,int) ;
 void* FUNC_11 (int ,int) ;
 TYPE_4__* FUNC_12 () ;

ngx_int_t
FUNC_13(ngx_http_request_t *VAR_18,
    ngx_str_t *VAR_19, ngx_str_t *VAR_20, ngx_http_request_t **VAR_21,
    ngx_http_post_subrequest_t *VAR_22, ngx_uint_t VAR_23)
{
    ngx_time_t *VAR_24;
    ngx_connection_t *VAR_25;
    ngx_http_request_t *VAR_26;
    ngx_http_core_srv_conf_t *VAR_27;
    ngx_http_postponed_request_t *VAR_28, *VAR_29;

    if (VAR_18->subrequests == 0) {
        FUNC_9(VAR_10, VAR_18->connection->log, 0,
                      "subrequests cycle while processing \"%V\"", VAR_19);
        return VAR_0;
    }




    if (VAR_18->main->count >= 65535 - 1000) {
        FUNC_9(VAR_8, VAR_18->connection->log, 0,
                      "request reference counter overflow "
                      "while processing \"%V\"", VAR_19);
        return VAR_0;
    }

    if (VAR_18->subrequest_in_memory) {
        FUNC_9(VAR_10, VAR_18->connection->log, 0,
                      "nested in-memory subrequest \"%V\"", VAR_19);
        return VAR_0;
    }

    VAR_26 = FUNC_11(VAR_18->pool, sizeof(ngx_http_request_t));
    if (VAR_26 == ((void*)0)) {
        return VAR_0;
    }

    VAR_26->signature = VAR_3;

    VAR_25 = VAR_18->connection;
    VAR_26->connection = VAR_25;

    VAR_26->ctx = FUNC_11(VAR_18->pool, sizeof(void *) * VAR_16);
    if (VAR_26->ctx == ((void*)0)) {
        return VAR_0;
    }

    if (FUNC_7(&VAR_26->headers_out.headers, VAR_18->pool, 20,
                      sizeof(ngx_table_elt_t))
        != VAR_11)
    {
        return VAR_0;
    }

    if (FUNC_7(&VAR_26->headers_out.trailers, VAR_18->pool, 4,
                      sizeof(ngx_table_elt_t))
        != VAR_11)
    {
        return VAR_0;
    }

    VAR_27 = FUNC_3(VAR_18, VAR_13);
    VAR_26->main_conf = VAR_27->ctx->main_conf;
    VAR_26->srv_conf = VAR_27->ctx->srv_conf;
    VAR_26->loc_conf = VAR_27->ctx->loc_conf;

    VAR_26->pool = VAR_18->pool;

    VAR_26->headers_in = VAR_18->headers_in;

    FUNC_1(VAR_26);
    FUNC_0(VAR_26);
    FUNC_2(VAR_26);

    VAR_26->request_body = VAR_18->request_body;





    VAR_26->method = VAR_1;
    VAR_26->http_version = VAR_18->http_version;

    VAR_26->request_line = VAR_18->request_line;
    VAR_26->uri = *VAR_19;

    if (VAR_20) {
        VAR_26->args = *VAR_20;
    }

    FUNC_8(VAR_9, VAR_25->log, 0,
                   "http subrequest \"%V?%V\"", VAR_19, &VAR_26->args);

    VAR_26->subrequest_in_memory = (VAR_23 & VAR_6) != 0;
    VAR_26->waited = (VAR_23 & VAR_7) != 0;
    VAR_26->background = (VAR_23 & VAR_4) != 0;

    VAR_26->unparsed_uri = VAR_18->unparsed_uri;
    VAR_26->method_name = VAR_12;
    VAR_26->http_protocol = VAR_18->http_protocol;
    VAR_26->schema = VAR_18->schema;

    FUNC_5(VAR_26);

    VAR_26->main = VAR_18->main;
    VAR_26->parent = VAR_18;
    VAR_26->post_subrequest = VAR_22;
    VAR_26->read_event_handler = VAR_17;
    VAR_26->write_event_handler = VAR_15;

    VAR_26->variables = VAR_18->variables;

    VAR_26->log_handler = VAR_18->log_handler;

    if (VAR_26->subrequest_in_memory) {
        VAR_26->filter_need_in_memory = 1;
    }

    if (!VAR_26->background) {
        if (VAR_25->data == VAR_18 && VAR_18->postponed == ((void*)0)) {
            VAR_25->data = VAR_26;
        }

        VAR_28 = FUNC_10(VAR_18->pool, sizeof(ngx_http_postponed_request_t));
        if (VAR_28 == ((void*)0)) {
            return VAR_0;
        }

        VAR_28->request = VAR_26;
        VAR_28->out = ((void*)0);
        VAR_28->next = ((void*)0);

        if (VAR_18->postponed) {
            for (VAR_29 = VAR_18->postponed; VAR_29->next; VAR_29 = VAR_29->next) { }
            VAR_29->next = VAR_28;

        } else {
            VAR_18->postponed = VAR_28;
        }
    }

    VAR_26->internal = 1;

    VAR_26->discard_body = VAR_18->discard_body;
    VAR_26->expect_tested = 1;
    VAR_26->main_filter_need_in_memory = VAR_18->main_filter_need_in_memory;

    VAR_26->uri_changes = VAR_2 + 1;
    VAR_26->subrequests = VAR_18->subrequests - 1;

    VAR_24 = FUNC_12();
    VAR_26->start_sec = VAR_24->sec;
    VAR_26->start_msec = VAR_24->msec;

    VAR_18->main->count++;

    *VAR_21 = VAR_26;

    if (VAR_23 & VAR_5) {
        VAR_26->method = VAR_18->method;
        VAR_26->method_name = VAR_18->method_name;
        VAR_26->loc_conf = VAR_18->loc_conf;
        VAR_26->valid_location = VAR_18->valid_location;
        VAR_26->valid_unparsed_uri = VAR_18->valid_unparsed_uri;
        VAR_26->content_handler = VAR_18->content_handler;
        VAR_26->phase_handler = VAR_18->phase_handler;
        VAR_26->write_event_handler = VAR_14;
        FUNC_6(VAR_26);
    }

    return FUNC_4(VAR_26, ((void*)0));
}
