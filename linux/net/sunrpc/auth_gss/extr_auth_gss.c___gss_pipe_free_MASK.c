
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rpc_clnt {int cl_pipedir_objects; } ;
struct net {int dummy; } ;
struct gss_pipe {int pipe; int pdo; struct rpc_clnt* clnt; } ;


 int FUNC_0 (struct gss_pipe*) ;
 int FUNC_1 (int ) ;
 struct net* FUNC_2 (struct rpc_clnt*) ;
 int FUNC_3 (struct net*,int *,int *) ;

__attribute__((used)) static void FUNC_4(struct gss_pipe *VAR_0)
{
 struct rpc_clnt *VAR_1 = VAR_0->clnt;
 struct net *VAR_2 = FUNC_2(VAR_1);

 FUNC_3(VAR_2,
   &VAR_1->cl_pipedir_objects,
   &VAR_0->pdo);
 FUNC_1(VAR_0->pipe);
 FUNC_0(VAR_0);
}
