
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int original_cpumask ;
typedef int cpumask ;
typedef int cpu_set_t ;


 int FUNC_0 (int,int *) ;
 int FUNC_1 (int,int *) ;
 int FUNC_2 (int *) ;
 int VAR_0 ;
 int FUNC_3 (int ,int,int *) ;
 int FUNC_4 () ;
 int FUNC_5 (int ,int,int *) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static int FUNC_7(void)
{
 int VAR_1, VAR_2, VAR_3;
 cpu_set_t VAR_4;
 cpu_set_t VAR_5;

 VAR_3 = FUNC_6(VAR_0);
 if (VAR_3 < 0)
  return -1;

 VAR_1 = FUNC_4();
 if (VAR_1 < 0)
  return -1;


 FUNC_3(0, sizeof(VAR_5), &VAR_5);

 for (VAR_2 = 0; VAR_2 < VAR_3; VAR_2++) {


  if (VAR_2 == VAR_1)
   continue;


  if (!FUNC_0(VAR_2, &VAR_5))
   continue;

  FUNC_2(&VAR_4);
  FUNC_1(VAR_2, &VAR_4);

  FUNC_5(0, sizeof(VAR_4), &VAR_4);
 }


 FUNC_5(0, sizeof(VAR_5), &VAR_5);
 return 0;
}
