
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct rpc_task {int * tk_action; int tk_calldata; TYPE_2__* tk_ops; TYPE_1__* tk_client; } ;
struct TYPE_4__ {int (* rpc_call_done ) (struct rpc_task*,int ) ;int (* rpc_count_stats ) (struct rpc_task*,int ) ;} ;
struct TYPE_3__ {int cl_metrics; } ;


 int FUNC_0 (struct rpc_task*,int ) ;
 int FUNC_1 (struct rpc_task*) ;
 int FUNC_2 (struct rpc_task*,int ) ;
 int FUNC_3 (struct rpc_task*,int ) ;
 int FUNC_4 (struct rpc_task*) ;

void FUNC_5(struct rpc_task *VAR_0)
{
 VAR_0->tk_action = ((void*)0);
 if (VAR_0->tk_ops->rpc_count_stats)
  VAR_0->tk_ops->rpc_count_stats(VAR_0, VAR_0->tk_calldata);
 else if (VAR_0->tk_client)
  FUNC_0(VAR_0, VAR_0->tk_client->cl_metrics);
 if (VAR_0->tk_ops->rpc_call_done != ((void*)0)) {
  VAR_0->tk_ops->rpc_call_done(VAR_0, VAR_0->tk_calldata);
  if (VAR_0->tk_action != ((void*)0)) {

   FUNC_4(VAR_0);
   FUNC_1(VAR_0);
  }
 }
}
