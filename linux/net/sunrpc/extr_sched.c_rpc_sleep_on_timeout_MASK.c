
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rpc_wait_queue {int lock; } ;
struct rpc_task {int tk_priority; } ;
typedef int rpc_action ;


 int FUNC_0 (struct rpc_wait_queue*,struct rpc_task*,unsigned long,int ) ;
 int FUNC_1 (struct rpc_task*,int ) ;
 int FUNC_2 (struct rpc_task*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

void FUNC_5(struct rpc_wait_queue *VAR_0, struct rpc_task *VAR_1,
    rpc_action VAR_2, unsigned long VAR_3)
{
 if (!FUNC_2(VAR_1))
  return;

 FUNC_1(VAR_1, VAR_2);




 FUNC_3(&VAR_0->lock);
 FUNC_0(VAR_0, VAR_1, VAR_3, VAR_1->tk_priority);
 FUNC_4(&VAR_0->lock);
}
