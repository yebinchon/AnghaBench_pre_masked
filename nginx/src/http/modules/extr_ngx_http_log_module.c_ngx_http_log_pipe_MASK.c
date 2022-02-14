
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef char u_char ;
struct TYPE_3__ {scalar_t__ pipeline; } ;
typedef TYPE_1__ ngx_http_request_t ;
typedef int ngx_http_log_op_t ;



__attribute__((used)) static u_char *
FUNC_0(ngx_http_request_t *VAR_0, u_char *VAR_1, ngx_http_log_op_t *VAR_2)
{
    if (VAR_0->pipeline) {
        *VAR_1 = 'p';
    } else {
        *VAR_1 = '.';
    }

    return VAR_1 + 1;
}
