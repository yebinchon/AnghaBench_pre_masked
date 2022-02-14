
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
typedef int uint32_t ;
struct TYPE_7__ {TYPE_1__* connection; } ;
typedef TYPE_2__ ngx_rtmp_session_t ;
typedef int ngx_chain_t ;
struct TYPE_6__ {int log; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_2__*,int ) ;
 int FUNC_4 (int ,int ,int ,char*,int ,int) ;

ngx_chain_t *
FUNC_5(ngx_rtmp_session_t *VAR_2, uint32_t VAR_3,
                          uint8_t VAR_4)
{
    FUNC_4(VAR_0, VAR_2->connection->log, 0,
                   "create: bandwidth ack_size=%uD limit=%d",
                   VAR_3, (int)VAR_4);

    {
        FUNC_3(VAR_2, VAR_1);

        FUNC_2(VAR_3);
        FUNC_1(VAR_4);

        FUNC_0(VAR_2);
    }
}
