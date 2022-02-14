
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * rpc_cred; } ;
struct rpc_task {TYPE_1__ tk_msg; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct rpc_task*) ;
 int FUNC_2 (struct rpc_task*) ;

__attribute__((used)) static void FUNC_3(struct rpc_task *VAR_0)
{
 FUNC_2(VAR_0);
 if (VAR_0->tk_msg.rpc_cred) {
  FUNC_0(VAR_0->tk_msg.rpc_cred);
  VAR_0->tk_msg.rpc_cred = ((void*)0);
 }
 FUNC_1(VAR_0);
}
