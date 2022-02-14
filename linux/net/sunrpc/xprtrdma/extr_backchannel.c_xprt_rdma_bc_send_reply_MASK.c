
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rpcrdma_xprt {int rx_ep; int rx_ia; } ;
struct rpcrdma_req {int dummy; } ;
struct rpc_xprt {int dummy; } ;
struct rpc_rqst {struct rpc_xprt* rq_xprt; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct rpcrdma_req* FUNC_0 (struct rpc_rqst*) ;
 int FUNC_1 (struct rpc_rqst*) ;
 scalar_t__ FUNC_2 (int *,int *,struct rpcrdma_req*) ;
 struct rpcrdma_xprt* FUNC_3 (struct rpc_xprt*) ;
 int FUNC_4 (struct rpc_xprt*) ;
 int FUNC_5 (struct rpc_xprt*) ;
 int FUNC_6 (struct rpc_xprt*,struct rpc_rqst*) ;

int FUNC_7(struct rpc_rqst *VAR_2)
{
 struct rpc_xprt *VAR_3 = VAR_2->rq_xprt;
 struct rpcrdma_xprt *VAR_4 = FUNC_3(VAR_3);
 struct rpcrdma_req *VAR_5 = FUNC_0(VAR_2);
 int VAR_6;

 if (!FUNC_4(VAR_3))
  return -VAR_1;

 if (!FUNC_6(VAR_3, VAR_2))
  return -VAR_0;

 VAR_6 = FUNC_1(VAR_2);
 if (VAR_6 < 0)
  goto failed_marshal;

 if (FUNC_2(&VAR_4->rx_ia, &VAR_4->rx_ep, VAR_5))
  goto drop_connection;
 return 0;

failed_marshal:
 if (VAR_6 != -VAR_1)
  return VAR_6;
drop_connection:
 FUNC_5(VAR_3);
 return -VAR_1;
}
