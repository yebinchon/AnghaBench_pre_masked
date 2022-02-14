
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int rb_root; } ;
struct task_struct {int pi_blocked_on; TYPE_1__ pi_waiters; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;

void FUNC_2(struct task_struct *VAR_0)
{
 FUNC_0(!FUNC_1(&VAR_0->pi_waiters.rb_root));
 FUNC_0(VAR_0->pi_blocked_on);
}
