
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sunrpc_net {int rpcb_is_af_local; int rpcb_users; struct rpc_clnt* rpcb_local_clnt4; struct rpc_clnt* rpcb_local_clnt; } ;
struct rpc_clnt {int dummy; } ;
struct TYPE_2__ {int inum; } ;
struct net {TYPE_1__ ns; } ;


 int FUNC_0 (char*,struct rpc_clnt*,struct rpc_clnt*,int ,char*) ;
 struct net VAR_0 ;
 struct sunrpc_net* FUNC_1 (struct net*,int ) ;
 int FUNC_2 () ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_3(struct net *VAR_2, struct rpc_clnt *VAR_3,
   struct rpc_clnt *VAR_4,
   bool VAR_5)
{
 struct sunrpc_net *VAR_6 = FUNC_1(VAR_2, VAR_1);


 VAR_6->rpcb_local_clnt = VAR_3;
 VAR_6->rpcb_local_clnt4 = VAR_4;
 VAR_6->rpcb_is_af_local = VAR_5 ? 1 : 0;
 FUNC_2();
 VAR_6->rpcb_users = 1;
 FUNC_0("RPC:       created new rpcb local clients (rpcb_local_clnt: "
  "%p, rpcb_local_clnt4: %p) for net %x%s\n",
  VAR_6->rpcb_local_clnt, VAR_6->rpcb_local_clnt4,
  VAR_2->ns.inum, (VAR_2 == &VAR_0) ? " (init_net)" : "");
}
