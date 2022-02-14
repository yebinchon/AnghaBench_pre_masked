
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct rpc_clnt {int cl_cred; int cl_xpi; int cl_xprt; int * cl_metrics; struct rpc_clnt* cl_parent; TYPE_1__* cl_program; } ;
struct TYPE_4__ {int servername; } ;
struct TYPE_3__ {int name; } ;


 int FUNC_0 (char*,int ,int ) ;
 int FUNC_1 (struct rpc_clnt*) ;
 int FUNC_2 (int ) ;
 TYPE_2__* FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct rpc_clnt*) ;
 int FUNC_6 (struct rpc_clnt*) ;
 int FUNC_7 (struct rpc_clnt*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (struct rpc_clnt*) ;
 int FUNC_10 () ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int ) ;

__attribute__((used)) static struct rpc_clnt *
FUNC_13(struct rpc_clnt *VAR_0)
{
 struct rpc_clnt *VAR_1 = ((void*)0);

 FUNC_0("RPC:       destroying %s client for %s\n",
   VAR_0->cl_program->name,
   FUNC_3(VAR_0->cl_xprt)->servername);
 if (VAR_0->cl_parent != VAR_0)
  VAR_1 = VAR_0->cl_parent;
 FUNC_5(VAR_0);
 FUNC_6(VAR_0);
 FUNC_9(VAR_0);
 FUNC_8(VAR_0->cl_metrics);
 VAR_0->cl_metrics = ((void*)0);
 FUNC_12(FUNC_4(VAR_0->cl_xprt));
 FUNC_11(&VAR_0->cl_xpi);
 FUNC_10();
 FUNC_2(VAR_0->cl_cred);
 FUNC_7(VAR_0);
 FUNC_1(VAR_0);
 return VAR_1;
}
