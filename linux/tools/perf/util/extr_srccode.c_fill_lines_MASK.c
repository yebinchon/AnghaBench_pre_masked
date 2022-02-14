
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* FUNC_0 (char*,char,int) ;

__attribute__((used)) static void FUNC_1(char **VAR_0, int VAR_1, char *VAR_2, int VAR_3)
{
 int VAR_4;
 char *VAR_5 = VAR_2 + VAR_3;
 char *VAR_6 = VAR_2;

 if (VAR_3 == 0 || VAR_1 == 0)
  return;
 VAR_4 = 0;
 VAR_0[VAR_4++] = VAR_2;
 while (VAR_6 < VAR_5 && (VAR_6 = FUNC_0(VAR_6, '\n', VAR_5 - VAR_6)) != ((void*)0)) {
  if (VAR_4 >= VAR_1)
   return;
  VAR_0[VAR_4++] = ++VAR_6;
 }
 if (VAR_6 < VAR_5)
  VAR_0[VAR_4] = VAR_6;
}
