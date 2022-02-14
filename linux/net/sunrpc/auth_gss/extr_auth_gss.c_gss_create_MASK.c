
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rpc_xprt_switch {int dummy; } ;
struct TYPE_2__ {int xpi_xpswitch; } ;
struct rpc_clnt {TYPE_1__ cl_xpi; struct rpc_clnt* cl_parent; } ;
struct rpc_auth_create_args {int dummy; } ;
struct rpc_auth {int dummy; } ;
struct gss_auth {struct rpc_auth rpc_auth; } ;


 struct rpc_auth* FUNC_0 (struct gss_auth*) ;
 scalar_t__ FUNC_1 (struct gss_auth*) ;
 struct gss_auth* FUNC_2 (struct rpc_auth_create_args const*,struct rpc_clnt*) ;
 struct rpc_xprt_switch* FUNC_3 (int ) ;

__attribute__((used)) static struct rpc_auth *
FUNC_4(const struct rpc_auth_create_args *VAR_0, struct rpc_clnt *VAR_1)
{
 struct gss_auth *VAR_2;
 struct rpc_xprt_switch *VAR_3 = FUNC_3(VAR_1->cl_xpi.xpi_xpswitch);

 while (VAR_1 != VAR_1->cl_parent) {
  struct rpc_clnt *VAR_4 = VAR_1->cl_parent;

  if (FUNC_3(VAR_4->cl_xpi.xpi_xpswitch) != VAR_3)
   break;
  VAR_1 = VAR_4;
 }

 VAR_2 = FUNC_2(VAR_0, VAR_1);
 if (FUNC_1(VAR_2))
  return FUNC_0(VAR_2);
 return &VAR_2->rpc_auth;
}
