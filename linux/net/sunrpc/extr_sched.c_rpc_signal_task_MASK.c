
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rpc_wait_queue {int dummy; } ;
struct rpc_task {int tk_waitqueue; int tk_runstate; } ;


 int VAR_0 ;
 struct rpc_wait_queue* FUNC_0 (int ) ;
 int FUNC_1 (struct rpc_task*) ;
 int VAR_1 ;
 int FUNC_2 (struct rpc_wait_queue*,struct rpc_task*,int ) ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 () ;

void FUNC_5(struct rpc_task *VAR_2)
{
 struct rpc_wait_queue *VAR_3;

 if (!FUNC_1(VAR_2))
  return;
 FUNC_3(VAR_1, &VAR_2->tk_runstate);
 FUNC_4();
 VAR_3 = FUNC_0(VAR_2->tk_waitqueue);
 if (VAR_3)
  FUNC_2(VAR_3, VAR_2, -VAR_0);
}
