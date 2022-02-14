
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct task_struct {int dummy; } ;
struct sighand_struct {int dummy; } ;
struct cpu_timer {struct task_struct* task; } ;
struct TYPE_3__ {struct cpu_timer cpu; } ;
struct k_itimer {int it_clock; int it_interval; TYPE_1__ it; } ;
struct TYPE_4__ {int tv_nsec; scalar_t__ tv_sec; } ;
struct itimerspec64 {TYPE_2__ it_value; int it_interval; } ;
typedef int clockid_t ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int) ;
 scalar_t__ FUNC_3 (int ,struct task_struct*) ;
 scalar_t__ FUNC_4 (int ,struct task_struct*,int) ;
 scalar_t__ FUNC_5 (struct cpu_timer*) ;
 int FUNC_6 (struct cpu_timer*,int ) ;
 int FUNC_7 (int ) ;
 struct sighand_struct* FUNC_8 (struct task_struct*,unsigned long*) ;
 TYPE_2__ FUNC_9 (scalar_t__) ;
 scalar_t__ FUNC_10 (int ) ;
 int FUNC_11 (struct task_struct*,unsigned long*) ;

__attribute__((used)) static void FUNC_12(struct k_itimer *VAR_0, struct itimerspec64 *VAR_1)
{
 clockid_t VAR_2 = FUNC_1(VAR_0->it_clock);
 struct cpu_timer *VAR_3 = &VAR_0->it.cpu;
 u64 VAR_4, VAR_5 = FUNC_5(VAR_3);
 struct task_struct *VAR_6 = VAR_3->task;

 if (FUNC_2(!VAR_6))
  return;




 VAR_1->it_interval = FUNC_7(VAR_0->it_interval);

 if (!VAR_5)
  return;




 if (FUNC_0(VAR_0->it_clock)) {
  VAR_4 = FUNC_3(VAR_2, VAR_6);
 } else {
  struct sighand_struct *VAR_7;
  unsigned long VAR_8;






  VAR_7 = FUNC_8(VAR_6, &VAR_8);
  if (FUNC_10(VAR_7 == ((void*)0))) {





   FUNC_6(VAR_3, 0);
   return;
  } else {
   VAR_4 = FUNC_4(VAR_2, VAR_6, 0);
   FUNC_11(VAR_6, &VAR_8);
  }
 }

 if (VAR_4 < VAR_5) {
  VAR_1->it_value = FUNC_9(VAR_5 - VAR_4);
 } else {




  VAR_1->it_value.tv_nsec = 1;
  VAR_1->it_value.tv_sec = 0;
 }
}
