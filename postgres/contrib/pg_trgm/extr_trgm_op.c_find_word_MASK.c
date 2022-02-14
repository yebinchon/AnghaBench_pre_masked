
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (char*) ;
 int FUNC_1 (char*) ;

__attribute__((used)) static char *
FUNC_2(char *VAR_0, int VAR_1, char **VAR_2, int *VAR_3)
{
 char *VAR_4 = VAR_0;

 while (VAR_4 - VAR_0 < VAR_1 && !FUNC_0(VAR_4))
  VAR_4 += FUNC_1(VAR_4);

 if (VAR_4 - VAR_0 >= VAR_1)
  return ((void*)0);

 *VAR_2 = VAR_4;
 *VAR_3 = 0;
 while (*VAR_2 - VAR_0 < VAR_1 && FUNC_0(*VAR_2))
 {
  *VAR_2 += FUNC_1(*VAR_2);
  (*VAR_3)++;
 }

 return VAR_4;
}
