
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


typedef int u_char ;
struct TYPE_22__ {int len; } ;
typedef TYPE_4__ ngx_str_t ;
struct TYPE_19__ {int len; int data; } ;
struct TYPE_23__ {int count; int filter; TYPE_1__ method; } ;
typedef TYPE_5__ ngx_rtmp_control_ctx_t ;
typedef int ngx_int_t ;
struct TYPE_21__ {size_t content_length_n; int status; } ;
struct TYPE_24__ {int pool; TYPE_3__ headers_out; TYPE_2__* connection; } ;
typedef TYPE_6__ ngx_http_request_t ;
struct TYPE_25__ {TYPE_8__* buf; } ;
typedef TYPE_7__ ngx_chain_t ;
struct TYPE_26__ {int temporary; int last_buf; int * last; int * end; int * pos; int * start; } ;
typedef TYPE_8__ ngx_buf_t ;
typedef int cl ;
struct TYPE_20__ {int pool; } ;


 char const* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 TYPE_8__* FUNC_0 (int ) ;
 TYPE_5__* FUNC_1 (TYPE_6__*,int ) ;
 int FUNC_2 (TYPE_6__*,TYPE_7__*) ;
 int FUNC_3 (TYPE_6__*) ;
 scalar_t__ FUNC_4 (int ,char*,int) ;
 int FUNC_5 (TYPE_7__*,int) ;
 int * FUNC_6 (int ,size_t) ;
 int VAR_8 ;
 int VAR_9 ;
 char* FUNC_7 (TYPE_6__*,int ) ;
 int * FUNC_8 (int *,size_t,char*,int ) ;

__attribute__((used)) static ngx_int_t
FUNC_9(ngx_http_request_t *VAR_10, ngx_str_t *VAR_11)
{
    size_t VAR_12;
    u_char *VAR_13;
    ngx_buf_t *VAR_14;
    ngx_chain_t VAR_15;
    const char *VAR_16;
    ngx_rtmp_control_ctx_t *VAR_17;

    VAR_17 = FUNC_1(VAR_10, VAR_9);

    if (VAR_17->method.len == sizeof("publisher") - 1 &&
        FUNC_4(VAR_17->method.data, "publisher", VAR_17->method.len) == 0)
    {
        VAR_17->filter = VAR_6;

    } else if (VAR_17->method.len == sizeof("subscriber") - 1 &&
               FUNC_4(VAR_17->method.data, "subscriber", VAR_17->method.len)
               == 0)
    {
        VAR_17->filter = VAR_7;

    } else if (VAR_11->len == sizeof("client") - 1 &&
               FUNC_4(VAR_17->method.data, "client", VAR_17->method.len) == 0)
    {
        VAR_17->filter = VAR_5;

    } else {
        VAR_16 = "Undefined filter";
        goto error;
    }

    VAR_16 = FUNC_7(VAR_10, VAR_8);
    if (VAR_16 != VAR_0) {
        goto error;
    }



    VAR_12 = VAR_4;

    VAR_13 = FUNC_6(VAR_10->connection->pool, VAR_12);
    if (VAR_13 == ((void*)0)) {
        return VAR_1;
    }

    VAR_12 = (size_t) (FUNC_8(VAR_13, VAR_12, "%ui", VAR_17->count) - VAR_13);

    VAR_10->headers_out.status = VAR_3;
    VAR_10->headers_out.content_length_n = VAR_12;

    VAR_14 = FUNC_0(VAR_10->pool);
    if (VAR_14 == ((void*)0)) {
        goto error;
    }

    VAR_14->start = VAR_14->pos = VAR_13;
    VAR_14->end = VAR_14->last = VAR_13 + VAR_12;
    VAR_14->temporary = 1;
    VAR_14->last_buf = 1;

    FUNC_5(&VAR_15, sizeof(VAR_15));
    VAR_15.buf = VAR_14;

    FUNC_3(VAR_10);

    return FUNC_2(VAR_10, &VAR_15);

error:
    return VAR_2;
}
