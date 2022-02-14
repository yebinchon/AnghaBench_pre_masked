
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct task_struct {int exit_state; } ;
struct sighand_struct {int dummy; } ;
struct cpu_timer {struct task_struct* task; } ;
struct TYPE_2__ {struct cpu_timer cpu; } ;
struct k_itimer {int it_clock; TYPE_1__ it; } ;
typedef int clockid_t ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (struct k_itimer*) ;
 int FUNC_4 (struct k_itimer*,int ) ;
 int FUNC_5 (int ,struct task_struct*) ;
 int FUNC_6 (int ,struct task_struct*,int) ;
 int FUNC_7 (struct cpu_timer*,int ) ;
 struct sighand_struct* FUNC_8 (struct task_struct*,unsigned long*) ;
 scalar_t__ FUNC_9 (struct task_struct*) ;
 scalar_t__ FUNC_10 (int ) ;
 int FUNC_11 (struct task_struct*,unsigned long*) ;

__attribute__((used)) static void FUNC_12(struct k_itimer *VAR_0)
{
 clockid_t VAR_1 = FUNC_1(VAR_0->it_clock);
 struct cpu_timer *VAR_2 = &VAR_0->it.cpu;
 struct task_struct *VAR_3 = VAR_2->task;
 struct sighand_struct *VAR_4;
 unsigned long VAR_5;
 u64 VAR_6;

 if (FUNC_2(!VAR_3))
  return;




 if (FUNC_0(VAR_0->it_clock)) {
  VAR_6 = FUNC_5(VAR_1, VAR_3);
  FUNC_4(VAR_0, VAR_6);
  if (FUNC_10(VAR_3->exit_state))
   return;


  VAR_4 = FUNC_8(VAR_3, &VAR_5);
  if (!VAR_4)
   return;
 } else {




  VAR_4 = FUNC_8(VAR_3, &VAR_5);
  if (FUNC_10(VAR_4 == ((void*)0))) {




   FUNC_7(VAR_2, 0);
   return;
  } else if (FUNC_10(VAR_3->exit_state) && FUNC_9(VAR_3)) {

   goto unlock;
  }
  VAR_6 = FUNC_6(VAR_1, VAR_3, 1);
  FUNC_4(VAR_0, VAR_6);

 }




 FUNC_3(VAR_0);
unlock:
 FUNC_11(VAR_3, &VAR_5);
}
