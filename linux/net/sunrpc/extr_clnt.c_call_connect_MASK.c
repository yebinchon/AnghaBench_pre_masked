
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rpc_xprt {int dummy; } ;
struct rpc_task {scalar_t__ tk_status; int tk_flags; int tk_action; int tk_pid; TYPE_1__* tk_rqstp; } ;
struct TYPE_2__ {struct rpc_xprt* rq_xprt; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*,int ,struct rpc_xprt*,char*) ;
 int FUNC_1 (struct rpc_task*,int ) ;
 int FUNC_2 (struct rpc_task*) ;
 scalar_t__ FUNC_3 (struct rpc_task*) ;
 int FUNC_4 (struct rpc_task*) ;
 scalar_t__ FUNC_5 (struct rpc_xprt*) ;
 int FUNC_6 (struct rpc_task*) ;

__attribute__((used)) static void
FUNC_7(struct rpc_task *VAR_4)
{
 struct rpc_xprt *VAR_5 = VAR_4->tk_rqstp->rq_xprt;

 if (FUNC_3(VAR_4)) {
  FUNC_2(VAR_4);
  return;
 }

 if (FUNC_5(VAR_5)) {
  VAR_4->tk_action = VAR_3;
  return;
 }

 FUNC_0("RPC: %5u call_connect xprt %p %s connected\n",
   VAR_4->tk_pid, VAR_5,
   (FUNC_5(VAR_5) ? "is" : "is not"));

 VAR_4->tk_action = VAR_2;
 if (VAR_4->tk_status < 0)
  return;
 if (VAR_4->tk_flags & VAR_1) {
  FUNC_1(VAR_4, -VAR_0);
  return;
 }
 if (!FUNC_6(VAR_4))
  return;
 FUNC_4(VAR_4);
}
