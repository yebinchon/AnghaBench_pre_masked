
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_6__ ;
typedef struct TYPE_19__ TYPE_5__ ;
typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


typedef scalar_t__ ngx_int_t ;
struct TYPE_15__ {scalar_t__ tag; } ;
struct TYPE_17__ {int ssl; TYPE_6__* input_filter_ctx; int input_filter; int input_filter_init; int finalize_request; int abort_request; int process_header; int reinit_request; int create_request; TYPE_2__* conf; TYPE_1__ output; int schema; } ;
typedef TYPE_3__ ngx_http_upstream_t ;
struct TYPE_18__ {int request_body_no_buffering; int pool; TYPE_3__* upstream; } ;
typedef TYPE_4__ ngx_http_request_t ;
struct TYPE_16__ {int * ssl; } ;
struct TYPE_19__ {TYPE_2__ upstream; } ;
typedef TYPE_5__ ngx_http_grpc_loc_conf_t ;
struct TYPE_20__ {TYPE_4__* request; } ;
typedef TYPE_6__ ngx_http_grpc_ctx_t ;
typedef scalar_t__ ngx_buf_tag_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 TYPE_5__* FUNC_0 (TYPE_4__*,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ FUNC_1 (TYPE_4__*,int ) ;
 int FUNC_2 (TYPE_4__*,TYPE_6__*,int ) ;
 scalar_t__ FUNC_3 (TYPE_4__*) ;
 int VAR_12 ;
 TYPE_6__* FUNC_4 (int ,int) ;
 int FUNC_5 (int *,char*) ;

__attribute__((used)) static ngx_int_t
FUNC_6(ngx_http_request_t *VAR_13)
{
    ngx_int_t VAR_14;
    ngx_http_upstream_t *VAR_15;
    ngx_http_grpc_ctx_t *VAR_16;
    ngx_http_grpc_loc_conf_t *VAR_17;

    if (FUNC_3(VAR_13) != VAR_3) {
        return VAR_1;
    }

    VAR_17 = FUNC_0(VAR_13, VAR_9);

    VAR_15 = VAR_13->upstream;
    FUNC_5(&VAR_15->schema, "grpc://");


    VAR_15->output.tag = (ngx_buf_tag_t) &VAR_9;

    VAR_15->conf = &VAR_17->upstream;

    VAR_15->create_request = VAR_5;
    VAR_15->reinit_request = VAR_11;
    VAR_15->process_header = VAR_10;
    VAR_15->abort_request = VAR_4;
    VAR_15->finalize_request = VAR_8;

    VAR_16 = FUNC_4(VAR_13->pool, sizeof(ngx_http_grpc_ctx_t));
    if (VAR_16 == ((void*)0)) {
        return VAR_1;
    }

    VAR_16->request = VAR_13;

    FUNC_2(VAR_13, VAR_16, VAR_9);

    VAR_15->input_filter_init = VAR_7;
    VAR_15->input_filter = VAR_6;
    VAR_15->input_filter_ctx = VAR_16;

    VAR_13->request_body_no_buffering = 1;

    VAR_14 = FUNC_1(VAR_13, VAR_12);

    if (VAR_14 >= VAR_2) {
        return VAR_14;
    }

    return VAR_0;
}
