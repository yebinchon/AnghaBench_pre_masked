
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_32__ TYPE_9__ ;
typedef struct TYPE_31__ TYPE_8__ ;
typedef struct TYPE_30__ TYPE_7__ ;
typedef struct TYPE_29__ TYPE_6__ ;
typedef struct TYPE_28__ TYPE_5__ ;
typedef struct TYPE_27__ TYPE_4__ ;
typedef struct TYPE_26__ TYPE_3__ ;
typedef struct TYPE_25__ TYPE_2__ ;
typedef struct TYPE_24__ TYPE_1__ ;
typedef struct TYPE_23__ TYPE_10__ ;


typedef scalar_t__ ngx_int_t ;
struct TYPE_25__ {scalar_t__ tag; } ;
struct TYPE_29__ {int accel; TYPE_7__* input_filter_ctx; int input_filter; int input_filter_init; TYPE_3__* pipe; int buffering; int rewrite_cookie; int rewrite_redirect; int finalize_request; int abort_request; int process_header; int reinit_request; int create_request; int create_key; int * caches; TYPE_4__* conf; TYPE_2__ output; int ssl; int schema; } ;
typedef TYPE_6__ ngx_http_upstream_t ;
struct TYPE_28__ {int chunked; } ;
struct TYPE_30__ {int request_body_no_buffering; TYPE_5__ headers_in; int pool; scalar_t__ state; TYPE_6__* upstream; } ;
typedef TYPE_7__ ngx_http_request_t ;
struct TYPE_31__ {int caches; } ;
typedef TYPE_8__ ngx_http_proxy_main_conf_t ;
struct TYPE_27__ {scalar_t__ pass_request_body; int request_buffering; int buffering; int * ssl; } ;
struct TYPE_24__ {int schema; } ;
struct TYPE_32__ {scalar_t__ http_version; TYPE_4__ upstream; int * body_values; scalar_t__ cookie_paths; scalar_t__ cookie_domains; scalar_t__ redirects; TYPE_1__ vars; int * proxy_lengths; } ;
typedef TYPE_9__ ngx_http_proxy_loc_conf_t ;
struct TYPE_23__ {TYPE_1__ vars; } ;
typedef TYPE_10__ ngx_http_proxy_ctx_t ;
typedef int ngx_event_pipe_t ;
typedef scalar_t__ ngx_buf_tag_t ;
struct TYPE_26__ {TYPE_7__* input_ctx; int input_filter; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 TYPE_9__* FUNC_0 (TYPE_7__*,int ) ;
 TYPE_8__* FUNC_1 (TYPE_7__*,int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_2 (TYPE_7__*,TYPE_10__*,TYPE_9__*) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 scalar_t__ FUNC_3 (TYPE_7__*,int ) ;
 int FUNC_4 (TYPE_7__*,TYPE_10__*,int ) ;
 scalar_t__ FUNC_5 (TYPE_7__*) ;
 int VAR_17 ;
 void* FUNC_6 (int ,int) ;

__attribute__((used)) static ngx_int_t
FUNC_7(ngx_http_request_t *VAR_18)
{
    ngx_int_t VAR_19;
    ngx_http_upstream_t *VAR_20;
    ngx_http_proxy_ctx_t *VAR_21;
    ngx_http_proxy_loc_conf_t *VAR_22;




    if (FUNC_5(VAR_18) != VAR_4) {
        return VAR_1;
    }

    VAR_21 = FUNC_6(VAR_18->pool, sizeof(ngx_http_proxy_ctx_t));
    if (VAR_21 == ((void*)0)) {
        return VAR_1;
    }

    FUNC_4(VAR_18, VAR_21, VAR_11);

    VAR_22 = FUNC_0(VAR_18, VAR_11);

    VAR_20 = VAR_18->upstream;

    if (VAR_22->proxy_lengths == ((void*)0)) {
        VAR_21->vars = VAR_22->vars;
        VAR_20->schema = VAR_22->vars.schema;




    } else {
        if (FUNC_2(VAR_18, VAR_21, VAR_22) != VAR_4) {
            return VAR_1;
        }
    }

    VAR_20->output.tag = (ngx_buf_tag_t) &VAR_11;

    VAR_20->conf = &VAR_22->upstream;
    VAR_20->create_request = VAR_8;
    VAR_20->reinit_request = VAR_14;
    VAR_20->process_header = VAR_13;
    VAR_20->abort_request = VAR_5;
    VAR_20->finalize_request = VAR_9;
    VAR_18->state = 0;

    if (VAR_22->redirects) {
        VAR_20->rewrite_redirect = VAR_16;
    }

    if (VAR_22->cookie_domains || VAR_22->cookie_paths) {
        VAR_20->rewrite_cookie = VAR_15;
    }

    VAR_20->buffering = VAR_22->upstream.buffering;

    VAR_20->pipe = FUNC_6(VAR_18->pool, sizeof(ngx_event_pipe_t));
    if (VAR_20->pipe == ((void*)0)) {
        return VAR_1;
    }

    VAR_20->pipe->input_filter = VAR_6;
    VAR_20->pipe->input_ctx = VAR_18;

    VAR_20->input_filter_init = VAR_10;
    VAR_20->input_filter = VAR_12;
    VAR_20->input_filter_ctx = VAR_18;

    VAR_20->accel = 1;

    if (!VAR_22->upstream.request_buffering
        && VAR_22->body_values == ((void*)0) && VAR_22->upstream.pass_request_body
        && (!VAR_18->headers_in.chunked
            || VAR_22->http_version == VAR_3))
    {
        VAR_18->request_body_no_buffering = 1;
    }

    VAR_19 = FUNC_3(VAR_18, VAR_17);

    if (VAR_19 >= VAR_2) {
        return VAR_19;
    }

    return VAR_0;
}
