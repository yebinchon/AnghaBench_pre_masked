
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rpc_task_setup {struct rpc_task* task; } ;
struct rpc_task {unsigned short tk_flags; } ;


 unsigned short VAR_0 ;
 int FUNC_0 (char*,struct rpc_task*) ;
 struct rpc_task* FUNC_1 () ;
 int FUNC_2 (struct rpc_task*,struct rpc_task_setup const*) ;

struct rpc_task *FUNC_3(const struct rpc_task_setup *VAR_1)
{
 struct rpc_task *VAR_2 = VAR_1->task;
 unsigned short VAR_3 = 0;

 if (VAR_2 == ((void*)0)) {
  VAR_2 = FUNC_1();
  VAR_3 = VAR_0;
 }

 FUNC_2(VAR_2, VAR_1);
 VAR_2->tk_flags |= VAR_3;
 FUNC_0("RPC:       allocated task %p\n", VAR_2);
 return VAR_2;
}
