
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct cpupri {TYPE_1__* pri_to_cpu; int cpu_to_pri; } ;
struct TYPE_2__ {int mask; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;

void FUNC_2(struct cpupri *VAR_1)
{
 int VAR_2;

 FUNC_1(VAR_1->cpu_to_pri);
 for (VAR_2 = 0; VAR_2 < VAR_0; VAR_2++)
  FUNC_0(VAR_1->pri_to_cpu[VAR_2].mask);
}
