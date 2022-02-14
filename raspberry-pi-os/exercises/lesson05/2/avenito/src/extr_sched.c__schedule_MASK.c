
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task_struct {scalar_t__ state; int counter; int priority; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 (struct task_struct*,int) ;
 struct task_struct** VAR_2 ;

void FUNC_3(void)
{
 FUNC_0();
 int VAR_3,VAR_4;
 struct task_struct * VAR_5;
 while (1) {
  VAR_4 = -1;
  VAR_3 = 0;
  for (int VAR_6 = 0; VAR_6 < VAR_0; VAR_6++){
   VAR_5 = VAR_2[VAR_6];
   if (VAR_5 && VAR_5->state == VAR_1 && VAR_5->counter > VAR_4) {
    VAR_4 = VAR_5->counter;
    VAR_3 = VAR_6;
   }
  }
  if (VAR_4) {
   break;
  }
  for (int VAR_7 = 0; VAR_7 < VAR_0; VAR_7++) {
   VAR_5 = VAR_2[VAR_7];
   if (VAR_5) {
    VAR_5->counter = (VAR_5->counter >> 1) + VAR_5->priority;
   }
  }
 }
 FUNC_2(VAR_2[VAR_3], VAR_3);
 FUNC_1();
}
