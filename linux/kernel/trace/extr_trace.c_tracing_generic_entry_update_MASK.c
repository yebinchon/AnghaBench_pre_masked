
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct trace_entry {int preempt_count; unsigned short type; int flags; int pid; } ;
struct task_struct {int pid; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 struct task_struct* VAR_10 ;
 scalar_t__ FUNC_0 (unsigned long) ;
 scalar_t__ FUNC_1 () ;
 scalar_t__ FUNC_2 () ;

void
FUNC_3(struct trace_entry *VAR_11, unsigned short VAR_12,
        unsigned long VAR_13, int VAR_14)
{
 struct task_struct *VAR_15 = VAR_10;

 VAR_11->preempt_count = VAR_14 & 0xff;
 VAR_11->pid = (VAR_15) ? VAR_15->pid : 0;
 VAR_11->type = VAR_12;
 VAR_11->flags =



  VAR_4 |

  ((VAR_14 & VAR_1 ) ? VAR_7 : 0) |
  ((VAR_14 & VAR_0) ? VAR_3 : 0) |
  ((VAR_14 & VAR_2) ? VAR_9 : 0) |
  (FUNC_2() ? VAR_6 : 0) |
  (FUNC_1() ? VAR_8 : 0);
}
