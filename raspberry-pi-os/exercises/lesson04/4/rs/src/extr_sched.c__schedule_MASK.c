
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task_struct {scalar_t__ state; int counter; int priority; struct task_struct* next; } ;


 scalar_t__ VAR_0 ;
 struct task_struct* VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 (struct task_struct*) ;

void FUNC_3(void) {
  FUNC_0();
  int VAR_2;
  struct task_struct *VAR_3, *VAR_4;
  while (1) {
    VAR_2 = -1;
    for (VAR_3 = VAR_1; VAR_3; VAR_3 = VAR_3->next) {
      if (VAR_3 && VAR_3->state == VAR_0 && VAR_3->counter > VAR_2) {
        VAR_2 = VAR_3->counter;
        VAR_4 = VAR_3;
      }
    }
    if (VAR_2) {
      break;
    }
    for (VAR_3 = VAR_1; VAR_3; VAR_3 = VAR_3->next) {
      if (VAR_3) {
        VAR_3->counter = (VAR_3->counter >> 1) + VAR_3->priority;
      }
    }
  }
  FUNC_2(VAR_4);
  FUNC_1();
}
