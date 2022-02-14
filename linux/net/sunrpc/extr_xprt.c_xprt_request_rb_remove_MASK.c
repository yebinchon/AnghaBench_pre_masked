
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rpc_xprt {int recv_queue; } ;
struct rpc_rqst {int rq_recv; } ;


 int FUNC_0 (int *,int *) ;

__attribute__((used)) static void
FUNC_1(struct rpc_xprt *VAR_0, struct rpc_rqst *VAR_1)
{
 FUNC_0(&VAR_1->rq_recv, &VAR_0->recv_queue);
}
