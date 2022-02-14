
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int handle_t ;
typedef scalar_t__ RPC_STATUS ;
typedef scalar_t__ RPC_CSTR ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (scalar_t__,int *) ;
 scalar_t__ FUNC_2 (int ,scalar_t__*) ;
 scalar_t__ FUNC_3 (int *,unsigned char*,unsigned char*,unsigned char*,int *,scalar_t__*) ;
 int FUNC_4 (scalar_t__*) ;
 int FUNC_5 (int,char*,scalar_t__) ;
 int FUNC_6 (char const*,char*) ;

__attribute__((used)) static void FUNC_7(void)
{
    static unsigned char VAR_1[] = "ncacn_np";
    static unsigned char VAR_2[] = ".";
    static unsigned char VAR_3[] = "\\pipe\\wine_rpc_test";
    RPC_STATUS VAR_4;
    handle_t VAR_5;
    RPC_CSTR VAR_6;

    VAR_4 = FUNC_3(((void*)0), VAR_1, VAR_2,
                                     VAR_3, ((void*)0), &VAR_6);
    FUNC_5(VAR_4 == VAR_0, "RpcStringBindingCompose failed (%u)\n", VAR_4);

    VAR_4 = FUNC_1(VAR_6, &VAR_5);
    FUNC_5(VAR_4 == VAR_0, "RpcBindingFromStringBinding failed (%u)\n", VAR_4);
    FUNC_4(&VAR_6);

    VAR_4 = FUNC_2(VAR_5, &VAR_6);
    FUNC_5(VAR_4 == VAR_0, "RpcStringBindingFromBinding failed with error %u\n", VAR_4);

    FUNC_5(!FUNC_6((const char *)VAR_6, "ncacn_np:.[\\\\pipe\\\\wine_rpc_test]"),
       "binding string didn't match what was expected: \"%s\"\n", VAR_6);
    FUNC_4(&VAR_6);

    VAR_4 = FUNC_0(&VAR_5);
    FUNC_5(VAR_4 == VAR_0, "RpcBindingFree failed with error %u\n", VAR_4);
}
