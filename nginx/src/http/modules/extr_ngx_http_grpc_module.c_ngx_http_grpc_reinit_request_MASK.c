
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int ngx_int_t ;
typedef int ngx_http_request_t ;
struct TYPE_3__ {int * connection; scalar_t__ status; scalar_t__ done; scalar_t__ end_stream; scalar_t__ parsing_headers; scalar_t__ output_blocked; scalar_t__ output_closed; scalar_t__ header_sent; scalar_t__ state; } ;
typedef TYPE_1__ ngx_http_grpc_ctx_t ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (int *,int ) ;
 int VAR_1 ;

__attribute__((used)) static ngx_int_t
FUNC_1(ngx_http_request_t *VAR_2)
{
    ngx_http_grpc_ctx_t *VAR_3;

    VAR_3 = FUNC_0(VAR_2, VAR_1);

    if (VAR_3 == ((void*)0)) {
        return VAR_0;
    }

    VAR_3->state = 0;
    VAR_3->header_sent = 0;
    VAR_3->output_closed = 0;
    VAR_3->output_blocked = 0;
    VAR_3->parsing_headers = 0;
    VAR_3->end_stream = 0;
    VAR_3->done = 0;
    VAR_3->status = 0;
    VAR_3->connection = ((void*)0);

    return VAR_0;
}
