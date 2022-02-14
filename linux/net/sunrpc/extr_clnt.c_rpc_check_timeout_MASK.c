
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct rpc_task {int tk_flags; TYPE_2__* tk_xprt; int tk_rqstp; int tk_timeouts; int tk_pid; struct rpc_clnt* tk_client; } ;
struct rpc_clnt {TYPE_1__* cl_program; scalar_t__ cl_chatty; } ;
struct TYPE_4__ {int servername; } ;
struct TYPE_3__ {int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct rpc_task*) ;
 scalar_t__ FUNC_1 (struct rpc_task*) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (struct rpc_task*,int ,int ) ;
 int FUNC_3 (char*,int ) ;
 int FUNC_4 (char*,int ,int ) ;
 int FUNC_5 (struct rpc_task*,int ) ;
 scalar_t__ FUNC_6 (int ) ;
 int FUNC_7 (struct rpc_clnt*) ;
 int FUNC_8 (struct rpc_task*) ;
 scalar_t__ FUNC_9 (int ) ;

__attribute__((used)) static void
FUNC_10(struct rpc_task *VAR_5)
{
 struct rpc_clnt *VAR_6 = VAR_5->tk_client;

 if (FUNC_9(VAR_5->tk_rqstp) == 0)
  return;

 FUNC_3("RPC: %5u call_timeout (major)\n", VAR_5->tk_pid);
 VAR_5->tk_timeouts++;

 if (FUNC_1(VAR_5) && !FUNC_6(VAR_5->tk_rqstp)) {
  FUNC_5(VAR_5, -VAR_1);
  return;
 }

 if (FUNC_0(VAR_5)) {





  if ((VAR_5->tk_flags & VAR_3) &&
      FUNC_6(VAR_5->tk_rqstp))
   return;

  if (VAR_6->cl_chatty) {
   FUNC_4(
    "%s: server %s not responding, timed out\n",
    VAR_6->cl_program->name,
    VAR_5->tk_xprt->servername);
  }
  if (VAR_5->tk_flags & VAR_4)
   FUNC_5(VAR_5, -VAR_1);
  else
   FUNC_2(VAR_5, -VAR_0, -VAR_1);
  return;
 }

 if (!(VAR_5->tk_flags & VAR_2)) {
  VAR_5->tk_flags |= VAR_2;
  if (VAR_6->cl_chatty) {
   FUNC_4(
    "%s: server %s not responding, still trying\n",
    VAR_6->cl_program->name,
    VAR_5->tk_xprt->servername);
  }
 }
 FUNC_7(VAR_6);




 FUNC_8(VAR_5);
}
