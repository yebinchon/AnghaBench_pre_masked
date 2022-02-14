
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task_struct {scalar_t__ state; int counter; int priority; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (char*,int) ;
 int FUNC_4 (scalar_t__) ;
 scalar_t__* VAR_3 ;

void FUNC_5(void) {
  FUNC_0();
  int VAR_4, VAR_5;
  struct task_struct *VAR_6;
  while (1) {
    VAR_5 = -1;
    VAR_4 = 0;
    for (int VAR_7 = 0; VAR_7 < VAR_0; VAR_7++) {
      VAR_6 = VAR_3[VAR_7];
      if (VAR_6 && VAR_6->state == VAR_1 && VAR_6->counter > VAR_5) {
        VAR_5 = VAR_6->counter;
        VAR_4 = VAR_7;
      }
    }
    if (VAR_5) {
      break;
    }
    for (int VAR_8 = 0; VAR_8 < VAR_0; VAR_8++) {
      VAR_6 = VAR_3[VAR_8];
      if (VAR_6) {
        VAR_6->counter = (VAR_6->counter >> 1) + VAR_6->priority;
      }
    }
  }
  if (VAR_3[VAR_4] != VAR_2) {
    FUNC_3("schedule switch_to %d\r\n", VAR_4);
    FUNC_2();
  }
  FUNC_4(VAR_3[VAR_4]);
  FUNC_1();
}
