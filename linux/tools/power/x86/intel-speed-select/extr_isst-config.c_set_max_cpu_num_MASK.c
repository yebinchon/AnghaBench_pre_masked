
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*,scalar_t__) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (char*,char*) ;
 int FUNC_3 (int *,char*,unsigned long*) ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static void FUNC_4(void)
{
 FILE *VAR_2;
 unsigned long VAR_3;

 VAR_1 = 0;
 VAR_2 = FUNC_2(
  "/sys/devices/system/cpu/cpu0/topology/thread_siblings", "r");
 while (FUNC_3(VAR_2, "%lx,", &VAR_3) == 1)
  VAR_1 += VAR_0;
 FUNC_1(VAR_2);
 VAR_1--;

 FUNC_0("max cpus %d\n", VAR_1);
}
