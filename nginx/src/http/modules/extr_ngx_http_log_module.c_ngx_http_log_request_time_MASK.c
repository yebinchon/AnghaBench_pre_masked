
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u_char ;
typedef int time_t ;
struct TYPE_5__ {int sec; scalar_t__ msec; } ;
typedef TYPE_1__ ngx_time_t ;
typedef int ngx_msec_int_t ;
struct TYPE_6__ {int start_sec; scalar_t__ start_msec; } ;
typedef TYPE_2__ ngx_http_request_t ;
typedef int ngx_http_log_op_t ;


 int FUNC_0 (int,int ) ;
 int * FUNC_1 (int *,char*,int,int) ;
 TYPE_1__* FUNC_2 () ;

__attribute__((used)) static u_char *
FUNC_3(ngx_http_request_t *VAR_0, u_char *VAR_1,
    ngx_http_log_op_t *VAR_2)
{
    ngx_time_t *VAR_3;
    ngx_msec_int_t VAR_4;

    VAR_3 = FUNC_2();

    VAR_4 = (ngx_msec_int_t)
             ((VAR_3->sec - VAR_0->start_sec) * 1000 + (VAR_3->msec - VAR_0->start_msec));
    VAR_4 = FUNC_0(VAR_4, 0);

    return FUNC_1(VAR_1, "%T.%03M", (time_t) VAR_4 / 1000, VAR_4 % 1000);
}
