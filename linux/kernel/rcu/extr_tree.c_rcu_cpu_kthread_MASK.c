
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int rcu_cpu_has_work; int rcu_cpu_kthread_status; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 int FUNC_0 (char*) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 TYPE_1__ VAR_3 ;
 int FUNC_6 (int) ;
 void* FUNC_7 (int *) ;
 int FUNC_8 (int ) ;

__attribute__((used)) static void FUNC_9(unsigned int VAR_4)
{
 unsigned int *VAR_5 = FUNC_7(&VAR_3.rcu_cpu_kthread_status);
 char VAR_6, *VAR_7 = FUNC_7(&VAR_3.rcu_cpu_has_work);
 int VAR_8;

 for (VAR_8 = 0; VAR_8 < 10; VAR_8++) {
  FUNC_8(FUNC_0("Start CPU kthread@rcu_wait"));
  FUNC_1();
  *VAR_5 = VAR_0;
  FUNC_3();
  VAR_6 = *VAR_7;
  *VAR_7 = 0;
  FUNC_4();
  if (VAR_6)
   FUNC_5();
  FUNC_2();
  if (*VAR_7 == 0) {
   FUNC_8(FUNC_0("End CPU kthread@rcu_wait"));
   *VAR_5 = VAR_1;
   return;
  }
 }
 *VAR_5 = VAR_2;
 FUNC_8(FUNC_0("Start CPU kthread@rcu_yield"));
 FUNC_6(2);
 FUNC_8(FUNC_0("End CPU kthread@rcu_yield"));
 *VAR_5 = VAR_1;
}
