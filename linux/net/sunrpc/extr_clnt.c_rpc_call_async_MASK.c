
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rpc_task_setup {void* callback_data; int flags; struct rpc_call_ops const* callback_ops; struct rpc_message const* rpc_message; struct rpc_clnt* rpc_client; } ;
struct rpc_task {int dummy; } ;
struct rpc_message {int dummy; } ;
struct rpc_clnt {int dummy; } ;
struct rpc_call_ops {int dummy; } ;


 scalar_t__ FUNC_0 (struct rpc_task*) ;
 int FUNC_1 (struct rpc_task*) ;
 int VAR_0 ;
 int FUNC_2 (struct rpc_task*) ;
 struct rpc_task* FUNC_3 (struct rpc_task_setup*) ;

int
FUNC_4(struct rpc_clnt *VAR_1, const struct rpc_message *VAR_2, int VAR_3,
        const struct rpc_call_ops *VAR_4, void *VAR_5)
{
 struct rpc_task *VAR_6;
 struct rpc_task_setup VAR_7 = {
  .rpc_client = VAR_1,
  .rpc_message = VAR_2,
  .callback_ops = VAR_4,
  .callback_data = VAR_5,
  .flags = VAR_3|VAR_0,
 };

 VAR_6 = FUNC_3(&VAR_7);
 if (FUNC_0(VAR_6))
  return FUNC_1(VAR_6);
 FUNC_2(VAR_6);
 return 0;
}
