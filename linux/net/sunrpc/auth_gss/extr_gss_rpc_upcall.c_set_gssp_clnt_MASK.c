
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sunrpc_net {int gssp_lock; struct rpc_clnt* gssp_clnt; } ;
struct rpc_clnt {int dummy; } ;
struct net {int dummy; } ;


 int FUNC_0 (struct net*,struct rpc_clnt**) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 struct sunrpc_net* FUNC_3 (struct net*,int ) ;
 int FUNC_4 (struct rpc_clnt*) ;
 int VAR_0 ;

int FUNC_5(struct net *VAR_1)
{
 struct sunrpc_net *VAR_2 = FUNC_3(VAR_1, VAR_0);
 struct rpc_clnt *VAR_3;
 int VAR_4;

 FUNC_1(&VAR_2->gssp_lock);
 VAR_4 = FUNC_0(VAR_1, &VAR_3);
 if (!VAR_4) {
  if (VAR_2->gssp_clnt)
   FUNC_4(VAR_2->gssp_clnt);
  VAR_2->gssp_clnt = VAR_3;
 }
 FUNC_2(&VAR_2->gssp_lock);
 return VAR_4;
}
