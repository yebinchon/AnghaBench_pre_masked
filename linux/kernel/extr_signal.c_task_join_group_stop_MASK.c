
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct task_struct {int dummy; } ;
struct signal_struct {int group_stop_count; } ;
struct TYPE_2__ {unsigned long jobctl; struct signal_struct* signal; } ;


 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 TYPE_1__* VAR_3 ;
 scalar_t__ FUNC_0 (struct task_struct*,unsigned long) ;

void FUNC_1(struct task_struct *VAR_4)
{

 unsigned long VAR_5 = VAR_3->jobctl;
 if (VAR_5 & VAR_1) {
  struct signal_struct *VAR_6 = VAR_3->signal;
  unsigned long VAR_7 = VAR_5 & VAR_2;
  unsigned long VAR_8 = VAR_1 | VAR_0;
  if (FUNC_0(VAR_4, VAR_7 | VAR_8)) {
   VAR_6->group_stop_count++;
  }
 }
}
