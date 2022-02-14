
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct task_struct {int dummy; } ;
struct cpuacct {int cpustat; } ;
struct TYPE_2__ {int * cpustat; } ;


 struct cpuacct* FUNC_0 (struct cpuacct*) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 struct cpuacct VAR_0 ;
 struct cpuacct* FUNC_3 (struct task_struct*) ;
 TYPE_1__* FUNC_4 (int ) ;

void FUNC_5(struct task_struct *VAR_1, int VAR_2, u64 VAR_3)
{
 struct cpuacct *VAR_4;

 FUNC_1();
 for (VAR_4 = FUNC_3(VAR_1); VAR_4 != &VAR_0; VAR_4 = FUNC_0(VAR_4))
  FUNC_4(VAR_4->cpustat)->cpustat[VAR_2] += VAR_3;
 FUNC_2();
}
