
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct rpc_wait_queue {int qlen; } ;
struct TYPE_3__ {int list; } ;
struct TYPE_4__ {TYPE_1__ tk_wait; } ;
struct rpc_task {int tk_pid; TYPE_2__ u; } ;


 scalar_t__ FUNC_0 (struct rpc_wait_queue*) ;
 int FUNC_1 (struct rpc_wait_queue*,struct rpc_task*) ;
 int FUNC_2 (struct rpc_task*) ;
 int FUNC_3 (char*,int ,struct rpc_wait_queue*,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct rpc_wait_queue*) ;

__attribute__((used)) static void FUNC_6(struct rpc_wait_queue *VAR_0, struct rpc_task *VAR_1)
{
 FUNC_1(VAR_0, VAR_1);
 if (FUNC_0(VAR_0))
  FUNC_2(VAR_1);
 else
  FUNC_4(&VAR_1->u.tk_wait.list);
 VAR_0->qlen--;
 FUNC_3("RPC: %5u removed from queue %p \"%s\"\n",
   VAR_1->tk_pid, VAR_0, FUNC_5(VAR_0));
}
