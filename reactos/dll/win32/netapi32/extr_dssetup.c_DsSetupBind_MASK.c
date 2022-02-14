
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int * handle_t ;
typedef scalar_t__ RPC_STATUS ;
typedef int LPWSTR ;


 scalar_t__ FUNC_0 (int ,int **) ;
 scalar_t__ FUNC_1 (int *,char*,int ,char*,int *,int *) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (char*,...) ;

__attribute__((used)) static
RPC_STATUS
FUNC_4(
    LPWSTR VAR_0,
    handle_t *VAR_1)
{
    LPWSTR VAR_2;
    RPC_STATUS VAR_3;

    FUNC_3("DsSetupBind() called\n");

    *VAR_1 = ((void*)0);

    VAR_3 = FUNC_1(((void*)0),
                                      L"ncacn_np",
                                      VAR_0,
                                      L"\\pipe\\lsarpc",
                                      ((void*)0),
                                      &VAR_2);
    if (VAR_3)
    {
        FUNC_3("RpcStringBindingCompose returned 0x%x\n", VAR_3);
        return VAR_3;
    }


    VAR_3 = FUNC_0(VAR_2,
                                          VAR_1);
    if (VAR_3)
    {
        FUNC_3("RpcBindingFromStringBinding returned 0x%x\n", VAR_3);
    }

    VAR_3 = FUNC_2(&VAR_2);
    if (VAR_3)
    {
        FUNC_3("RpcStringFree returned 0x%x\n", VAR_3);
    }

    return VAR_3;
}
