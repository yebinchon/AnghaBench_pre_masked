
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rpc_wait_queue {int lock; } ;
struct rpc_task {int dummy; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct rpc_wait_queue*,struct rpc_task*,unsigned long,int) ;
 int FUNC_1 (struct rpc_task*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

void FUNC_4(struct rpc_wait_queue *VAR_1,
  struct rpc_task *VAR_2, unsigned long VAR_3, int VAR_4)
{
 if (!FUNC_1(VAR_2))
  return;

 VAR_4 -= VAR_0;



 FUNC_2(&VAR_1->lock);
 FUNC_0(VAR_1, VAR_2, VAR_3, VAR_4);
 FUNC_3(&VAR_1->lock);
}
