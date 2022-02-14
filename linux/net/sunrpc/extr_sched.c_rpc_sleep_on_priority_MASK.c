
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rpc_wait_queue {int lock; } ;
struct rpc_task {scalar_t__ tk_timeout; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct rpc_wait_queue*,struct rpc_task*,int) ;
 int FUNC_2 (struct rpc_task*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

void FUNC_5(struct rpc_wait_queue *VAR_1, struct rpc_task *VAR_2,
  int VAR_3)
{
 if (!FUNC_2(VAR_2))
  return;

 FUNC_0(VAR_2->tk_timeout != 0);
 VAR_3 -= VAR_0;



 FUNC_3(&VAR_1->lock);
 FUNC_1(VAR_1, VAR_2, VAR_3);
 FUNC_4(&VAR_1->lock);
}
