
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int RPC_STATUS ;


 int VAR_0 ;
 int FUNC_0 (int,int,int ) ;
 int FUNC_1 (int ,int *,int *) ;
 int FUNC_2 (char*,int,char*,int *) ;
 int FUNC_3 (int) ;
 int VAR_1 ;
 int FUNC_4 (char*,int) ;
 int FUNC_5 (char*,int*) ;

int FUNC_6()
{
 RPC_STATUS VAR_2;
 unsigned int VAR_3 = 1;
 unsigned int VAR_4 = 20;
 int VAR_5;

 VAR_2 = FUNC_2("ncacn_np", 20, "\\pipe\\hello", ((void*)0));

 if (VAR_2)
 {
  FUNC_4("RpcServerUseProtseqEp %x\n", VAR_2);
  FUNC_3(VAR_2);
 }

 VAR_2 = FUNC_1(VAR_1, ((void*)0), ((void*)0));

 if (VAR_2)
 {
  FUNC_4("RpcServerRegisterIf %x\n", VAR_2);
 FUNC_3(VAR_2);
 }

 VAR_2 = FUNC_0(1, 20, VAR_0);

 if (VAR_2)
 {
  FUNC_4("RpcServerListen %x", VAR_2);
  FUNC_3(VAR_2);
 }

 FUNC_5("%d", &VAR_5);
}
