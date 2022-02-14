
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int mask ;
typedef int cpu_set_t ;


 scalar_t__ FUNC_0 (int,int *) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*) ;
 scalar_t__ FUNC_4 (int ,int,int *) ;

int FUNC_5(void)
{
 cpu_set_t VAR_1;
 int VAR_2;

 FUNC_1(&VAR_1);

 if (FUNC_4(0, sizeof(VAR_1), &VAR_1)) {
  FUNC_2("sched_getaffinity");
  return -1;
 }


 for (VAR_2 = 8; VAR_2 < VAR_0; VAR_2 += 8)
  if (FUNC_0(VAR_2, &VAR_1))
   return VAR_2;


 for (VAR_2 = VAR_0 - 1; VAR_2 >= 0; VAR_2--)
  if (FUNC_0(VAR_2, &VAR_1))
   return VAR_2;

 FUNC_3("No cpus in affinity mask?!\n");
 return -1;
}
