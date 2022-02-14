
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int cpuset ;
typedef int cpu_set_t ;


 int FUNC_0 (int,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int) ;
 int FUNC_3 (char*) ;
 scalar_t__ FUNC_4 (int ,int,int *) ;

__attribute__((used)) static void FUNC_5(int VAR_0)
{
 cpu_set_t VAR_1;

 if (VAR_0 == -1)
  return;

 FUNC_1(&VAR_1);
 FUNC_0(VAR_0, &VAR_1);

 if (FUNC_4(0, sizeof(VAR_1), &VAR_1)) {
  FUNC_3("sched_setaffinity");
  FUNC_2(1);
 }
}
