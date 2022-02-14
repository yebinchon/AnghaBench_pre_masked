
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int rpc_cred; int rpc_resp; int rpc_argp; int rpc_proc; } ;
struct rpc_task {TYPE_1__ tk_msg; } ;
struct rpc_message {int * rpc_cred; int rpc_resp; int rpc_argp; int rpc_proc; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void
FUNC_1(struct rpc_task *VAR_0, const struct rpc_message *VAR_1)
{
 if (VAR_1 != ((void*)0)) {
  VAR_0->tk_msg.rpc_proc = VAR_1->rpc_proc;
  VAR_0->tk_msg.rpc_argp = VAR_1->rpc_argp;
  VAR_0->tk_msg.rpc_resp = VAR_1->rpc_resp;
  if (VAR_1->rpc_cred != ((void*)0))
   VAR_0->tk_msg.rpc_cred = FUNC_0(VAR_1->rpc_cred);
 }
}
