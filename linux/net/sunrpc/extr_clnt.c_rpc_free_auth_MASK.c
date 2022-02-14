
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rpc_clnt {int cl_count; int * cl_auth; } ;


 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 struct rpc_clnt* FUNC_2 (struct rpc_clnt*) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static struct rpc_clnt *
FUNC_4(struct rpc_clnt *VAR_0)
{
 if (VAR_0->cl_auth == ((void*)0))
  return FUNC_2(VAR_0);






 FUNC_1(&VAR_0->cl_count);
 FUNC_3(VAR_0->cl_auth);
 VAR_0->cl_auth = ((void*)0);
 if (FUNC_0(&VAR_0->cl_count))
  return FUNC_2(VAR_0);
 return ((void*)0);
}
