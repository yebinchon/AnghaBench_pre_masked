
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct task_struct {int dummy; } ;
struct sighand_struct {int dummy; } ;
struct cpu_timer {scalar_t__ firing; int node; scalar_t__ head; struct task_struct* task; } ;
struct TYPE_2__ {struct cpu_timer cpu; } ;
struct k_itimer {TYPE_1__ it; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (struct cpu_timer*) ;
 struct sighand_struct* FUNC_2 (struct task_struct*,unsigned long*) ;
 int FUNC_3 (struct task_struct*) ;
 scalar_t__ FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (struct task_struct*,unsigned long*) ;

__attribute__((used)) static int FUNC_7(struct k_itimer *VAR_2)
{
 struct cpu_timer *VAR_3 = &VAR_2->it.cpu;
 struct task_struct *VAR_4 = VAR_3->task;
 struct sighand_struct *VAR_5;
 unsigned long VAR_6;
 int VAR_7 = 0;

 if (FUNC_0(!VAR_4))
  return -VAR_0;





 VAR_5 = FUNC_2(VAR_4, &VAR_6);
 if (FUNC_5(VAR_5 == ((void*)0))) {




  FUNC_0(VAR_3->head || FUNC_4(&VAR_3->node));
 } else {
  if (VAR_2->it.cpu.firing)
   VAR_7 = VAR_1;
  else
   FUNC_1(VAR_3);

  FUNC_6(VAR_4, &VAR_6);
 }

 if (!VAR_7)
  FUNC_3(VAR_4);

 return VAR_7;
}
