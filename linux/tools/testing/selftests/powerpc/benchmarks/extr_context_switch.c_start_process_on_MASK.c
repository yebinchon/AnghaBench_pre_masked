
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int cpuset ;
typedef int cpu_set_t ;


 int FUNC_0 (unsigned long,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int) ;
 int FUNC_3 () ;
 int FUNC_4 (char*) ;
 scalar_t__ FUNC_5 (int ,int,int *) ;

__attribute__((used)) static void FUNC_6(void *(*VAR_0)(void *), void *VAR_1, unsigned long VAR_2)
{
 int VAR_3;
 cpu_set_t VAR_4;

 VAR_3 = FUNC_3();
 if (VAR_3 == -1) {
  FUNC_4("fork");
  FUNC_2(1);
 }

 if (VAR_3)
  return;

 FUNC_1(&VAR_4);
 FUNC_0(VAR_2, &VAR_4);

 if (FUNC_5(0, sizeof(VAR_4), &VAR_4)) {
  FUNC_4("sched_setaffinity");
  FUNC_2(1);
 }

 VAR_0(VAR_1);

 FUNC_2(0);
}
