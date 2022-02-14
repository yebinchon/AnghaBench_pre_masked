
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rpc_task {unsigned short tk_flags; int tk_pid; int tk_calldata; int tk_ops; int tk_op_cred; } ;


 unsigned short VAR_0 ;
 int FUNC_0 (char*,int ) ;
 int FUNC_1 (struct rpc_task*,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ) ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_4(struct rpc_task *VAR_2)
{
 unsigned short VAR_3 = VAR_2->tk_flags;

 FUNC_2(VAR_2->tk_op_cred);
 FUNC_3(VAR_2->tk_ops, VAR_2->tk_calldata);

 if (VAR_3 & VAR_0) {
  FUNC_0("RPC: %5u freeing task\n", VAR_2->tk_pid);
  FUNC_1(VAR_2, VAR_1);
 }
}
