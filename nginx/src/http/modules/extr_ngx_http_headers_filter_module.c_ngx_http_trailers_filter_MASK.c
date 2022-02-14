
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_27__ TYPE_9__ ;
typedef struct TYPE_26__ TYPE_8__ ;
typedef struct TYPE_25__ TYPE_7__ ;
typedef struct TYPE_24__ TYPE_6__ ;
typedef struct TYPE_23__ TYPE_5__ ;
typedef struct TYPE_22__ TYPE_4__ ;
typedef struct TYPE_21__ TYPE_3__ ;
typedef struct TYPE_20__ TYPE_2__ ;
typedef struct TYPE_19__ TYPE_1__ ;


typedef size_t ngx_uint_t ;
struct TYPE_23__ {scalar_t__ len; } ;
struct TYPE_22__ {int hash; TYPE_5__ value; int key; } ;
typedef TYPE_4__ ngx_table_elt_t ;
typedef TYPE_5__ ngx_str_t ;
typedef int ngx_int_t ;
struct TYPE_21__ {int status; int trailers; } ;
struct TYPE_24__ {TYPE_3__ headers_out; scalar_t__ header_only; int expect_trailers; } ;
typedef TYPE_6__ ngx_http_request_t ;
struct TYPE_25__ {TYPE_2__* trailers; } ;
typedef TYPE_7__ ngx_http_headers_conf_t ;
struct TYPE_26__ {int key; int value; int always; } ;
typedef TYPE_8__ ngx_http_header_val_t ;
struct TYPE_27__ {TYPE_1__* buf; struct TYPE_27__* next; } ;
typedef TYPE_9__ ngx_chain_t ;
struct TYPE_20__ {size_t nelts; TYPE_8__* elts; } ;
struct TYPE_19__ {scalar_t__ last_buf; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (TYPE_6__*,int *,TYPE_5__*) ;
 TYPE_7__* FUNC_1 (TYPE_6__*,int ) ;
 int VAR_2 ;
 int FUNC_2 (TYPE_6__*,TYPE_9__*) ;
 TYPE_4__* FUNC_3 (int *) ;

__attribute__((used)) static ngx_int_t
FUNC_4(ngx_http_request_t *VAR_3, ngx_chain_t *VAR_4)
{
    ngx_str_t VAR_5;
    ngx_uint_t VAR_6, VAR_7;
    ngx_chain_t *VAR_8;
    ngx_table_elt_t *VAR_9;
    ngx_http_header_val_t *VAR_10;
    ngx_http_headers_conf_t *VAR_11;

    VAR_11 = FUNC_1(VAR_3, VAR_2);

    if (VAR_4 == ((void*)0)
        || VAR_11->trailers == ((void*)0)
        || !VAR_3->expect_trailers
        || VAR_3->header_only)
    {
        return FUNC_2(VAR_3, VAR_4);
    }

    for (VAR_8 = VAR_4; VAR_8; VAR_8 = VAR_8->next) {
        if (VAR_8->buf->last_buf) {
            break;
        }
    }

    if (VAR_8 == ((void*)0)) {
        return FUNC_2(VAR_3, VAR_4);
    }

    switch (VAR_3->headers_out.status) {

    case 132:
    case 137:
    case 133:
    case 131:
    case 136:
    case 135:
    case 129:
    case 134:
    case 128:
    case 130:
        VAR_7 = 1;
        break;

    default:
        VAR_7 = 0;
        break;
    }

    VAR_10 = VAR_11->trailers->elts;
    for (VAR_6 = 0; VAR_6 < VAR_11->trailers->nelts; VAR_6++) {

        if (!VAR_7 && !VAR_10[VAR_6].always) {
            continue;
        }

        if (FUNC_0(VAR_3, &VAR_10[VAR_6].value, &VAR_5) != VAR_1) {
            return VAR_0;
        }

        if (VAR_5.len) {
            VAR_9 = FUNC_3(&VAR_3->headers_out.trailers);
            if (VAR_9 == ((void*)0)) {
                return VAR_0;
            }

            VAR_9->key = VAR_10[VAR_6].key;
            VAR_9->value = VAR_5;
            VAR_9->hash = 1;
        }
    }

    return FUNC_2(VAR_3, VAR_4);
}
