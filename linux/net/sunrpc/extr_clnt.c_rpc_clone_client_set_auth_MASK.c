
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rpc_create_args {int cred; int authflavor; int version; int prognumber; int program; } ;
struct rpc_clnt {int cl_cred; int cl_vers; int cl_prog; int cl_program; } ;
typedef int rpc_authflavor_t ;


 struct rpc_clnt* FUNC_0 (struct rpc_create_args*,struct rpc_clnt*) ;

struct rpc_clnt *
FUNC_1(struct rpc_clnt *VAR_0, rpc_authflavor_t VAR_1)
{
 struct rpc_create_args VAR_2 = {
  .program = VAR_0->cl_program,
  .prognumber = VAR_0->cl_prog,
  .version = VAR_0->cl_vers,
  .authflavor = VAR_1,
  .cred = VAR_0->cl_cred,
 };
 return FUNC_0(&VAR_2, VAR_0);
}
