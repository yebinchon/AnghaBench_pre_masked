
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rpc_task_setup {int rpc_message; int rpc_client; } ;
struct rpc_task {int tk_count; int * tk_action; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct rpc_task*) ;
 int FUNC_2 (struct rpc_task*) ;
 struct rpc_task* FUNC_3 (struct rpc_task_setup const*) ;
 int FUNC_4 (struct rpc_task*,int ) ;
 int FUNC_5 (struct rpc_task*,int ) ;

struct rpc_task *FUNC_6(const struct rpc_task_setup *VAR_0)
{
 struct rpc_task *VAR_1;

 VAR_1 = FUNC_3(VAR_0);

 FUNC_4(VAR_1, VAR_0->rpc_client);
 FUNC_5(VAR_1, VAR_0->rpc_message);

 if (VAR_1->tk_action == ((void*)0))
  FUNC_1(VAR_1);

 FUNC_0(&VAR_1->tk_count);
 FUNC_2(VAR_1);
 return VAR_1;
}
