
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;



__attribute__((used)) static bool FUNC_0(const u8 *VAR_0, size_t VAR_1)
{
 int VAR_2;

 if (!VAR_0)
  return 0;

 for (VAR_2 = 0; VAR_2 < VAR_1; VAR_2++)
  if (VAR_0[VAR_2])
   return 0;

 return 1;
}
