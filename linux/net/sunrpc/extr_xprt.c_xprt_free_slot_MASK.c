
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rpc_xprt {int reserve_lock; int free; } ;
struct rpc_rqst {int rq_list; } ;


 int FUNC_0 (int *,int *) ;
 int FUNC_1 (struct rpc_rqst*,int ,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct rpc_xprt*,struct rpc_rqst*) ;
 int FUNC_5 (struct rpc_xprt*) ;

void FUNC_6(struct rpc_xprt *VAR_0, struct rpc_rqst *VAR_1)
{
 FUNC_2(&VAR_0->reserve_lock);
 if (!FUNC_4(VAR_0, VAR_1)) {
  FUNC_1(VAR_1, 0, sizeof(*VAR_1));
  FUNC_0(&VAR_1->rq_list, &VAR_0->free);
 }
 FUNC_5(VAR_0);
 FUNC_3(&VAR_0->reserve_lock);
}
