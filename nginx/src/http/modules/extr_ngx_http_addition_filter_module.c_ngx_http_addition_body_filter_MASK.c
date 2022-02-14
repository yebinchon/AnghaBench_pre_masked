
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_24__ TYPE_7__ ;
typedef struct TYPE_23__ TYPE_5__ ;
typedef struct TYPE_22__ TYPE_4__ ;
typedef struct TYPE_21__ TYPE_3__ ;
typedef struct TYPE_20__ TYPE_2__ ;
typedef struct TYPE_19__ TYPE_1__ ;


typedef int ngx_uint_t ;
typedef scalar_t__ ngx_int_t ;
struct TYPE_20__ {scalar_t__ header_only; } ;
typedef TYPE_2__ ngx_http_request_t ;
struct TYPE_21__ {int before_body_sent; } ;
typedef TYPE_3__ ngx_http_addition_ctx_t ;
struct TYPE_24__ {scalar_t__ len; } ;
struct TYPE_22__ {TYPE_7__ after_body; TYPE_7__ before_body; } ;
typedef TYPE_4__ ngx_http_addition_conf_t ;
struct TYPE_23__ {TYPE_1__* buf; struct TYPE_23__* next; } ;
typedef TYPE_5__ ngx_chain_t ;
struct TYPE_19__ {int last_in_chain; int sync; scalar_t__ last_buf; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 TYPE_3__* FUNC_0 (TYPE_2__*,int ) ;
 TYPE_4__* FUNC_1 (TYPE_2__*,int ) ;
 scalar_t__ FUNC_2 (TYPE_2__*,TYPE_5__*) ;
 scalar_t__ FUNC_3 (TYPE_2__*,int ) ;
 int FUNC_4 (TYPE_2__*,int *,int ) ;
 scalar_t__ FUNC_5 (TYPE_2__*,TYPE_7__*,int *,TYPE_2__**,int *,int ) ;

__attribute__((used)) static ngx_int_t
FUNC_6(ngx_http_request_t *VAR_4, ngx_chain_t *VAR_5)
{
    ngx_int_t VAR_6;
    ngx_uint_t VAR_7;
    ngx_chain_t *VAR_8;
    ngx_http_request_t *VAR_9;
    ngx_http_addition_ctx_t *VAR_10;
    ngx_http_addition_conf_t *VAR_11;

    if (VAR_5 == ((void*)0) || VAR_4->header_only) {
        return FUNC_2(VAR_4, VAR_5);
    }

    VAR_10 = FUNC_0(VAR_4, VAR_3);

    if (VAR_10 == ((void*)0)) {
        return FUNC_2(VAR_4, VAR_5);
    }

    VAR_11 = FUNC_1(VAR_4, VAR_3);

    if (!VAR_10->before_body_sent) {
        VAR_10->before_body_sent = 1;

        if (VAR_11->before_body.len) {
            if (FUNC_5(VAR_4, &VAR_11->before_body, ((void*)0), &VAR_9, ((void*)0), 0)
                != VAR_2)
            {
                return VAR_0;
            }
        }
    }

    if (VAR_11->after_body.len == 0) {
        FUNC_4(VAR_4, ((void*)0), VAR_3);
        return FUNC_2(VAR_4, VAR_5);
    }

    VAR_7 = 0;

    for (VAR_8 = VAR_5; VAR_8; VAR_8 = VAR_8->next) {
        if (VAR_8->buf->last_buf) {
            VAR_8->buf->last_buf = 0;
            VAR_8->buf->last_in_chain = 1;
            VAR_8->buf->sync = 1;
            VAR_7 = 1;
        }
    }

    VAR_6 = FUNC_2(VAR_4, VAR_5);

    if (VAR_6 == VAR_0 || !VAR_7 || VAR_11->after_body.len == 0) {
        return VAR_6;
    }

    if (FUNC_5(VAR_4, &VAR_11->after_body, ((void*)0), &VAR_9, ((void*)0), 0)
        != VAR_2)
    {
        return VAR_0;
    }

    FUNC_4(VAR_4, ((void*)0), VAR_3);

    return FUNC_3(VAR_4, VAR_1);
}
