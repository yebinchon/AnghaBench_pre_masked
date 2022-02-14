
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int rb_bc_srv_max_requests; } ;
struct rpcrdma_xprt {TYPE_1__ rx_buf; } ;
struct rpc_xprt {int dummy; } ;


 int VAR_0 ;
 struct rpcrdma_xprt* FUNC_0 (struct rpc_xprt*) ;
 int FUNC_1 (struct rpcrdma_xprt*,unsigned int) ;

int FUNC_2(struct rpc_xprt *VAR_1, unsigned int VAR_2)
{
 struct rpcrdma_xprt *VAR_3 = FUNC_0(VAR_1);

 VAR_3->rx_buf.rb_bc_srv_max_requests = VAR_0 >> 1;
 FUNC_1(VAR_3, VAR_2);
 return 0;
}
