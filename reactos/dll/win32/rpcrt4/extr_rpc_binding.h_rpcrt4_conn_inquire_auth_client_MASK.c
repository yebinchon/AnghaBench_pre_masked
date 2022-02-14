
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int ULONG ;
struct TYPE_6__ {TYPE_1__* ops; } ;
struct TYPE_5__ {int (* inquire_auth_client ) (TYPE_2__*,int *,int *,int *,int *,int *,int ) ;} ;
typedef TYPE_2__ RpcConnection ;
typedef int RPC_WSTR ;
typedef int RPC_STATUS ;
typedef int RPC_AUTHZ_HANDLE ;


 int FUNC_0 (TYPE_2__*,int *,int *,int *,int *,int *,int ) ;

__attribute__((used)) static inline RPC_STATUS FUNC_1(
    RpcConnection *VAR_0, RPC_AUTHZ_HANDLE *VAR_1, RPC_WSTR *VAR_2,
    ULONG *VAR_3, ULONG *VAR_4, ULONG *VAR_5, ULONG VAR_6)
{
    return VAR_0->ops->inquire_auth_client(VAR_0, VAR_1, VAR_2, VAR_3, VAR_4, VAR_5, VAR_6);
}
