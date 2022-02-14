
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rpc_xprt {int dummy; } ;
struct rpc_task_setup {void* callback_data; int flags; struct rpc_call_ops const* callback_ops; struct rpc_cred* rpc_op_cred; struct rpc_message* rpc_message; struct rpc_xprt* rpc_xprt; struct rpc_clnt* rpc_client; } ;
struct rpc_task {int dummy; } ;
struct rpc_message {int * rpc_proc; } ;
struct rpc_cred {int dummy; } ;
struct rpc_clnt {int dummy; } ;
struct rpc_call_ops {int dummy; } ;


 int VAR_0 ;
 struct rpc_call_ops const VAR_1 ;
 struct rpc_task* FUNC_0 (struct rpc_task_setup*) ;
 int VAR_2 ;

__attribute__((used)) static
struct rpc_task *FUNC_1(struct rpc_clnt *VAR_3,
  struct rpc_xprt *VAR_4, struct rpc_cred *VAR_5, int VAR_6,
  const struct rpc_call_ops *VAR_7, void *VAR_8)
{
 struct rpc_message VAR_9 = {
  .rpc_proc = &VAR_2,
 };
 struct rpc_task_setup VAR_10 = {
  .rpc_client = VAR_3,
  .rpc_xprt = VAR_4,
  .rpc_message = &VAR_9,
  .rpc_op_cred = VAR_5,
  .callback_ops = (VAR_7 != ((void*)0)) ? VAR_7 : &VAR_1,
  .callback_data = VAR_8,
  .flags = VAR_6 | VAR_0,
 };

 return FUNC_0(&VAR_10);
}
