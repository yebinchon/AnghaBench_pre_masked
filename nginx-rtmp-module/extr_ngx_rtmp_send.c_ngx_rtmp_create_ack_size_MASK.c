
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_7__ {TYPE_1__* connection; } ;
typedef TYPE_2__ ngx_rtmp_session_t ;
typedef int ngx_chain_t ;
struct TYPE_6__ {int log; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_2__*,int ) ;
 int FUNC_3 (int ,int ,int ,char*,int ) ;

ngx_chain_t *
FUNC_4(ngx_rtmp_session_t *VAR_2, uint32_t VAR_3)
{
    FUNC_3(VAR_0, VAR_2->connection->log, 0,
                   "create: ack_size=%uD", VAR_3);

    {
        FUNC_2(VAR_2, VAR_1);

        FUNC_1(VAR_3);

        FUNC_0(VAR_2);
    }
}
