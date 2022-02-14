
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {TYPE_1__* connection; } ;
typedef TYPE_2__ ngx_rtmp_session_t ;
struct TYPE_8__ {int log; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,int ,char*) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*) ;
 scalar_t__ FUNC_3 (TYPE_2__*,int ,int *,int *) ;
 int FUNC_4 (TYPE_2__*) ;

__attribute__((used)) static void
FUNC_5(ngx_rtmp_session_t *VAR_3)
{
    FUNC_4(VAR_3);

    FUNC_0(VAR_0, VAR_3->connection->log, 0,
            "handshake: done");

    if (FUNC_3(VAR_3, VAR_2,
                ((void*)0), ((void*)0)) != VAR_1)
    {
        FUNC_2(VAR_3);
        return;
    }

    FUNC_1(VAR_3);
}
