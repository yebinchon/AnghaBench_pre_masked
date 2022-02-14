
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int ngx_int_t ;
struct TYPE_7__ {int status; } ;
struct TYPE_8__ {TYPE_2__ headers_out; TYPE_1__* connection; } ;
typedef TYPE_3__ ngx_http_request_t ;
struct TYPE_9__ {int done; int status; } ;
typedef TYPE_4__ ngx_http_auth_request_ctx_t ;
struct TYPE_6__ {int log; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ,char*,int ) ;

__attribute__((used)) static ngx_int_t
FUNC_1(ngx_http_request_t *VAR_1, void *VAR_2, ngx_int_t VAR_3)
{
    ngx_http_auth_request_ctx_t *VAR_4 = VAR_2;

    FUNC_0(VAR_0, VAR_1->connection->log, 0,
                   "auth request done s:%ui", VAR_1->headers_out.status);

    VAR_4->done = 1;
    VAR_4->status = VAR_1->headers_out.status;

    return VAR_3;
}
