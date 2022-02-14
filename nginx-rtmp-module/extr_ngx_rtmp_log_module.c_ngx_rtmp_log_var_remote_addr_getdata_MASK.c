
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u_char ;
struct TYPE_7__ {TYPE_2__* connection; } ;
typedef TYPE_3__ ngx_rtmp_session_t ;
typedef int ngx_rtmp_log_op_t ;
struct TYPE_5__ {int len; int data; } ;
struct TYPE_6__ {TYPE_1__ addr_text; } ;


 int * FUNC_0 (int *,int ,int ) ;

__attribute__((used)) static u_char *
FUNC_1(ngx_rtmp_session_t *VAR_0, u_char *VAR_1,
    ngx_rtmp_log_op_t *VAR_2)
{
    return FUNC_0(VAR_1, VAR_0->connection->addr_text.data,
                           VAR_0->connection->addr_text.len);
}
