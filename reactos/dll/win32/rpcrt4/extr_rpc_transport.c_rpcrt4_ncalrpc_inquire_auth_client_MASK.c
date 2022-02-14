
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ ULONG ;
typedef int RpcConnection ;
typedef int * RPC_WSTR ;
typedef int RPC_STATUS ;
typedef int * RPC_AUTHZ_HANDLE ;


 int FUNC_0 (char*,...) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (char*,int *,int **,int **,scalar_t__*,scalar_t__*,scalar_t__*,scalar_t__) ;

__attribute__((used)) static RPC_STATUS FUNC_2(
    RpcConnection *VAR_4, RPC_AUTHZ_HANDLE *VAR_5, RPC_WSTR *VAR_6,
    ULONG *VAR_7, ULONG *VAR_8, ULONG *VAR_9, ULONG VAR_10)
{
    FUNC_1("(%p, %p, %p, %p, %p, %p, 0x%x)\n", VAR_4, VAR_5,
          VAR_6, VAR_7, VAR_8, VAR_9, VAR_10);

    if (VAR_5)
    {
        FUNC_0("privs not implemented\n");
        *VAR_5 = ((void*)0);
    }
    if (VAR_6)
    {
        FUNC_0("server_princ_name not implemented\n");
        *VAR_6 = ((void*)0);
    }
    if (VAR_7) *VAR_7 = VAR_0;
    if (VAR_8) *VAR_8 = VAR_1;
    if (VAR_9)
    {
        FUNC_0("authorization service not implemented\n");
        *VAR_9 = VAR_2;
    }
    if (VAR_10)
        FUNC_0("flags 0x%x not implemented\n", VAR_10);

    return VAR_3;
}
