
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sunrpc_net {int rpcb_users; int rpcb_clnt_lock; } ;
struct net {int dummy; } ;


 struct sunrpc_net* FUNC_0 (struct net*,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int VAR_0 ;

__attribute__((used)) static int FUNC_3(struct net *VAR_1)
{
 int VAR_2;
 struct sunrpc_net *VAR_3 = FUNC_0(VAR_1, VAR_0);

 FUNC_1(&VAR_3->rpcb_clnt_lock);
 if (VAR_3->rpcb_users)
  VAR_3->rpcb_users++;
 VAR_2 = VAR_3->rpcb_users;
 FUNC_2(&VAR_3->rpcb_clnt_lock);

 return VAR_2;
}
