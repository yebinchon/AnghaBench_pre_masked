
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rpc_create_args {int cred; int authflavor; int version; int prognumber; int program; } ;
struct rpc_clnt {int cl_cred; TYPE_1__* cl_auth; int cl_vers; int cl_prog; int cl_program; } ;
struct TYPE_2__ {int au_flavor; } ;


 struct rpc_clnt* FUNC_0 (struct rpc_create_args*,struct rpc_clnt*) ;

struct rpc_clnt *FUNC_1(struct rpc_clnt *VAR_0)
{
 struct rpc_create_args VAR_1 = {
  .program = VAR_0->cl_program,
  .prognumber = VAR_0->cl_prog,
  .version = VAR_0->cl_vers,
  .authflavor = VAR_0->cl_auth->au_flavor,
  .cred = VAR_0->cl_cred,
 };
 return FUNC_0(&VAR_1, VAR_0);
}
