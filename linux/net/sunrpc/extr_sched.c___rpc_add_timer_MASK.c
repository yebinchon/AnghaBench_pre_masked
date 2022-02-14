
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int list; int expires; } ;
struct rpc_wait_queue {TYPE_3__ timer_list; } ;
struct TYPE_4__ {int timer_list; } ;
struct TYPE_5__ {TYPE_1__ tk_wait; } ;
struct rpc_task {unsigned long tk_timeout; TYPE_2__ u; int tk_pid; } ;


 int FUNC_0 (char*,int ,int ) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int *,int *) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (struct rpc_wait_queue*,unsigned long) ;
 scalar_t__ FUNC_5 (unsigned long,int ) ;

__attribute__((used)) static void
FUNC_6(struct rpc_wait_queue *VAR_1, struct rpc_task *VAR_2,
  unsigned long VAR_3)
{
 FUNC_0("RPC: %5u setting alarm for %u ms\n",
  VAR_2->tk_pid, FUNC_1(VAR_3 - VAR_0));

 VAR_2->tk_timeout = VAR_3;
 if (FUNC_3(&VAR_1->timer_list.list) || FUNC_5(VAR_3, VAR_1->timer_list.expires))
  FUNC_4(VAR_1, VAR_3);
 FUNC_2(&VAR_2->u.tk_wait.timer_list, &VAR_1->timer_list.list);
}
