
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int handle_t ;
typedef scalar_t__ RPC_STATUS ;


 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (char*,...) ;

__attribute__((used)) static
void
FUNC_2(
    handle_t VAR_0)
{
    RPC_STATUS VAR_1;

    FUNC_1("DsSetupUnbind()\n");

    VAR_1 = FUNC_0(&VAR_0);
    if (VAR_1)
    {
        FUNC_1("RpcBindingFree returned 0x%x\n", VAR_1);
    }
}
