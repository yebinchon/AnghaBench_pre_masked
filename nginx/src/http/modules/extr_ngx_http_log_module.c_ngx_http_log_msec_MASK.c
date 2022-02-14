
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u_char ;
struct TYPE_3__ {int msec; int sec; } ;
typedef TYPE_1__ ngx_time_t ;
typedef int ngx_http_request_t ;
typedef int ngx_http_log_op_t ;


 int * FUNC_0 (int *,char*,int ,int ) ;
 TYPE_1__* FUNC_1 () ;

__attribute__((used)) static u_char *
FUNC_2(ngx_http_request_t *VAR_0, u_char *VAR_1, ngx_http_log_op_t *VAR_2)
{
    ngx_time_t *VAR_3;

    VAR_3 = FUNC_1();

    return FUNC_0(VAR_1, "%T.%03M", VAR_3->sec, VAR_3->msec);
}
