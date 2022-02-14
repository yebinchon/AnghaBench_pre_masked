
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct rpc_program {int number; } ;
struct rpc_create_args {int cred; int authflavor; int version; int prognumber; struct rpc_program const* program; } ;
struct rpc_clnt {int cl_cred; TYPE_1__* cl_auth; } ;
struct TYPE_2__ {int au_flavor; } ;


 struct rpc_clnt* FUNC_0 (int) ;
 scalar_t__ FUNC_1 (struct rpc_clnt*) ;
 struct rpc_clnt* FUNC_2 (struct rpc_create_args*,struct rpc_clnt*) ;
 int FUNC_3 (struct rpc_clnt*) ;
 int FUNC_4 (struct rpc_clnt*) ;

struct rpc_clnt *FUNC_5(struct rpc_clnt *VAR_0,
          const struct rpc_program *VAR_1,
          u32 VAR_2)
{
 struct rpc_create_args VAR_3 = {
  .program = VAR_1,
  .prognumber = VAR_1->number,
  .version = VAR_2,
  .authflavor = VAR_0->cl_auth->au_flavor,
  .cred = VAR_0->cl_cred,
 };
 struct rpc_clnt *VAR_4;
 int VAR_5;

 VAR_4 = FUNC_2(&VAR_3, VAR_0);
 if (FUNC_1(VAR_4))
  goto out;
 VAR_5 = FUNC_3(VAR_4);
 if (VAR_5 != 0) {
  FUNC_4(VAR_4);
  VAR_4 = FUNC_0(VAR_5);
 }
out:
 return VAR_4;
}
