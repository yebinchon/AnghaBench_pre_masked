
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct workqueue_struct {int dummy; } ;
struct rpc_wait_queue {int dummy; } ;
struct rpc_task {struct rpc_wait_queue* tk_waitqueue; } ;


 scalar_t__ FUNC_0 (struct rpc_task*) ;
 int FUNC_1 (struct workqueue_struct*,struct rpc_wait_queue*,struct rpc_task*) ;
 int FUNC_2 () ;

__attribute__((used)) static struct rpc_task *
FUNC_3(struct workqueue_struct *VAR_0,
  struct rpc_wait_queue *VAR_1, struct rpc_task *VAR_2,
  bool (*VAR_3)(struct rpc_task *, void *), void *VAR_4)
{
 if (FUNC_0(VAR_2)) {
  FUNC_2();
  if (VAR_2->tk_waitqueue == VAR_1) {
   if (VAR_3 == ((void*)0) || VAR_3(VAR_2, VAR_4)) {
    FUNC_1(VAR_0, VAR_1, VAR_2);
    return VAR_2;
   }
  }
 }
 return ((void*)0);
}
