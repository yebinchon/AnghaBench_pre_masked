
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int ngx_int_t ;
struct TYPE_4__ {int length; } ;
typedef TYPE_1__ ngx_http_upstream_t ;
struct TYPE_5__ {TYPE_1__* upstream; } ;
typedef TYPE_2__ ngx_http_request_t ;
struct TYPE_6__ {scalar_t__ end_stream; TYPE_2__* request; } ;
typedef TYPE_3__ ngx_http_grpc_ctx_t ;


 int VAR_0 ;

__attribute__((used)) static ngx_int_t
FUNC_0(void *VAR_1)
{
    ngx_http_grpc_ctx_t *VAR_2 = VAR_1;

    ngx_http_request_t *VAR_3;
    ngx_http_upstream_t *VAR_4;

    VAR_3 = VAR_2->request;
    VAR_4 = VAR_3->upstream;

    VAR_4->length = 1;

    if (VAR_2->end_stream) {
        VAR_4->length = 0;
    }

    return VAR_0;
}
