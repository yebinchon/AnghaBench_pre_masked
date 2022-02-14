
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_7__ ;
typedef struct TYPE_20__ TYPE_6__ ;
typedef struct TYPE_19__ TYPE_5__ ;
typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;
typedef struct TYPE_14__ TYPE_11__ ;


typedef scalar_t__ ngx_int_t ;
struct TYPE_21__ {size_t len; int * data; } ;
struct TYPE_17__ {int connection_close; scalar_t__ status_n; TYPE_7__ status_line; } ;
struct TYPE_18__ {scalar_t__ (* process_header ) (TYPE_5__*) ;TYPE_3__ headers_in; TYPE_1__* state; scalar_t__ accel; int buffer; } ;
typedef TYPE_4__ ngx_http_upstream_t ;
struct TYPE_19__ {TYPE_2__* connection; int pool; void* http_version; scalar_t__ cache; TYPE_4__* upstream; } ;
typedef TYPE_5__ ngx_http_request_t ;
struct TYPE_14__ {scalar_t__ code; size_t end; size_t start; scalar_t__ http_version; } ;
struct TYPE_20__ {TYPE_11__ status; } ;
typedef TYPE_6__ ngx_http_proxy_ctx_t ;
struct TYPE_16__ {int log; } ;
struct TYPE_15__ {scalar_t__ status; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 void* VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 TYPE_6__* FUNC_0 (TYPE_5__*,int ) ;
 scalar_t__ FUNC_1 (TYPE_5__*,int *,TYPE_11__*) ;
 int VAR_9 ;
 scalar_t__ FUNC_2 (TYPE_5__*) ;
 int FUNC_3 (int ,int ,int ,char*,scalar_t__,TYPE_7__*) ;
 int FUNC_4 (int ,int ,int ,char*) ;
 int FUNC_5 (int *,size_t,size_t) ;
 int * FUNC_6 (int ,size_t) ;

__attribute__((used)) static ngx_int_t
FUNC_7(ngx_http_request_t *VAR_10)
{
    size_t VAR_11;
    ngx_int_t VAR_12;
    ngx_http_upstream_t *VAR_13;
    ngx_http_proxy_ctx_t *VAR_14;

    VAR_14 = FUNC_0(VAR_10, VAR_9);

    if (VAR_14 == ((void*)0)) {
        return VAR_1;
    }

    VAR_13 = VAR_10->upstream;

    VAR_12 = FUNC_1(VAR_10, &VAR_13->buffer, &VAR_14->status);

    if (VAR_12 == VAR_0) {
        return VAR_12;
    }

    if (VAR_12 == VAR_1) {
        FUNC_4(VAR_7, VAR_10->connection->log, 0,
                      "upstream sent no valid HTTP/1.0 header");







        VAR_10->http_version = VAR_5;
        VAR_13->state->status = VAR_2;
        VAR_13->headers_in.connection_close = 1;

        return VAR_8;
    }

    if (VAR_13->state && VAR_13->state->status == 0) {
        VAR_13->state->status = VAR_14->status.code;
    }

    VAR_13->headers_in.status_n = VAR_14->status.code;

    VAR_11 = VAR_14->status.end - VAR_14->status.start;
    VAR_13->headers_in.status_line.len = VAR_11;

    VAR_13->headers_in.status_line.data = FUNC_6(VAR_10->pool, VAR_11);
    if (VAR_13->headers_in.status_line.data == ((void*)0)) {
        return VAR_1;
    }

    FUNC_5(VAR_13->headers_in.status_line.data, VAR_14->status.start, VAR_11);

    FUNC_3(VAR_6, VAR_10->connection->log, 0,
                   "http proxy status %ui \"%V\"",
                   VAR_13->headers_in.status_n, &VAR_13->headers_in.status_line);

    if (VAR_14->status.http_version < VAR_4) {
        VAR_13->headers_in.connection_close = 1;
    }

    VAR_13->process_header = FUNC_2;

    return FUNC_2(VAR_10);
}
