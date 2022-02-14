
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct task_struct {unsigned long nvcsw; unsigned long nivcsw; int flags; unsigned long last_switch_count; unsigned long last_switch_time; int pid; int comm; } ;
struct TYPE_2__ {int version; int release; } ;


 unsigned long VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 () ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_1__* FUNC_1 () ;
 unsigned long VAR_5 ;
 int FUNC_2 (char*,...) ;
 int FUNC_3 () ;
 int FUNC_4 (struct task_struct*) ;
 scalar_t__ FUNC_5 (int ,char*) ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ FUNC_6 (unsigned long) ;
 int FUNC_7 () ;
 int FUNC_8 (struct task_struct*) ;
 scalar_t__ FUNC_9 (int) ;

__attribute__((used)) static void FUNC_10(struct task_struct *VAR_8, unsigned long VAR_9)
{
 unsigned long VAR_10 = VAR_8->nvcsw + VAR_8->nivcsw;





 if (FUNC_9(VAR_8->flags & (VAR_2 | VAR_1)))
     return;






 if (FUNC_9(!VAR_10))
  return;

 if (VAR_10 != VAR_8->last_switch_count) {
  VAR_8->last_switch_count = VAR_10;
  VAR_8->last_switch_time = VAR_5;
  return;
 }
 if (FUNC_6(VAR_8->last_switch_time + VAR_9 * VAR_0))
  return;

 FUNC_8(VAR_8);

 if (VAR_6) {
  FUNC_0();
  VAR_4 = 1;
  VAR_3 = 1;
 }





 if (VAR_7) {
  if (VAR_7 > 0)
   VAR_7--;
  FUNC_2("INFO: task %s:%d blocked for more than %ld seconds.\n",
         VAR_8->comm, VAR_8->pid, (VAR_5 - VAR_8->last_switch_time) / VAR_0);
  FUNC_2("      %s %s %.*s\n",
   FUNC_3(), FUNC_1()->release,
   (int)FUNC_5(FUNC_1()->version, " "),
   FUNC_1()->version);
  FUNC_2("\"echo 0 > /proc/sys/kernel/hung_task_timeout_secs\""
   " disables this message.\n");
  FUNC_4(VAR_8);
  VAR_4 = 1;
 }

 FUNC_7();
}
