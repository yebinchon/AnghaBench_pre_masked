
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


typedef int u_char ;
typedef int ngx_int_t ;
struct TYPE_21__ {int len; int data; scalar_t__ not_found; } ;
typedef TYPE_3__ ngx_http_variable_value_t ;
struct TYPE_22__ {TYPE_2__* connection; TYPE_1__* upstream; int pool; } ;
typedef TYPE_4__ ngx_http_request_t ;
struct TYPE_23__ {int index; } ;
typedef TYPE_5__ ngx_http_memcached_loc_conf_t ;
struct TYPE_27__ {int len; int * data; } ;
struct TYPE_24__ {TYPE_9__ key; } ;
typedef TYPE_6__ ngx_http_memcached_ctx_t ;
struct TYPE_25__ {int * next; TYPE_8__* buf; } ;
typedef TYPE_7__ ngx_chain_t ;
struct TYPE_26__ {int * last; } ;
typedef TYPE_8__ ngx_buf_t ;
struct TYPE_20__ {int log; } ;
struct TYPE_19__ {TYPE_7__* request_bufs; } ;
typedef int CRLF ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 TYPE_7__* FUNC_0 (int ) ;
 int * FUNC_1 (int *,int ,int) ;
 TYPE_8__* FUNC_2 (int ,size_t) ;
 int FUNC_3 (int *,int ,int,int ) ;
 TYPE_3__* FUNC_4 (TYPE_4__*,int ) ;
 TYPE_6__* FUNC_5 (TYPE_4__*,int ) ;
 TYPE_5__* FUNC_6 (TYPE_4__*,int ) ;
 int VAR_7 ;
 int FUNC_7 (int ,int ,int ,char*,TYPE_9__*) ;
 int FUNC_8 (int ,int ,int ,char*) ;

__attribute__((used)) static ngx_int_t
FUNC_9(ngx_http_request_t *VAR_8)
{
    size_t VAR_9;
    uintptr_t VAR_10;
    ngx_buf_t *VAR_11;
    ngx_chain_t *VAR_12;
    ngx_http_memcached_ctx_t *VAR_13;
    ngx_http_variable_value_t *VAR_14;
    ngx_http_memcached_loc_conf_t *VAR_15;

    VAR_15 = FUNC_6(VAR_8, VAR_7);

    VAR_14 = FUNC_4(VAR_8, VAR_15->index);

    if (VAR_14 == ((void*)0) || VAR_14->not_found || VAR_14->len == 0) {
        FUNC_8(VAR_5, VAR_8->connection->log, 0,
                      "the \"$memcached_key\" variable is not set");
        return VAR_2;
    }

    VAR_10 = 2 * FUNC_3(((void*)0), VAR_14->data, VAR_14->len, VAR_3);

    VAR_9 = sizeof("get ") - 1 + VAR_14->len + VAR_10 + sizeof(CRLF) - 1;

    VAR_11 = FUNC_2(VAR_8->pool, VAR_9);
    if (VAR_11 == ((void*)0)) {
        return VAR_2;
    }

    VAR_12 = FUNC_0(VAR_8->pool);
    if (VAR_12 == ((void*)0)) {
        return VAR_2;
    }

    VAR_12->buf = VAR_11;
    VAR_12->next = ((void*)0);

    VAR_8->upstream->request_bufs = VAR_12;

    *VAR_11->last++ = 'g'; *VAR_11->last++ = 'e'; *VAR_11->last++ = 't'; *VAR_11->last++ = ' ';

    VAR_13 = FUNC_5(VAR_8, VAR_7);

    VAR_13->key.data = VAR_11->last;

    if (VAR_10 == 0) {
        VAR_11->last = FUNC_1(VAR_11->last, VAR_14->data, VAR_14->len);

    } else {
        VAR_11->last = (u_char *) FUNC_3(VAR_11->last, VAR_14->data, VAR_14->len,
                                            VAR_3);
    }

    VAR_13->key.len = VAR_11->last - VAR_13->key.data;

    FUNC_7(VAR_4, VAR_8->connection->log, 0,
                   "http memcached request: \"%V\"", &VAR_13->key);

    *VAR_11->last++ = VAR_0; *VAR_11->last++ = VAR_1;

    return VAR_6;
}
