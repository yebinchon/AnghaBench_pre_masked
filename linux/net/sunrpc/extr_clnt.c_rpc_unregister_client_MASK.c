
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sunrpc_net {int rpc_client_lock; } ;
struct rpc_clnt {int cl_clients; } ;
struct net {int dummy; } ;


 int FUNC_0 (int *) ;
 struct sunrpc_net* FUNC_1 (struct net*,int ) ;
 struct net* FUNC_2 (struct rpc_clnt*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_5(struct rpc_clnt *VAR_1)
{
 struct net *VAR_2 = FUNC_2(VAR_1);
 struct sunrpc_net *VAR_3 = FUNC_1(VAR_2, VAR_0);

 FUNC_3(&VAR_3->rpc_client_lock);
 FUNC_0(&VAR_1->cl_clients);
 FUNC_4(&VAR_3->rpc_client_lock);
}
