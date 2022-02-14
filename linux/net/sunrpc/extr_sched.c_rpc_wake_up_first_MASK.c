
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rpc_wait_queue {int dummy; } ;
struct rpc_task {int dummy; } ;


 struct rpc_task* FUNC_0 (int ,struct rpc_wait_queue*,int (*) (struct rpc_task*,void*),void*) ;
 int VAR_0 ;

struct rpc_task *FUNC_1(struct rpc_wait_queue *VAR_1,
  bool (*VAR_2)(struct rpc_task *, void *), void *VAR_3)
{
 return FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3);
}
