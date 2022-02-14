
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u_char ;
struct TYPE_5__ {TYPE_1__* connection; } ;
typedef TYPE_2__ ngx_http_request_t ;
typedef int ngx_http_log_op_t ;
struct TYPE_4__ {int sent; } ;


 int * FUNC_0 (int *,char*,int ) ;

__attribute__((used)) static u_char *
FUNC_1(ngx_http_request_t *VAR_0, u_char *VAR_1,
    ngx_http_log_op_t *VAR_2)
{
    return FUNC_0(VAR_1, "%O", VAR_0->connection->sent);
}
