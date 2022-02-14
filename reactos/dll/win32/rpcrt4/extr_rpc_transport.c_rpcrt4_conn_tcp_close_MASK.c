
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int sock; int cancel_event; int sock_event; } ;
typedef TYPE_1__ RpcConnection_tcp ;
typedef int RpcConnection ;


 int FUNC_0 (int ) ;
 int FUNC_1 (char*,int) ;
 int FUNC_2 (int) ;

__attribute__((used)) static int FUNC_3(RpcConnection *VAR_0)
{
    RpcConnection_tcp *VAR_1 = (RpcConnection_tcp *) VAR_0;

    FUNC_1("%d\n", VAR_1->sock);

    if (VAR_1->sock != -1)
        FUNC_2(VAR_1->sock);
    VAR_1->sock = -1;
    FUNC_0(VAR_1->sock_event);
    FUNC_0(VAR_1->cancel_event);
    return 0;
}
