
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rpc_wait_queue {int lock; } ;
struct rpc_task {scalar_t__ tk_timeout; int tk_priority; } ;
typedef int rpc_action ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct rpc_wait_queue*,struct rpc_task*,int ) ;
 int FUNC_2 (struct rpc_task*,int ) ;
 int FUNC_3 (struct rpc_task*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

void FUNC_6(struct rpc_wait_queue *VAR_0, struct rpc_task *VAR_1,
    rpc_action VAR_2)
{
 if (!FUNC_3(VAR_1))
  return;

 FUNC_2(VAR_1, VAR_2);

 FUNC_0(VAR_1->tk_timeout != 0);



 FUNC_4(&VAR_0->lock);
 FUNC_1(VAR_0, VAR_1, VAR_1->tk_priority);
 FUNC_5(&VAR_0->lock);
}
