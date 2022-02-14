
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct xprt_create {int dummy; } ;
struct rpc_xprt_switch {int dummy; } ;
struct rpc_xprt {int dummy; } ;
struct rpc_timeout {int dummy; } ;
struct rpc_clnt {struct rpc_clnt* cl_parent; int cl_xpi; struct rpc_timeout* cl_timeout; TYPE_1__* cl_auth; } ;
typedef int rpc_authflavor_t ;
struct TYPE_2__ {int au_flavor; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct rpc_xprt*) ;
 int FUNC_1 (struct rpc_xprt*) ;
 int FUNC_2 (struct rpc_clnt*) ;
 int FUNC_3 (char*,struct rpc_clnt*) ;
 int FUNC_4 (struct rpc_clnt*,int ,int *) ;
 int FUNC_5 (struct rpc_clnt*) ;
 struct rpc_xprt* FUNC_6 (struct rpc_clnt*,struct rpc_xprt*,struct rpc_timeout const*) ;
 int FUNC_7 (struct rpc_clnt*) ;
 int FUNC_8 (struct rpc_clnt*) ;
 int FUNC_9 () ;
 struct rpc_xprt* FUNC_10 (struct xprt_create*) ;
 struct rpc_xprt_switch* FUNC_11 (int *,struct rpc_xprt_switch*) ;
 int FUNC_12 (struct rpc_xprt*) ;
 struct rpc_xprt_switch* FUNC_13 (struct rpc_xprt*,int ) ;
 int FUNC_14 (struct rpc_xprt_switch*) ;

int FUNC_15(struct rpc_clnt *VAR_2,
  struct xprt_create *VAR_3,
  const struct rpc_timeout *VAR_4)
{
 const struct rpc_timeout *VAR_5;
 rpc_authflavor_t VAR_6;
 struct rpc_xprt_switch *VAR_7, *VAR_8;
 struct rpc_xprt *VAR_9, *VAR_10;
 struct rpc_clnt *VAR_11;
 int VAR_12;

 VAR_9 = FUNC_10(VAR_3);
 if (FUNC_0(VAR_9)) {
  FUNC_3("RPC:       failed to create new xprt for clnt %p\n",
   VAR_2);
  return FUNC_1(VAR_9);
 }

 VAR_7 = FUNC_13(VAR_9, VAR_1);
 if (VAR_7 == ((void*)0)) {
  FUNC_12(VAR_9);
  return -VAR_0;
 }

 VAR_6 = VAR_2->cl_auth->au_flavor;

 VAR_5 = VAR_2->cl_timeout;
 VAR_10 = FUNC_6(VAR_2, VAR_9, VAR_4);
 VAR_8 = FUNC_11(&VAR_2->cl_xpi, VAR_7);

 FUNC_8(VAR_2);
 FUNC_2(VAR_2);
 FUNC_5(VAR_2);






 VAR_11 = VAR_2->cl_parent;
 VAR_2->cl_parent = VAR_2;






 VAR_12 = FUNC_4(VAR_2, VAR_6, ((void*)0));
 if (VAR_12)
  goto out_revert;

 FUNC_9();
 if (VAR_11 != VAR_2)
  FUNC_7(VAR_11);
 FUNC_14(VAR_8);
 FUNC_12(VAR_10);
 FUNC_3("RPC:       replaced xprt for clnt %p\n", VAR_2);
 return 0;

out_revert:
 VAR_7 = FUNC_11(&VAR_2->cl_xpi, VAR_8);
 FUNC_6(VAR_2, VAR_10, VAR_5);
 VAR_2->cl_parent = VAR_11;
 FUNC_4(VAR_2, VAR_6, ((void*)0));
 FUNC_14(VAR_7);
 FUNC_12(VAR_9);
 FUNC_3("RPC:       failed to switch xprt for clnt %p\n", VAR_2);
 return VAR_12;
}
