
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct workqueue_struct {int dummy; } ;
struct rpc_wait_queue {int lock; } ;
struct rpc_task {int dummy; } ;


 struct rpc_task* FUNC_0 (struct rpc_wait_queue*) ;
 int FUNC_1 (char*,struct rpc_wait_queue*,int ) ;
 int FUNC_2 (struct rpc_wait_queue*) ;
 struct rpc_task* FUNC_3 (struct workqueue_struct*,struct rpc_wait_queue*,struct rpc_task*,int (*) (struct rpc_task*,void*),void*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

struct rpc_task *FUNC_6(struct workqueue_struct *VAR_0,
  struct rpc_wait_queue *VAR_1,
  bool (*VAR_2)(struct rpc_task *, void *), void *VAR_3)
{
 struct rpc_task *VAR_4 = ((void*)0);

 FUNC_1("RPC:       wake_up_first(%p \"%s\")\n",
   VAR_1, FUNC_2(VAR_1));
 FUNC_4(&VAR_1->lock);
 VAR_4 = FUNC_0(VAR_1);
 if (VAR_4 != ((void*)0))
  VAR_4 = FUNC_3(VAR_0, VAR_1,
    VAR_4, VAR_2, VAR_3);
 FUNC_5(&VAR_1->lock);

 return VAR_4;
}
