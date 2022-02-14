
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int listen_event; scalar_t__ pipe; } ;
typedef TYPE_1__ RpcConnection_np ;


 int FUNC_0 (int) ;

__attribute__((used)) static void FUNC_1(RpcConnection_np *VAR_0, RpcConnection_np *VAR_1)
{



    VAR_1->pipe = VAR_0->pipe;
    VAR_0->pipe = 0;
    FUNC_0(!VAR_0->listen_event);
}
