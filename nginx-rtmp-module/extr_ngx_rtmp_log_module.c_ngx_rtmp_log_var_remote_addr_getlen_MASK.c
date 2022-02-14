
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {TYPE_2__* connection; } ;
typedef TYPE_3__ ngx_rtmp_session_t ;
typedef int ngx_rtmp_log_op_t ;
struct TYPE_5__ {size_t len; } ;
struct TYPE_6__ {TYPE_1__ addr_text; } ;



__attribute__((used)) static size_t
FUNC_0(ngx_rtmp_session_t *VAR_0,
    ngx_rtmp_log_op_t *VAR_1)
{
    return VAR_0->connection->addr_text.len;
}
