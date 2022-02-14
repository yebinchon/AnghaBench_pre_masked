
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u_char ;
typedef int ngx_uint_t ;
struct TYPE_5__ {TYPE_1__* connection; } ;
typedef TYPE_2__ ngx_rtmp_session_t ;
typedef int ngx_rtmp_log_op_t ;
struct TYPE_4__ {scalar_t__ number; } ;


 int * FUNC_0 (int *,char*,int ) ;

__attribute__((used)) static u_char *
FUNC_1(ngx_rtmp_session_t *VAR_0, u_char *VAR_1,
    ngx_rtmp_log_op_t *VAR_2)
{
    return FUNC_0(VAR_1, "%ui", (ngx_uint_t) VAR_0->connection->number);
}
