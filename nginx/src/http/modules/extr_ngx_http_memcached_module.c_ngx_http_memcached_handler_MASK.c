
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_6__ ;
typedef struct TYPE_21__ TYPE_5__ ;
typedef struct TYPE_20__ TYPE_4__ ;
typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;


typedef scalar_t__ ngx_int_t ;
struct TYPE_17__ {scalar_t__ tag; } ;
struct TYPE_19__ {TYPE_6__* input_filter_ctx; int input_filter; int input_filter_init; int finalize_request; int abort_request; int process_header; int reinit_request; int create_request; int * conf; TYPE_1__ output; int schema; } ;
typedef TYPE_3__ ngx_http_upstream_t ;
struct TYPE_20__ {int method; TYPE_2__* main; int pool; TYPE_3__* upstream; } ;
typedef TYPE_4__ ngx_http_request_t ;
struct TYPE_21__ {int upstream; } ;
typedef TYPE_5__ ngx_http_memcached_loc_conf_t ;
struct TYPE_22__ {TYPE_4__* request; } ;
typedef TYPE_6__ ngx_http_memcached_ctx_t ;
typedef scalar_t__ ngx_buf_tag_t ;
struct TYPE_18__ {int count; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_0 (TYPE_4__*) ;
 TYPE_5__* FUNC_1 (TYPE_4__*,int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 scalar_t__ FUNC_2 (TYPE_4__*) ;
 int FUNC_3 (TYPE_4__*,TYPE_6__*,int ) ;
 scalar_t__ FUNC_4 (TYPE_4__*) ;
 int FUNC_5 (TYPE_4__*) ;
 TYPE_6__* FUNC_6 (int ,int) ;
 int FUNC_7 (int *,char*) ;

__attribute__((used)) static ngx_int_t
FUNC_8(ngx_http_request_t *VAR_14)
{
    ngx_int_t VAR_15;
    ngx_http_upstream_t *VAR_16;
    ngx_http_memcached_ctx_t *VAR_17;
    ngx_http_memcached_loc_conf_t *VAR_18;

    if (!(VAR_14->method & (VAR_1|VAR_2))) {
        return VAR_4;
    }

    VAR_15 = FUNC_0(VAR_14);

    if (VAR_15 != VAR_5) {
        return VAR_15;
    }

    if (FUNC_2(VAR_14) != VAR_5) {
        return VAR_3;
    }

    if (FUNC_4(VAR_14) != VAR_5) {
        return VAR_3;
    }

    VAR_16 = VAR_14->upstream;

    FUNC_7(&VAR_16->schema, "memcached://");
    VAR_16->output.tag = (ngx_buf_tag_t) &VAR_11;

    VAR_18 = FUNC_1(VAR_14, VAR_11);

    VAR_16->conf = &VAR_18->upstream;

    VAR_16->create_request = VAR_7;
    VAR_16->reinit_request = VAR_13;
    VAR_16->process_header = VAR_12;
    VAR_16->abort_request = VAR_6;
    VAR_16->finalize_request = VAR_10;

    VAR_17 = FUNC_6(VAR_14->pool, sizeof(ngx_http_memcached_ctx_t));
    if (VAR_17 == ((void*)0)) {
        return VAR_3;
    }

    VAR_17->request = VAR_14;

    FUNC_3(VAR_14, VAR_17, VAR_11);

    VAR_16->input_filter_init = VAR_9;
    VAR_16->input_filter = VAR_8;
    VAR_16->input_filter_ctx = VAR_17;

    VAR_14->main->count++;

    FUNC_5(VAR_14);

    return VAR_0;
}
