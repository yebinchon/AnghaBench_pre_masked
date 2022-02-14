
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int ctx; int AuthInfo; } ;
typedef int SECURITY_STATUS ;
typedef TYPE_1__ RpcConnection ;
typedef int RPC_STATUS ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;



 int FUNC_1 (int *) ;
 int FUNC_2 (char*,TYPE_1__*) ;
 int FUNC_3 (char*,int) ;

RPC_STATUS FUNC_4(RpcConnection *VAR_4)
{
    SECURITY_STATUS VAR_5;

    FUNC_2("(%p)\n", VAR_4);

    if (!VAR_4->AuthInfo || !FUNC_1(&VAR_4->ctx))
        return VAR_1;
    VAR_5 = FUNC_0(&VAR_4->ctx);
    if (VAR_5 != 129)
        FUNC_3("ImpersonateSecurityContext returned 0x%08x\n", VAR_5);
    switch (VAR_5)
    {
    case 128:
        return VAR_0;
    case 130:
        return VAR_1;
    case 129:
        return VAR_2;
    default:
        return VAR_3;
    }
}
