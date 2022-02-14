
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (int,int *) ;
 char** VAR_1 ;
 int FUNC_1 (char*,char const*) ;
 int FUNC_2 (char const*) ;

__attribute__((used)) static void FUNC_3(char *VAR_2, size_t VAR_3)
{
 int VAR_4;
 bool VAR_5 = 1;

 VAR_2[0] = '\0';
 for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++) {
  const char *VAR_6 = VAR_1[VAR_4];

  if (!FUNC_0(VAR_4, ((void*)0)))
   continue;
  if (!VAR_6)
   continue;
  if (VAR_6[0] == '<')
   continue;

  if (FUNC_2(VAR_2) + FUNC_2(VAR_6) + 2 >= VAR_3)
   return;

  if (!VAR_5)
   FUNC_1(VAR_2, ",");
  else
   VAR_5 = 0;
  FUNC_1(VAR_2, VAR_6);
 }
}
