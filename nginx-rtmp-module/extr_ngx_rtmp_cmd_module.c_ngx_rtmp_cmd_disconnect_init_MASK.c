
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {TYPE_1__* connection; } ;
typedef TYPE_2__ ngx_rtmp_session_t ;
typedef int ngx_rtmp_header_t ;
typedef int ngx_int_t ;
typedef int ngx_chain_t ;
struct TYPE_5__ {int log; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ,char*) ;
 int FUNC_1 (TYPE_2__*) ;

__attribute__((used)) static ngx_int_t
FUNC_2(ngx_rtmp_session_t *VAR_1, ngx_rtmp_header_t *VAR_2,
                        ngx_chain_t *VAR_3)
{
    FUNC_0(VAR_0, VAR_1->connection->log, 0, "disconnect");

    return FUNC_1(VAR_1);
}
