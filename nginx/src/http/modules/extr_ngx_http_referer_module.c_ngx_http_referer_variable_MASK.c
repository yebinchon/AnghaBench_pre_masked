
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_24__ TYPE_8__ ;
typedef struct TYPE_23__ TYPE_7__ ;
typedef struct TYPE_22__ TYPE_6__ ;
typedef struct TYPE_21__ TYPE_5__ ;
typedef struct TYPE_20__ TYPE_4__ ;
typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;
typedef struct TYPE_16__ TYPE_14__ ;


typedef char u_char ;
typedef int ngx_uint_t ;
struct TYPE_22__ {int len; char* data; } ;
typedef TYPE_6__ ngx_str_t ;
typedef scalar_t__ ngx_int_t ;
typedef int ngx_http_variable_value_t ;
struct TYPE_20__ {TYPE_3__* referer; } ;
struct TYPE_23__ {TYPE_5__* connection; TYPE_4__ headers_in; } ;
typedef TYPE_7__ ngx_http_request_t ;
struct TYPE_17__ {int * buckets; } ;
struct TYPE_16__ {int * wc_tail; int * wc_head; TYPE_1__ hash; } ;
struct TYPE_24__ {int * regex; int * server_name_regex; TYPE_14__ hash; scalar_t__ blocked_referer; scalar_t__ no_referer; } ;
typedef TYPE_8__ ngx_http_referer_conf_t ;
struct TYPE_21__ {int log; } ;
struct TYPE_18__ {size_t len; char* data; } ;
struct TYPE_19__ {TYPE_2__ value; } ;


 scalar_t__ VAR_0 ;
 TYPE_6__* VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int,char) ;
 TYPE_6__* FUNC_1 (TYPE_14__*,int,char*,int) ;
 TYPE_8__* FUNC_2 (TYPE_7__*,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_3 (int *,TYPE_6__*,int ) ;
 scalar_t__ FUNC_4 (char*,char*,int) ;
 scalar_t__ FUNC_5 (char*,char*,size_t) ;
 char FUNC_6 (char) ;

__attribute__((used)) static ngx_int_t
FUNC_7(ngx_http_request_t *VAR_6, ngx_http_variable_value_t *VAR_7,
    uintptr_t VAR_8)
{
    u_char *VAR_9, *VAR_10, *VAR_11;
    size_t VAR_12;
    ngx_str_t *VAR_13;
    ngx_uint_t VAR_14, VAR_15;
    ngx_http_referer_conf_t *VAR_16;
    u_char VAR_17[256];





    VAR_16 = FUNC_2(VAR_6, VAR_3);

    if (VAR_16->hash.hash.buckets == ((void*)0)
        && VAR_16->hash.wc_head == ((void*)0)
        && VAR_16->hash.wc_tail == ((void*)0)




       )
    {
        goto valid;
    }

    if (VAR_6->headers_in.referer == ((void*)0)) {
        if (VAR_16->no_referer) {
            goto valid;
        }

        goto invalid;
    }

    VAR_12 = VAR_6->headers_in.referer->value.len;
    VAR_10 = VAR_6->headers_in.referer->value.data;

    if (VAR_12 >= sizeof("http://i.ru") - 1) {
        VAR_11 = VAR_10 + VAR_12;

        if (FUNC_4(VAR_10, (u_char *) "http://", 7) == 0) {
            VAR_10 += 7;
            VAR_12 -= 7;
            goto valid_scheme;

        } else if (FUNC_4(VAR_10, (u_char *) "https://", 8) == 0) {
            VAR_10 += 8;
            VAR_12 -= 8;
            goto valid_scheme;
        }
    }

    if (VAR_16->blocked_referer) {
        goto valid;
    }

    goto invalid;

valid_scheme:

    VAR_14 = 0;
    VAR_15 = 0;

    for (VAR_9 = VAR_10; VAR_9 < VAR_11; VAR_9++) {
        if (*VAR_9 == '/' || *VAR_9 == ':') {
            break;
        }

        if (VAR_14 == 256) {
            goto invalid;
        }

        VAR_17[VAR_14] = FUNC_6(*VAR_9);
        VAR_15 = FUNC_0(VAR_15, VAR_17[VAR_14++]);
    }

    VAR_13 = FUNC_1(&VAR_16->hash, VAR_15, VAR_17, VAR_9 - VAR_10);

    if (VAR_13) {
        goto uri;
    }
invalid:

    *VAR_7 = VAR_5;

    return VAR_2;

uri:

    for ( ; VAR_9 < VAR_11; VAR_9++) {
        if (*VAR_9 == '/') {
            break;
        }
    }

    VAR_12 = VAR_11 - VAR_9;

    if (VAR_13 == VAR_1) {
        goto valid;
    }

    if (VAR_12 < VAR_13->len || FUNC_5(VAR_13->data, VAR_9, VAR_13->len) != 0) {
        goto invalid;
    }

valid:

    *VAR_7 = VAR_4;

    return VAR_2;
}
