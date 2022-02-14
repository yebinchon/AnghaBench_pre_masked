
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {int peer; } ;
typedef TYPE_1__ ngx_http_upstream_t ;
struct TYPE_11__ {TYPE_1__* upstream; } ;
typedef TYPE_2__ ngx_http_request_t ;
struct TYPE_12__ {int * connection; } ;
typedef TYPE_3__ ngx_http_grpc_ctx_t ;


 scalar_t__ VAR_0 ;
 TYPE_3__* FUNC_0 (TYPE_2__*,int ) ;
 scalar_t__ FUNC_1 (TYPE_2__*,TYPE_3__*,int *) ;
 int VAR_1 ;

__attribute__((used)) static ngx_http_grpc_ctx_t *
FUNC_2(ngx_http_request_t *VAR_2)
{
    ngx_http_grpc_ctx_t *VAR_3;
    ngx_http_upstream_t *VAR_4;

    VAR_3 = FUNC_0(VAR_2, VAR_1);

    if (VAR_3->connection == ((void*)0)) {
        VAR_4 = VAR_2->upstream;

        if (FUNC_1(VAR_2, VAR_3, &VAR_4->peer) != VAR_0) {
            return ((void*)0);
        }
    }

    return VAR_3;
}
