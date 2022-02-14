
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rpc_xprt {int sending; struct rpc_task* snd_task; int state; } ;
struct rpc_task {int tk_status; int tk_pid; struct rpc_rqst* tk_rqstp; } ;
struct rpc_rqst {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct rpc_task*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (char*,int ,struct rpc_xprt*) ;
 int FUNC_2 (int *,struct rpc_task*,int *) ;
 int FUNC_3 (int *,struct rpc_task*,int *,int ) ;
 scalar_t__ FUNC_4 (int ,int *) ;
 scalar_t__ FUNC_5 (int ,int *) ;
 int FUNC_6 (struct rpc_xprt*) ;
 int FUNC_7 (struct rpc_xprt*) ;
 int FUNC_8 (struct rpc_rqst*) ;

int FUNC_9(struct rpc_xprt *VAR_3, struct rpc_task *VAR_4)
{
 struct rpc_rqst *VAR_5 = VAR_4->tk_rqstp;

 if (FUNC_4(VAR_1, &VAR_3->state)) {
  if (VAR_4 == VAR_3->snd_task)
   return 1;
  goto out_sleep;
 }
 if (VAR_5 == ((void*)0)) {
  VAR_3->snd_task = VAR_4;
  return 1;
 }
 if (FUNC_5(VAR_2, &VAR_3->state))
  goto out_unlock;
 if (!FUNC_7(VAR_3)) {
  VAR_3->snd_task = VAR_4;
  return 1;
 }
out_unlock:
 FUNC_6(VAR_3);
out_sleep:
 FUNC_1("RPC: %5u failed to lock transport %p\n", VAR_4->tk_pid, VAR_3);
 VAR_4->tk_status = -VAR_0;
 if (FUNC_0(VAR_4))
  FUNC_3(&VAR_3->sending, VAR_4, ((void*)0),
    FUNC_8(VAR_5));
 else
  FUNC_2(&VAR_3->sending, VAR_4, ((void*)0));
 return 0;
}
