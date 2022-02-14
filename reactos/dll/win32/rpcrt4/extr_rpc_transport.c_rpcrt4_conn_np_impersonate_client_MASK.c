
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int ctx; scalar_t__ AuthInfo; } ;
struct TYPE_6__ {int pipe; } ;
typedef TYPE_1__ RpcConnection_np ;
typedef TYPE_2__ RpcConnection ;
typedef int RPC_STATUS ;
typedef int DWORD ;
typedef int BOOL ;



 int FUNC_0 () ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_2__*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (char*,TYPE_2__*) ;
 int FUNC_5 (char*,int) ;

__attribute__((used)) static RPC_STATUS FUNC_6(RpcConnection *VAR_2)
{
    RpcConnection_np *VAR_3 = (RpcConnection_np *)VAR_2;
    BOOL VAR_4;

    FUNC_4("(%p)\n", VAR_2);

    if (VAR_2->AuthInfo && FUNC_3(&VAR_2->ctx))
        return FUNC_2(VAR_2);

    VAR_4 = FUNC_1(VAR_3->pipe);
    if (!VAR_4)
    {
        DWORD VAR_5 = FUNC_0();
        FUNC_5("ImpersonateNamedPipeClient failed with error %u\n", VAR_5);
        switch (VAR_5)
        {
        case 128:
            return VAR_0;
        }
    }
    return VAR_1;
}
