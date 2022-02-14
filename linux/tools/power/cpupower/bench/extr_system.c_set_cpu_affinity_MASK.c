
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int cpu_set_t ;


 int FUNC_0 (unsigned int,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (char*,unsigned int) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 () ;
 int FUNC_5 (char*) ;
 scalar_t__ FUNC_6 (int ,int,int *) ;
 int VAR_0 ;

int FUNC_7(unsigned int VAR_1)
{
 cpu_set_t VAR_2;

 FUNC_1(&VAR_2);
 FUNC_0(VAR_1, &VAR_2);

 FUNC_2("set affinity to cpu #%u\n", VAR_1);

 if (FUNC_6(FUNC_4(), sizeof(cpu_set_t), &VAR_2) < 0) {
  FUNC_5("sched_setaffinity");
  FUNC_3(VAR_0, "warning: unable to set cpu affinity\n");
  return -1;
 }

 return 0;
}
