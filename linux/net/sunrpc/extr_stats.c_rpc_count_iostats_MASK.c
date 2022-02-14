
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {TYPE_1__* rpc_proc; } ;
struct rpc_task {TYPE_2__ tk_msg; } ;
struct rpc_iostats {int dummy; } ;
struct TYPE_3__ {size_t p_statidx; } ;


 int FUNC_0 (struct rpc_task const*,struct rpc_iostats*) ;

void FUNC_1(const struct rpc_task *VAR_0, struct rpc_iostats *VAR_1)
{
 FUNC_0(VAR_0,
      &VAR_1[VAR_0->tk_msg.rpc_proc->p_statidx]);
}
