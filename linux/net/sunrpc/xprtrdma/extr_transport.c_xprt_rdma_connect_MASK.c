
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ rep_connected; } ;
struct rpcrdma_xprt {int rx_connect_worker; TYPE_1__ rx_ep; } ;
struct rpc_xprt {int dummy; } ;
struct rpc_task {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int *,unsigned long) ;
 struct rpcrdma_xprt* FUNC_1 (struct rpc_xprt*) ;
 int FUNC_2 (struct rpcrdma_xprt*) ;
 int FUNC_3 (struct rpc_xprt*,int ) ;
 unsigned long FUNC_4 (struct rpc_xprt*) ;
 int VAR_1 ;

__attribute__((used)) static void
FUNC_5(struct rpc_xprt *VAR_2, struct rpc_task *VAR_3)
{
 struct rpcrdma_xprt *VAR_4 = FUNC_1(VAR_2);
 unsigned long VAR_5;

 FUNC_2(VAR_4);

 VAR_5 = 0;
 if (VAR_4->rx_ep.rep_connected != 0) {
  VAR_5 = FUNC_4(VAR_2);
  FUNC_3(VAR_2, VAR_0);
 }
 FUNC_0(VAR_1, &VAR_4->rx_connect_worker,
      VAR_5);
}
