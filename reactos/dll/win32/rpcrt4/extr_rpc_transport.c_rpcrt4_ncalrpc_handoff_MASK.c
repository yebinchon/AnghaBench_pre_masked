
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int NetworkAddr; int Endpoint; } ;
typedef int RpcConnection_np ;
typedef TYPE_1__ RpcConnection ;
typedef int RPC_STATUS ;
typedef scalar_t__ DWORD ;


 int FUNC_0 (char*,int ) ;
 int FUNC_1 (int ,scalar_t__*) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 (int ,int ,scalar_t__) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_5 (char*,int ) ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (int *,int *) ;

__attribute__((used)) static RPC_STATUS FUNC_8(RpcConnection *VAR_2, RpcConnection *VAR_3)
{
  DWORD VAR_4 = VAR_0 + 1;
  RPC_STATUS VAR_5;

  FUNC_5("%s\n", VAR_2->Endpoint);

  FUNC_7((RpcConnection_np *)VAR_2, (RpcConnection_np *)VAR_3);
  VAR_5 = FUNC_6(VAR_2);


  VAR_3->NetworkAddr = FUNC_4(FUNC_3(), 0, VAR_4);
  if (!FUNC_1(VAR_3->NetworkAddr, &VAR_4))
  {
    FUNC_0("Failed to retrieve the computer name, error %u\n", FUNC_2());
    return VAR_1;
  }

  return VAR_5;
}
