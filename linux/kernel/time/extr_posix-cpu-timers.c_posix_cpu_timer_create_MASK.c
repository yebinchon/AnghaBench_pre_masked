
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct task_struct {int dummy; } ;
struct TYPE_3__ {struct task_struct* task; int node; } ;
struct TYPE_4__ {TYPE_1__ cpu; } ;
struct k_itimer {TYPE_2__ it; int * kclock; int it_clock; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct task_struct* FUNC_0 (int ) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static int FUNC_2(struct k_itimer *VAR_2)
{
 struct task_struct *VAR_3 = FUNC_0(VAR_2->it_clock);

 if (!VAR_3)
  return -VAR_0;

 VAR_2->kclock = &VAR_1;
 FUNC_1(&VAR_2->it.cpu.node);
 VAR_2->it.cpu.task = VAR_3;
 return 0;
}
