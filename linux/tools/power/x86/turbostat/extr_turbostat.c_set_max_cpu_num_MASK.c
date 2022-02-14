
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ max_cpu_num; } ;
typedef int FILE ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 (char*,char*) ;
 int FUNC_2 (int *,char*,unsigned long*) ;
 TYPE_1__ VAR_1 ;

void FUNC_3(void)
{
 FILE *VAR_2;
 unsigned long VAR_3;

 VAR_1.max_cpu_num = 0;
 VAR_2 = FUNC_1(
   "/sys/devices/system/cpu/cpu0/topology/thread_siblings",
   "r");
 while (FUNC_2(VAR_2, "%lx,", &VAR_3) == 1)
  VAR_1.max_cpu_num += VAR_0;
 FUNC_0(VAR_2);
 VAR_1.max_cpu_num--;
}
