
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_7__ ;
typedef struct TYPE_19__ TYPE_6__ ;
typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


typedef scalar_t__ ngx_int_t ;
struct TYPE_20__ {size_t len; int * data; } ;
struct TYPE_16__ {scalar_t__ status_n; TYPE_7__ status_line; } ;
struct TYPE_17__ {scalar_t__ (* process_header ) (TYPE_6__*) ;TYPE_3__ headers_in; TYPE_1__* state; int buffer; } ;
typedef TYPE_4__ ngx_http_upstream_t ;
struct TYPE_18__ {scalar_t__ code; size_t end; size_t start; } ;
typedef TYPE_5__ ngx_http_status_t ;
struct TYPE_19__ {TYPE_2__* connection; int pool; TYPE_4__* upstream; } ;
typedef TYPE_6__ ngx_http_request_t ;
struct TYPE_15__ {int log; } ;
struct TYPE_14__ {scalar_t__ status; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 TYPE_5__* FUNC_0 (TYPE_6__*,int ) ;
 scalar_t__ FUNC_1 (TYPE_6__*,int *,TYPE_5__*) ;
 int VAR_3 ;
 scalar_t__ FUNC_2 (TYPE_6__*) ;
 int FUNC_3 (int ,int ,int ,char*,scalar_t__,TYPE_7__*) ;
 int FUNC_4 (int *,size_t,size_t) ;
 int * FUNC_5 (int ,size_t) ;

__attribute__((used)) static ngx_int_t
FUNC_6(ngx_http_request_t *VAR_4)
{
    size_t VAR_5;
    ngx_int_t VAR_6;
    ngx_http_status_t *VAR_7;
    ngx_http_upstream_t *VAR_8;

    VAR_7 = FUNC_0(VAR_4, VAR_3);

    if (VAR_7 == ((void*)0)) {
        return VAR_1;
    }

    VAR_8 = VAR_4->upstream;

    VAR_6 = FUNC_1(VAR_4, &VAR_8->buffer, VAR_7);

    if (VAR_6 == VAR_0) {
        return VAR_6;
    }

    if (VAR_6 == VAR_1) {
        VAR_8->process_header = FUNC_2;
        return FUNC_2(VAR_4);
    }

    if (VAR_8->state && VAR_8->state->status == 0) {
        VAR_8->state->status = VAR_7->code;
    }

    VAR_8->headers_in.status_n = VAR_7->code;

    VAR_5 = VAR_7->end - VAR_7->start;
    VAR_8->headers_in.status_line.len = VAR_5;

    VAR_8->headers_in.status_line.data = FUNC_5(VAR_4->pool, VAR_5);
    if (VAR_8->headers_in.status_line.data == ((void*)0)) {
        return VAR_1;
    }

    FUNC_4(VAR_8->headers_in.status_line.data, VAR_7->start, VAR_5);

    FUNC_3(VAR_2, VAR_4->connection->log, 0,
                   "http scgi status %ui \"%V\"",
                   VAR_8->headers_in.status_n, &VAR_8->headers_in.status_line);

    VAR_8->process_header = FUNC_2;

    return FUNC_2(VAR_4);
}
