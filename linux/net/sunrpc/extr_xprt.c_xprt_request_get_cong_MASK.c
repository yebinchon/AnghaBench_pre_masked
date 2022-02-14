
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rpc_xprt {int transport_lock; } ;
struct rpc_rqst {scalar_t__ rq_cong; } ;


 scalar_t__ FUNC_0 (struct rpc_xprt*,struct rpc_rqst*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

bool
FUNC_3(struct rpc_xprt *VAR_0, struct rpc_rqst *VAR_1)
{
 bool VAR_2 = 0;

 if (VAR_1->rq_cong)
  return 1;
 FUNC_1(&VAR_0->transport_lock);
 VAR_2 = FUNC_0(VAR_0, VAR_1) != 0;
 FUNC_2(&VAR_0->transport_lock);
 return VAR_2;
}
