
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int sp; } ;
struct task_struct {TYPE_1__ cpu_context; } ;


 int VAR_0 ;
 int FUNC_0 (char*,int,int) ;
 struct task_struct** VAR_1 ;

void FUNC_1()
{
 struct task_struct *VAR_2 = VAR_1[0];
 for (int VAR_3 = 0; (VAR_3 < VAR_0) && VAR_2; VAR_3++){
  VAR_2 = VAR_1[VAR_3];
  if (VAR_2) {
   FUNC_0("    %d: sp: 0x%x\r\n", VAR_3, VAR_2->cpu_context.sp);
  }
 }
}
