
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rpc_wait_queue {int lock; } ;
struct rpc_task {int dummy; } ;


 int FUNC_0 (struct rpc_task*) ;
 int FUNC_1 (struct rpc_wait_queue*,struct rpc_task*,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

void
FUNC_4(struct rpc_wait_queue *VAR_0,
  struct rpc_task *VAR_1, int VAR_2)
{
 if (!FUNC_0(VAR_1))
  return;
 FUNC_2(&VAR_0->lock);
 FUNC_1(VAR_0, VAR_1, VAR_2);
 FUNC_3(&VAR_0->lock);
}
