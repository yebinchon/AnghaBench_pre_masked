
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int rb_credits; } ;
struct rpcrdma_ia {int ri_flags; } ;
struct rpcrdma_ep {int rep_connected; } ;
struct rpcrdma_xprt {TYPE_1__ rx_buf; struct rpcrdma_ia rx_ia; struct rpcrdma_ep rx_ep; } ;
struct rpc_xprt {int connect_cookie; scalar_t__ reestablish_timeout; int cwnd; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 () ;
 int FUNC_1 (struct rpcrdma_ep*,struct rpcrdma_ia*) ;
 int FUNC_2 (struct rpcrdma_ia*) ;
 struct rpcrdma_xprt* FUNC_3 (struct rpc_xprt*) ;
 scalar_t__ FUNC_4 (int ,int *) ;
 int FUNC_5 (struct rpcrdma_xprt*) ;
 int FUNC_6 (struct rpc_xprt*) ;
 int FUNC_7 (struct rpc_xprt*) ;

void FUNC_8(struct rpc_xprt *VAR_3)
{
 struct rpcrdma_xprt *VAR_4 = FUNC_3(VAR_3);
 struct rpcrdma_ep *VAR_5 = &VAR_4->rx_ep;
 struct rpcrdma_ia *VAR_6 = &VAR_4->rx_ia;

 FUNC_0();

 FUNC_5(VAR_4);


 FUNC_6(VAR_3);

 if (FUNC_4(VAR_1, &VAR_6->ri_flags)) {
  FUNC_2(VAR_6);
  goto out;
 }

 if (VAR_5->rep_connected == -VAR_0)
  return;
 FUNC_1(VAR_5, VAR_6);




 VAR_4->rx_buf.rb_credits = 1;
 VAR_3->cwnd = VAR_2;

out:
 VAR_3->reestablish_timeout = 0;
 ++VAR_3->connect_cookie;
 FUNC_7(VAR_3);
}
