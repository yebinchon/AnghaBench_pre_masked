
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sunrpc_net {scalar_t__ rpcb_users; int rpcb_clnt_lock; struct rpc_clnt* rpcb_local_clnt4; struct rpc_clnt* rpcb_local_clnt; } ;
struct rpc_clnt {int dummy; } ;
struct net {int dummy; } ;


 struct sunrpc_net* FUNC_0 (struct net*,int ) ;
 int FUNC_1 (struct rpc_clnt*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int VAR_0 ;

void FUNC_4(struct net *VAR_1)
{
 struct sunrpc_net *VAR_2 = FUNC_0(VAR_1, VAR_0);
 struct rpc_clnt *VAR_3 = VAR_2->rpcb_local_clnt;
 struct rpc_clnt *VAR_4 = VAR_2->rpcb_local_clnt4;
 int VAR_5 = 0;

 FUNC_2(&VAR_2->rpcb_clnt_lock);
 if (VAR_2->rpcb_users) {
  if (--VAR_2->rpcb_users == 0) {
   VAR_2->rpcb_local_clnt = ((void*)0);
   VAR_2->rpcb_local_clnt4 = ((void*)0);
  }
  VAR_5 = !VAR_2->rpcb_users;
 }
 FUNC_3(&VAR_2->rpcb_clnt_lock);

 if (VAR_5) {



  if (VAR_4)
   FUNC_1(VAR_4);
  if (VAR_3)
   FUNC_1(VAR_3);
 }
}
