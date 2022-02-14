
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ ULONG ;
struct TYPE_5__ {TYPE_1__* AuthInfo; } ;
struct TYPE_4__ {scalar_t__ AuthnSvc; scalar_t__ AuthnLevel; int server_principal_name; } ;
typedef TYPE_2__ RpcConnection ;
typedef int RPC_WSTR ;
typedef int RPC_STATUS ;
typedef int * RPC_AUTHZ_HANDLE ;


 int VAR_0 ;
 int FUNC_0 (char*,...) ;
 int FUNC_1 (int ) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

RPC_STATUS FUNC_2(
    RpcConnection *VAR_4, RPC_AUTHZ_HANDLE *VAR_5, RPC_WSTR *VAR_6,
    ULONG *VAR_7, ULONG *VAR_8, ULONG *VAR_9, ULONG VAR_10)
{
    if (!VAR_4->AuthInfo) return VAR_2;

    if (VAR_5)
    {
        FUNC_0("privs not implemented\n");
        *VAR_5 = ((void*)0);
    }
    if (VAR_6)
    {
        *VAR_6 = FUNC_1(VAR_4->AuthInfo->server_principal_name);
        if (!*VAR_6) return VAR_0;
    }
    if (VAR_7) *VAR_7 = VAR_4->AuthInfo->AuthnLevel;
    if (VAR_8) *VAR_8 = VAR_4->AuthInfo->AuthnSvc;
    if (VAR_9)
    {
        FUNC_0("authorization service not implemented\n");
        *VAR_9 = VAR_1;
    }
    if (VAR_10)
        FUNC_0("flags 0x%x not implemented\n", VAR_10);

    return VAR_3;
}
