
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int pgd; } ;
struct task_struct {TYPE_1__ mm; } ;


 int FUNC_0 (struct task_struct*,struct task_struct*) ;
 struct task_struct* VAR_0 ;
 int FUNC_1 (int ) ;

void FUNC_2(struct task_struct * VAR_1)
{
 if (VAR_0 == VAR_1)
  return;
 struct task_struct * VAR_2 = VAR_0;
 VAR_0 = VAR_1;
 FUNC_1(VAR_1->mm.pgd);
 FUNC_0(VAR_2, VAR_1);
}
