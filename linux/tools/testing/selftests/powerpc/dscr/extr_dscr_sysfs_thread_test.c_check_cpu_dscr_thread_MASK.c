
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int mask ;
typedef int cpu_set_t ;


 int FUNC_0 (int,int *) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int ,int,int *) ;
 scalar_t__ FUNC_3 (unsigned long) ;

__attribute__((used)) static int FUNC_4(unsigned long VAR_1)
{
 cpu_set_t VAR_2;
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++) {
  FUNC_1(&VAR_2);
  FUNC_0(VAR_3, &VAR_2);
  if (FUNC_2(0, sizeof(VAR_2), &VAR_2))
   continue;

  if (FUNC_3(VAR_1))
   return 1;
 }
 return 0;

}
