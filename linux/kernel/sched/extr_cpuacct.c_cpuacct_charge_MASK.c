
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct task_struct {int dummy; } ;
struct pt_regs {int dummy; } ;
struct cpuacct {int cpuusage; } ;
struct TYPE_2__ {int * usages; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct cpuacct* FUNC_0 (struct cpuacct*) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 struct cpuacct* FUNC_3 (struct task_struct*) ;
 struct pt_regs* FUNC_4 (struct task_struct*) ;
 TYPE_1__* FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (struct pt_regs*) ;

void FUNC_7(struct task_struct *VAR_2, u64 VAR_3)
{
 struct cpuacct *VAR_4;
 int VAR_5 = VAR_0;
 struct pt_regs *VAR_6 = FUNC_4(VAR_2);

 if (VAR_6 && FUNC_6(VAR_6))
  VAR_5 = VAR_1;

 FUNC_1();

 for (VAR_4 = FUNC_3(VAR_2); VAR_4; VAR_4 = FUNC_0(VAR_4))
  FUNC_5(VAR_4->cpuusage)->usages[VAR_5] += VAR_3;

 FUNC_2();
}
