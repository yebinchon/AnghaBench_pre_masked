
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct rpc_clnt {int cl_tasks; int cl_xprt; TYPE_1__* cl_program; } ;
struct TYPE_4__ {int servername; } ;
struct TYPE_3__ {int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int ,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 () ;
 TYPE_2__* FUNC_3 (int ) ;
 int FUNC_4 (struct rpc_clnt*) ;
 int FUNC_5 (struct rpc_clnt*) ;
 int FUNC_6 (int ,int ,int) ;

void FUNC_7(struct rpc_clnt *VAR_2)
{
 FUNC_2();

 FUNC_0("RPC:       shutting down %s client for %s\n",
   VAR_2->cl_program->name,
   FUNC_3(VAR_2->cl_xprt)->servername);

 while (!FUNC_1(&VAR_2->cl_tasks)) {
  FUNC_4(VAR_2);
  FUNC_6(VAR_1,
   FUNC_1(&VAR_2->cl_tasks), 1*VAR_0);
 }

 FUNC_5(VAR_2);
}
