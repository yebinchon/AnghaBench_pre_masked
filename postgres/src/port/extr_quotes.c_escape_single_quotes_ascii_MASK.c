
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (char const,int) ;
 char* FUNC_1 (int) ;
 int FUNC_2 (char const*) ;

char *
FUNC_3(const char *VAR_0)
{
 int VAR_1 = FUNC_2(VAR_0),
    VAR_2,
    VAR_3;
 char *VAR_4 = FUNC_1(VAR_1 * 2 + 1);

 if (!VAR_4)
  return ((void*)0);

 for (VAR_2 = 0, VAR_3 = 0; VAR_2 < VAR_1; VAR_2++)
 {
  if (FUNC_0(VAR_0[VAR_2], 1))
   VAR_4[VAR_3++] = VAR_0[VAR_2];
  VAR_4[VAR_3++] = VAR_0[VAR_2];
 }
 VAR_4[VAR_3] = '\0';
 return VAR_4;
}
