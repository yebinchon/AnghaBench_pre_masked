
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int sp; } ;
struct task_struct {TYPE_1__ cpu_context; } ;


 int VAR_0 ;
 int FUNC_0 (char*,...) ;
 struct task_struct** VAR_1 ;

void FUNC_1(void) {
  FUNC_0("tasks:\r\n");
  struct task_struct *VAR_2;
  for (int VAR_3 = 0; VAR_3 < VAR_0; VAR_3++) {
    VAR_2 = VAR_1[VAR_3];
    if (!VAR_2)
      return;
    FUNC_0("[%d] sp=%x\r\n", VAR_3, VAR_2->cpu_context.sp);
  }
}
