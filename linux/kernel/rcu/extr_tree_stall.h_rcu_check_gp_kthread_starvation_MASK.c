
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct task_struct {int state; } ;
struct TYPE_2__ {int gp_state; int gp_flags; int gp_seq; int name; int gp_activity; struct task_struct* gp_kthread; } ;


 int VAR_0 ;
 unsigned long FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 unsigned long VAR_1 ;
 int FUNC_2 (char*,...) ;
 scalar_t__ FUNC_3 (int *) ;
 TYPE_1__ VAR_2 ;
 int FUNC_4 (struct task_struct*) ;
 int FUNC_5 (struct task_struct*) ;
 int FUNC_6 (struct task_struct*) ;

__attribute__((used)) static void FUNC_7(void)
{
 struct task_struct *VAR_3 = VAR_2.gp_kthread;
 unsigned long VAR_4;

 VAR_4 = VAR_1 - FUNC_0(VAR_2.gp_activity);
 if (VAR_4 > 2 * VAR_0) {
  FUNC_2("%s kthread starved for %ld jiffies! g%ld f%#x %s(%d) ->state=%#lx ->cpu=%d\n",
         VAR_2.name, VAR_4,
         (long)FUNC_3(&VAR_2.gp_seq),
         FUNC_0(VAR_2.gp_flags),
         FUNC_1(VAR_2.gp_state), VAR_2.gp_state,
         VAR_3 ? VAR_3->state : ~0, VAR_3 ? FUNC_5(VAR_3) : -1);
  if (VAR_3) {
   FUNC_2("RCU grace-period kthread stack dump:\n");
   FUNC_4(VAR_3);
   FUNC_6(VAR_3);
  }
 }
}
