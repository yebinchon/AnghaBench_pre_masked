
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int HMODULE ;


 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (int ,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 void* VAR_2 ;
 void* VAR_3 ;
 void* VAR_4 ;
 void* VAR_5 ;
 void* VAR_6 ;

__attribute__((used)) static void FUNC_2(void)
{
    HMODULE VAR_7 = FUNC_0("rpcrt4.dll");

    VAR_2 = (void *)FUNC_1(VAR_7, "NDRSContextMarshall2");
    VAR_3 = (void *)FUNC_1(VAR_7, "NDRSContextUnmarshall2");
    VAR_6 = (void *)FUNC_1(VAR_7, "RpcServerRegisterIfEx");
    VAR_4 = (void *)FUNC_1(VAR_7, "RpcBindingSetAuthInfoExA");
    VAR_5 = (void *)FUNC_1(VAR_7, "RpcServerRegisterAuthInfoA");

    if (!VAR_2) VAR_1 = VAR_0;
}
