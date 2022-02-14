
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rpc_xprt {int dummy; } ;
struct rpc_timeout {int dummy; } ;
struct rpc_clnt {int cl_autobind; int cl_lock; int cl_xprt; struct rpc_timeout const* cl_timeout; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ,struct rpc_xprt*) ;
 struct rpc_xprt* FUNC_2 (int ,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct rpc_xprt*) ;

__attribute__((used)) static struct rpc_xprt *FUNC_6(struct rpc_clnt *VAR_0,
  struct rpc_xprt *VAR_1,
  const struct rpc_timeout *VAR_2)
{
 struct rpc_xprt *VAR_3;

 FUNC_3(&VAR_0->cl_lock);
 VAR_3 = FUNC_2(VAR_0->cl_xprt,
   FUNC_0(&VAR_0->cl_lock));

 if (!FUNC_5(VAR_1))
  VAR_0->cl_autobind = 1;

 VAR_0->cl_timeout = VAR_2;
 FUNC_1(VAR_0->cl_xprt, VAR_1);
 FUNC_4(&VAR_0->cl_lock);

 return VAR_3;
}
