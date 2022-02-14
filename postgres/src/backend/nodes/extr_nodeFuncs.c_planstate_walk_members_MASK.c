
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int PlanState ;



__attribute__((used)) static bool
FUNC_0(PlanState **VAR_0, int VAR_1,
        bool (*VAR_2) (), void *VAR_3)
{
 int VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_1; VAR_4++)
 {
  if (VAR_2(VAR_0[VAR_4], VAR_3))
   return 1;
 }

 return 0;
}
