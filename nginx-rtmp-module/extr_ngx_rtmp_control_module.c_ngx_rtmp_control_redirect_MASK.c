
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_23__ TYPE_7__ ;
typedef struct TYPE_22__ TYPE_6__ ;
typedef struct TYPE_21__ TYPE_5__ ;
typedef struct TYPE_20__ TYPE_4__ ;
typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;


typedef int u_char ;
typedef int ngx_str_t ;
struct TYPE_17__ {int len; int data; } ;
struct TYPE_20__ {int count; int filter; TYPE_1__ method; } ;
typedef TYPE_4__ ngx_rtmp_control_ctx_t ;
typedef int ngx_int_t ;
struct TYPE_19__ {size_t content_length_n; int status; } ;
struct TYPE_21__ {int pool; TYPE_3__ headers_out; TYPE_2__* connection; } ;
typedef TYPE_5__ ngx_http_request_t ;
struct TYPE_22__ {TYPE_7__* buf; } ;
typedef TYPE_6__ ngx_chain_t ;
struct TYPE_23__ {int temporary; int last_buf; int * last; int * end; int * pos; int * start; } ;
typedef TYPE_7__ ngx_buf_t ;
typedef int cl ;
struct TYPE_18__ {int pool; } ;


 char const* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 TYPE_7__* FUNC_0 (int ) ;
 TYPE_4__* FUNC_1 (TYPE_5__*,int ) ;
 int FUNC_2 (TYPE_5__*,TYPE_6__*) ;
 int FUNC_3 (TYPE_5__*) ;
 scalar_t__ FUNC_4 (int ,char*,int) ;
 int FUNC_5 (TYPE_6__*,int) ;
 int * FUNC_6 (int ,size_t) ;
 int VAR_7 ;
 int VAR_8 ;
 char* FUNC_7 (TYPE_5__*,int ) ;
 int * FUNC_8 (int *,size_t,char*,int ) ;

__attribute__((used)) static ngx_int_t
FUNC_9(ngx_http_request_t *VAR_9, ngx_str_t *VAR_10)
{
    size_t VAR_11;
    u_char *VAR_12;
    ngx_buf_t *VAR_13;
    ngx_chain_t VAR_14;
    const char *VAR_15;
    ngx_rtmp_control_ctx_t *VAR_16;

    VAR_16 = FUNC_1(VAR_9, VAR_7);

    if (VAR_16->method.len == sizeof("publisher") - 1 &&
        FUNC_4(VAR_16->method.data, "publisher", VAR_16->method.len) == 0)
    {
        VAR_16->filter = VAR_5;

    } else if (VAR_16->method.len == sizeof("subscriber") - 1 &&
               FUNC_4(VAR_16->method.data, "subscriber", VAR_16->method.len)
               == 0)
    {
        VAR_16->filter = VAR_6;

    } else if (VAR_16->method.len == sizeof("client") - 1 &&
               FUNC_4(VAR_16->method.data, "client", VAR_16->method.len) == 0)
    {
        VAR_16->filter = VAR_4;

    } else {
        VAR_15 = "Undefined filter";
        goto error;
    }

    VAR_15 = FUNC_7(VAR_9, VAR_8);
    if (VAR_15 != VAR_0) {
        goto error;
    }



    VAR_11 = VAR_3;

    VAR_12 = FUNC_6(VAR_9->connection->pool, VAR_11);
    if (VAR_12 == ((void*)0)) {
        goto error;
    }

    VAR_11 = (size_t) (FUNC_8(VAR_12, VAR_11, "%ui", VAR_16->count) - VAR_12);

    VAR_9->headers_out.status = VAR_2;
    VAR_9->headers_out.content_length_n = VAR_11;

    VAR_13 = FUNC_0(VAR_9->pool);
    if (VAR_13 == ((void*)0)) {
        goto error;
    }

    VAR_13->start = VAR_13->pos = VAR_12;
    VAR_13->end = VAR_13->last = VAR_12 + VAR_11;
    VAR_13->temporary = 1;
    VAR_13->last_buf = 1;

    FUNC_5(&VAR_14, sizeof(VAR_14));
    VAR_14.buf = VAR_13;

    FUNC_3(VAR_9);

    return FUNC_2(VAR_9, &VAR_14);

error:
    return VAR_1;
}
