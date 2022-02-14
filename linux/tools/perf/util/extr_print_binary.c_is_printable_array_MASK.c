
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char) ;
 int FUNC_1 (char) ;

int FUNC_2(char *VAR_0, unsigned int VAR_1)
{
 unsigned int VAR_2;

 if (!VAR_0 || !VAR_1 || VAR_0[VAR_1 - 1] != 0)
  return 0;

 VAR_1--;

 for (VAR_2 = 0; VAR_2 < VAR_1; VAR_2++) {
  if (!FUNC_0(VAR_0[VAR_2]) && !FUNC_1(VAR_0[VAR_2]))
   return 0;
 }
 return 1;
}
