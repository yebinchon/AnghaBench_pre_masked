
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rpc_xprt {int transport_lock; TYPE_1__* ops; struct rpc_task* snd_task; int state; } ;
struct rpc_task {int dummy; } ;
struct TYPE_2__ {int (* reserve_xprt ) (struct rpc_xprt*,struct rpc_task*) ;} ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct rpc_xprt*,struct rpc_task*) ;
 scalar_t__ FUNC_3 (int ,int *) ;

__attribute__((used)) static inline int FUNC_4(struct rpc_xprt *VAR_1, struct rpc_task *VAR_2)
{
 int VAR_3;

 if (FUNC_3(VAR_0, &VAR_1->state) && VAR_1->snd_task == VAR_2)
  return 1;
 FUNC_0(&VAR_1->transport_lock);
 VAR_3 = VAR_1->ops->reserve_xprt(VAR_1, VAR_2);
 FUNC_1(&VAR_1->transport_lock);
 return VAR_3;
}
