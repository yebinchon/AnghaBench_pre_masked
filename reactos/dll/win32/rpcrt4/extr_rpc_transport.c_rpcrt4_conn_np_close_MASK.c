
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ event_cache; scalar_t__ listen_event; scalar_t__ pipe; } ;
typedef TYPE_1__ RpcConnection_np ;
typedef int RpcConnection ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;

__attribute__((used)) static int FUNC_2(RpcConnection *VAR_0)
{
    RpcConnection_np *VAR_1 = (RpcConnection_np *) VAR_0;
    if (VAR_1->pipe)
    {
        FUNC_1(VAR_1->pipe);
        FUNC_0(VAR_1->pipe);
        VAR_1->pipe = 0;
    }
    if (VAR_1->listen_event)
    {
        FUNC_0(VAR_1->listen_event);
        VAR_1->listen_event = 0;
    }
    if (VAR_1->event_cache)
    {
        FUNC_0(VAR_1->event_cache);
        VAR_1->event_cache = 0;
    }
    return 0;
}
