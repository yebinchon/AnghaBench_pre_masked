
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct rpc_wait_queue {int qlen; int * tasks; } ;
struct TYPE_3__ {int list; int timer_list; } ;
struct TYPE_4__ {TYPE_1__ tk_wait; } ;
struct rpc_task {int tk_pid; struct rpc_wait_queue* tk_waitqueue; TYPE_2__ u; } ;


 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (struct rpc_wait_queue*) ;
 scalar_t__ FUNC_2 (struct rpc_task*) ;
 scalar_t__ FUNC_3 (struct rpc_task*) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (struct rpc_wait_queue*,struct rpc_task*,unsigned char) ;
 int FUNC_6 (char*,int ,struct rpc_wait_queue*,int ) ;
 int FUNC_7 (int *,int *) ;
 int FUNC_8 (int *,int *) ;
 int FUNC_9 (struct rpc_wait_queue*) ;
 int FUNC_10 (struct rpc_task*) ;
 int FUNC_11 () ;

__attribute__((used)) static void FUNC_12(struct rpc_wait_queue *VAR_0,
  struct rpc_task *VAR_1,
  unsigned char VAR_2)
{
 FUNC_4(FUNC_2(VAR_1));
 if (FUNC_2(VAR_1))
  return;

 FUNC_0(&VAR_1->u.tk_wait.timer_list);
 if (FUNC_1(VAR_0))
  FUNC_5(VAR_0, VAR_1, VAR_2);
 else if (FUNC_3(VAR_1))
  FUNC_7(&VAR_1->u.tk_wait.list, &VAR_0->tasks[0]);
 else
  FUNC_8(&VAR_1->u.tk_wait.list, &VAR_0->tasks[0]);
 VAR_1->tk_waitqueue = VAR_0;
 VAR_0->qlen++;

 FUNC_11();
 FUNC_10(VAR_1);

 FUNC_6("RPC: %5u added to queue %p \"%s\"\n",
   VAR_1->tk_pid, VAR_0, FUNC_9(VAR_0));
}
