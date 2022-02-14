
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u_char ;
struct TYPE_3__ {scalar_t__ epoch; } ;
typedef TYPE_1__ ngx_rtmp_session_t ;
typedef int ngx_rtmp_log_op_t ;
typedef int int64_t ;


 scalar_t__ VAR_0 ;
 int * FUNC_0 (int *,char*,int) ;

__attribute__((used)) static u_char *
FUNC_1(ngx_rtmp_session_t *VAR_1, u_char *VAR_2,
    ngx_rtmp_log_op_t *VAR_3)
{
    return FUNC_0(VAR_2, "%L",
                       (int64_t) (VAR_0 - VAR_1->epoch) / 1000);
}
