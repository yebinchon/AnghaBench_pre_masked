
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int handle_t ;
typedef scalar_t__ RPC_STATUS ;
typedef int RPC_CSTR ;
typedef int RPC_BINDING_VECTOR ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (unsigned char*,int *) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int **) ;
 scalar_t__ FUNC_4 (int ,int *,int *,unsigned char*) ;
 scalar_t__ FUNC_5 (int ,int ) ;
 scalar_t__ FUNC_6 (int ,int *,int *) ;
 scalar_t__ FUNC_7 (int **) ;
 scalar_t__ FUNC_8 (int ,int *,int *) ;
 scalar_t__ FUNC_9 (int *,int *,int ) ;
 scalar_t__ FUNC_10 (int *,int ,int ,int *,int *,unsigned char**) ;
 int FUNC_11 (unsigned char**) ;
 scalar_t__ FUNC_12 (int) ;
 int FUNC_13 (int,char*,int ,scalar_t__) ;

__attribute__((used)) static void FUNC_14(RPC_CSTR VAR_4, RPC_CSTR VAR_5)
{
    static unsigned char VAR_6[] = "Test annotation string.";
    RPC_STATUS VAR_7;
    RPC_BINDING_VECTOR *VAR_8;
    handle_t VAR_9;
    unsigned char *VAR_10;

    VAR_7 = FUNC_8(VAR_1, ((void*)0), ((void*)0));
    FUNC_13(VAR_7 == VAR_2, "%s: RpcServerRegisterIf failed (%u)\n", VAR_4, VAR_7);

    VAR_7 = FUNC_7(&VAR_8);
    FUNC_13(VAR_7 == VAR_2, "%s: RpcServerInqBindings failed with error %u\n", VAR_4, VAR_7);


    VAR_7 = FUNC_4(VAR_1, VAR_8, ((void*)0), VAR_6);
    FUNC_13(VAR_7 == VAR_2, "%s: RpcEpRegisterA failed with error %u\n", VAR_4, VAR_7);

    VAR_7 = FUNC_4(VAR_1, VAR_8, ((void*)0), ((void*)0));
    FUNC_13(VAR_7 == VAR_2, "%s: RpcEpRegisterA failed with error %u\n", VAR_4, VAR_7);

    VAR_7 = FUNC_10(((void*)0), VAR_4, VAR_5,
                                     ((void*)0), ((void*)0), &VAR_10);
    FUNC_13(VAR_7 == VAR_2, "%s: RpcStringBindingCompose failed (%u)\n", VAR_4, VAR_7);

    VAR_7 = FUNC_1(VAR_10, &VAR_9);
    FUNC_13(VAR_7 == VAR_2, "%s: RpcBindingFromStringBinding failed (%u)\n", VAR_4, VAR_7);

    FUNC_11(&VAR_10);

    VAR_7 = FUNC_2(VAR_9);
    FUNC_13(VAR_7 == VAR_2, "%s: RpcBindingReset failed with error %u\n", VAR_4, VAR_7);

    VAR_7 = FUNC_5(VAR_9, VAR_1);
    FUNC_13(VAR_7 == VAR_2 || FUNC_12(VAR_7 == VAR_3),
       "%s: RpcEpResolveBinding failed with error %u\n", VAR_4, VAR_7);

    VAR_7 = FUNC_2(VAR_9);
    FUNC_13(VAR_7 == VAR_2, "%s: RpcBindingReset failed with error %u\n", VAR_4, VAR_7);

    VAR_7 = FUNC_0(&VAR_9);
    FUNC_13(VAR_7 == VAR_2, "%s: RpcBindingFree failed with error %u\n", VAR_4, VAR_7);

    VAR_7 = FUNC_9(((void*)0), ((void*)0), VAR_0);
    FUNC_13(VAR_7 == VAR_2, "%s: RpcServerUnregisterIf failed (%u)\n", VAR_4, VAR_7);

    VAR_7 = FUNC_6(VAR_1, VAR_8, ((void*)0));
    FUNC_13(VAR_7 == VAR_2, "%s: RpcEpUnregisterA failed with error %u\n", VAR_4, VAR_7);

    VAR_7 = FUNC_3(&VAR_8);
    FUNC_13(VAR_7 == VAR_2, "%s: RpcBindingVectorFree failed with error %u\n", VAR_4, VAR_7);
}
