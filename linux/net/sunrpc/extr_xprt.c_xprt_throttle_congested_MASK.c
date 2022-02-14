
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rpc_xprt {int reserve_lock; int backlog; int state; } ;
struct rpc_task {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int *,struct rpc_task*,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int ,int *) ;

__attribute__((used)) static bool FUNC_4(struct rpc_xprt *VAR_1, struct rpc_task *VAR_2)
{
 bool VAR_3 = 0;

 if (!FUNC_3(VAR_0, &VAR_1->state))
  goto out;
 FUNC_1(&VAR_1->reserve_lock);
 if (FUNC_3(VAR_0, &VAR_1->state)) {
  FUNC_0(&VAR_1->backlog, VAR_2, ((void*)0));
  VAR_3 = 1;
 }
 FUNC_2(&VAR_1->reserve_lock);
out:
 return VAR_3;
}
