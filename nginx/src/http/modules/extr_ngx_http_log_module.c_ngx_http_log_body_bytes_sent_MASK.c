
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u_char ;
typedef scalar_t__ off_t ;
struct TYPE_5__ {scalar_t__ header_size; TYPE_1__* connection; } ;
typedef TYPE_2__ ngx_http_request_t ;
typedef int ngx_http_log_op_t ;
struct TYPE_4__ {scalar_t__ sent; } ;


 int * FUNC_0 (int *,char*,scalar_t__) ;

__attribute__((used)) static u_char *
FUNC_1(ngx_http_request_t *VAR_0, u_char *VAR_1,
    ngx_http_log_op_t *VAR_2)
{
    off_t VAR_3;

    VAR_3 = VAR_0->connection->sent - VAR_0->header_size;

    if (VAR_3 > 0) {
        return FUNC_0(VAR_1, "%O", VAR_3);
    }

    *VAR_1 = '0';

    return VAR_1 + 1;
}
