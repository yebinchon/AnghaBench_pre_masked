
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rpc_task_setup {int flags; int callback_data; int * callback_ops; struct rpc_message const* rpc_message; struct rpc_clnt* rpc_client; } ;
struct rpc_task {int tk_status; } ;
struct rpc_message {int dummy; } ;
struct rpc_clnt {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct rpc_task*) ;
 int FUNC_1 (struct rpc_task*) ;
 int VAR_1 ;
 int FUNC_2 (int) ;
 int VAR_2 ;
 int FUNC_3 (struct rpc_task*) ;
 int FUNC_4 (int *,int ) ;
 struct rpc_task* FUNC_5 (struct rpc_task_setup*) ;

int FUNC_6(struct rpc_clnt *VAR_3, const struct rpc_message *VAR_4, int VAR_5)
{
 struct rpc_task *VAR_6;
 struct rpc_task_setup VAR_7 = {
  .rpc_client = VAR_3,
  .rpc_message = VAR_4,
  .callback_ops = &VAR_2,
  .flags = VAR_5,
 };
 int VAR_8;

 FUNC_2(VAR_5 & VAR_1);
 if (VAR_5 & VAR_1) {
  FUNC_4(VAR_7.callback_ops,
   VAR_7.callback_data);
  return -VAR_0;
 }

 VAR_6 = FUNC_5(&VAR_7);
 if (FUNC_0(VAR_6))
  return FUNC_1(VAR_6);
 VAR_8 = VAR_6->tk_status;
 FUNC_3(VAR_6);
 return VAR_8;
}
