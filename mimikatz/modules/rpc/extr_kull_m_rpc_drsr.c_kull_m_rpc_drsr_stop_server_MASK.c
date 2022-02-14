
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ RPC_STATUS ;
typedef int RPC_BINDING_VECTOR ;
typedef scalar_t__ NTSTATUS ;


 int FUNC_0 (char*,scalar_t__) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int **) ;
 scalar_t__ FUNC_2 (int ,int *,int *) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 () ;
 scalar_t__ FUNC_5 (int **) ;
 scalar_t__ FUNC_6 (int ,int *,int) ;
 int VAR_1 ;
 int FUNC_7 (char*) ;

NTSTATUS FUNC_8()
{
 RPC_STATUS VAR_2;
 RPC_BINDING_VECTOR *VAR_3 = ((void*)0);

 VAR_2 = FUNC_5(&VAR_3);
 if(VAR_2 == VAR_0)
 {
  VAR_2 = FUNC_2(VAR_1, VAR_3, ((void*)0));
  if(VAR_2 == VAR_0)
   FUNC_7(L" > RPC bind unregistered\n");
  else FUNC_0(L"RpcEpUnregister: %08x\n", VAR_2);
  FUNC_1(&VAR_3);
 }
 else FUNC_0(L"RpcServerInqBindings: %08x\n", VAR_2);
 VAR_2 = FUNC_6(VAR_1, ((void*)0), 1);
 if(VAR_2 != VAR_0)
  FUNC_0(L"RpcServerUnregisterIf: %08x\n", VAR_2);
 VAR_2 = FUNC_3(((void*)0));
 if(VAR_2 != VAR_0)
  FUNC_0(L"RpcMgmtStopServerListening: %08x\n", VAR_2);
 else
 {
  FUNC_7(L" > stopping RPC server\n");
  FUNC_4();
  FUNC_7(L" > RPC server stopped\n");
 }
 return VAR_2;
}
