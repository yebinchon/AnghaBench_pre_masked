
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_29__ TYPE_8__ ;
typedef struct TYPE_28__ TYPE_7__ ;
typedef struct TYPE_27__ TYPE_6__ ;
typedef struct TYPE_26__ TYPE_5__ ;
typedef struct TYPE_25__ TYPE_4__ ;
typedef struct TYPE_24__ TYPE_3__ ;
typedef struct TYPE_23__ TYPE_2__ ;
typedef struct TYPE_22__ TYPE_1__ ;


struct TYPE_24__ {scalar_t__ data; int handler; } ;
typedef TYPE_3__ ngx_pool_cleanup_t ;
typedef scalar_t__ ngx_int_t ;
struct TYPE_25__ {int last_modified; } ;
typedef TYPE_4__ ngx_http_xslt_filter_loc_conf_t ;
struct TYPE_26__ {int done; } ;
typedef TYPE_5__ ngx_http_xslt_filter_ctx_t ;
struct TYPE_23__ {TYPE_1__* content_length; scalar_t__ content_length_n; } ;
struct TYPE_27__ {scalar_t__ header_only; TYPE_2__ headers_out; struct TYPE_27__* main; int pool; } ;
typedef TYPE_6__ ngx_http_request_t ;
struct TYPE_28__ {int * next; TYPE_8__* buf; } ;
typedef TYPE_7__ ngx_chain_t ;
struct TYPE_29__ {scalar_t__ pos; scalar_t__ last; } ;
typedef TYPE_8__ ngx_buf_t ;
struct TYPE_22__ {scalar_t__ hash; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (TYPE_6__*) ;
 int FUNC_2 (TYPE_6__*) ;
 scalar_t__ FUNC_3 (TYPE_6__*,int *,int ) ;
 TYPE_4__* FUNC_4 (TYPE_6__*,int ) ;
 scalar_t__ FUNC_5 (TYPE_6__*,TYPE_7__*) ;
 scalar_t__ FUNC_6 (TYPE_6__*) ;
 int FUNC_7 (TYPE_6__*) ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_3__* FUNC_8 (int ,int ) ;

__attribute__((used)) static ngx_int_t
FUNC_9(ngx_http_request_t *VAR_5, ngx_http_xslt_filter_ctx_t *VAR_6,
    ngx_buf_t *VAR_7)
{
    ngx_int_t VAR_8;
    ngx_chain_t VAR_9;
    ngx_pool_cleanup_t *VAR_10;
    ngx_http_xslt_filter_loc_conf_t *VAR_11;

    VAR_6->done = 1;

    if (VAR_7 == ((void*)0)) {
        return FUNC_3(VAR_5, &VAR_4,
                                               VAR_1);
    }

    VAR_10 = FUNC_8(VAR_5->pool, 0);

    if (VAR_10 == ((void*)0)) {
        FUNC_0(VAR_7->pos);
        return FUNC_3(VAR_5, &VAR_4,
                                               VAR_1);
    }

    if (VAR_5 == VAR_5->main) {
        VAR_5->headers_out.content_length_n = VAR_7->last - VAR_7->pos;

        if (VAR_5->headers_out.content_length) {
            VAR_5->headers_out.content_length->hash = 0;
            VAR_5->headers_out.content_length = ((void*)0);
        }

        VAR_11 = FUNC_4(VAR_5, VAR_4);

        if (!VAR_11->last_modified) {
            FUNC_2(VAR_5);
            FUNC_1(VAR_5);

        } else {
            FUNC_7(VAR_5);
        }
    }

    VAR_8 = FUNC_6(VAR_5);

    if (VAR_8 == VAR_0 || VAR_8 > VAR_2 || VAR_5->header_only) {
        FUNC_0(VAR_7->pos);
        return VAR_8;
    }

    VAR_10->handler = VAR_3;
    VAR_10->data = VAR_7->pos;

    VAR_9.buf = VAR_7;
    VAR_9.next = ((void*)0);

    return FUNC_5(VAR_5, &VAR_9);
}
