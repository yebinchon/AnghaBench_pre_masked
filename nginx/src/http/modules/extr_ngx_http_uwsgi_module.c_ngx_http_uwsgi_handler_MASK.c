
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_26__ TYPE_8__ ;
typedef struct TYPE_25__ TYPE_7__ ;
typedef struct TYPE_24__ TYPE_6__ ;
typedef struct TYPE_23__ TYPE_5__ ;
typedef struct TYPE_22__ TYPE_4__ ;
typedef struct TYPE_21__ TYPE_3__ ;
typedef struct TYPE_20__ TYPE_2__ ;
typedef struct TYPE_19__ TYPE_1__ ;


typedef scalar_t__ ngx_int_t ;
struct TYPE_23__ {int caches; } ;
typedef TYPE_5__ ngx_http_uwsgi_main_conf_t ;
struct TYPE_21__ {scalar_t__ pass_request_body; int request_buffering; int buffering; int * ssl; } ;
struct TYPE_24__ {TYPE_3__ upstream; int * uwsgi_lengths; } ;
typedef TYPE_6__ ngx_http_uwsgi_loc_conf_t ;
struct TYPE_19__ {scalar_t__ tag; } ;
struct TYPE_25__ {int ssl; TYPE_2__* pipe; int buffering; int finalize_request; int abort_request; int process_header; int reinit_request; int create_request; int create_key; int * caches; TYPE_3__* conf; TYPE_1__ output; int schema; } ;
typedef TYPE_7__ ngx_http_upstream_t ;
typedef int ngx_http_status_t ;
struct TYPE_22__ {int chunked; } ;
struct TYPE_26__ {int request_body_no_buffering; TYPE_4__ headers_in; int pool; scalar_t__ state; TYPE_7__* upstream; } ;
typedef TYPE_8__ ngx_http_request_t ;
typedef int ngx_event_pipe_t ;
typedef scalar_t__ ngx_buf_tag_t ;
struct TYPE_20__ {TYPE_8__* input_ctx; int input_filter; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 TYPE_6__* FUNC_0 (TYPE_8__*,int ) ;
 TYPE_5__* FUNC_1 (TYPE_8__*,int ) ;
 scalar_t__ FUNC_2 (TYPE_8__*,int ) ;
 int FUNC_3 (TYPE_8__*,int *,int ) ;
 scalar_t__ FUNC_4 (TYPE_8__*) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_5 (TYPE_8__*,TYPE_6__*) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 void* FUNC_6 (int ,int) ;
 int FUNC_7 (int *,char*) ;

__attribute__((used)) static ngx_int_t
FUNC_8(ngx_http_request_t *VAR_13)
{
    ngx_int_t VAR_14;
    ngx_http_status_t *VAR_15;
    ngx_http_upstream_t *VAR_16;
    ngx_http_uwsgi_loc_conf_t *VAR_17;




    if (FUNC_4(VAR_13) != VAR_3) {
        return VAR_1;
    }

    VAR_15 = FUNC_6(VAR_13->pool, sizeof(ngx_http_status_t));
    if (VAR_15 == ((void*)0)) {
        return VAR_1;
    }

    FUNC_3(VAR_13, VAR_15, VAR_10);

    VAR_17 = FUNC_0(VAR_13, VAR_10);

    VAR_16 = VAR_13->upstream;

    if (VAR_17->uwsgi_lengths == ((void*)0)) {
        FUNC_7(&VAR_16->schema, "uwsgi://");


    } else {
        if (FUNC_5(VAR_13, VAR_17) != VAR_3) {
            return VAR_1;
        }
    }

    VAR_16->output.tag = (ngx_buf_tag_t) &VAR_10;

    VAR_16->conf = &VAR_17->upstream;
    VAR_16->create_request = VAR_8;
    VAR_16->reinit_request = VAR_12;
    VAR_16->process_header = VAR_11;
    VAR_16->abort_request = VAR_6;
    VAR_16->finalize_request = VAR_9;
    VAR_13->state = 0;

    VAR_16->buffering = VAR_17->upstream.buffering;

    VAR_16->pipe = FUNC_6(VAR_13->pool, sizeof(ngx_event_pipe_t));
    if (VAR_16->pipe == ((void*)0)) {
        return VAR_1;
    }

    VAR_16->pipe->input_filter = VAR_4;
    VAR_16->pipe->input_ctx = VAR_13;

    if (!VAR_17->upstream.request_buffering
        && VAR_17->upstream.pass_request_body
        && !VAR_13->headers_in.chunked)
    {
        VAR_13->request_body_no_buffering = 1;
    }

    VAR_14 = FUNC_2(VAR_13, VAR_5);

    if (VAR_14 >= VAR_2) {
        return VAR_14;
    }

    return VAR_0;
}
