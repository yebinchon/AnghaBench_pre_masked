
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sunrpc_net {int gssp_lock; struct rpc_clnt* gssp_clnt; } ;
struct rpc_clnt {int cl_count; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static struct rpc_clnt *FUNC_3(struct sunrpc_net *VAR_0)
{
 struct rpc_clnt *VAR_1;

 FUNC_1(&VAR_0->gssp_lock);
 VAR_1 = VAR_0->gssp_clnt;
 if (VAR_1)
  FUNC_0(&VAR_1->cl_count);
 FUNC_2(&VAR_0->gssp_lock);
 return VAR_1;
}
