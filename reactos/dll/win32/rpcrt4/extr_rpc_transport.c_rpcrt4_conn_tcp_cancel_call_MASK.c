
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int cancel_event; } ;
typedef TYPE_1__ RpcConnection_tcp ;
typedef int RpcConnection ;


 int FUNC_0 (int ) ;
 int FUNC_1 (char*,TYPE_1__*) ;

__attribute__((used)) static void FUNC_2(RpcConnection *VAR_0)
{
    RpcConnection_tcp *VAR_1 = (RpcConnection_tcp *) VAR_0;

    FUNC_1("%p\n", VAR_1);

    FUNC_0(VAR_1->cancel_event);
}
