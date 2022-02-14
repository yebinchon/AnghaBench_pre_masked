
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (int) ;
 int * FUNC_1 (char*,char const*) ;

__attribute__((used)) static char **
FUNC_2(char **VAR_0, const char *VAR_1)
{
 int VAR_2 = 1;
 int VAR_3,
    VAR_4,
    VAR_5;
 char **VAR_6;

 for (VAR_3 = 0; VAR_0[VAR_3]; VAR_3++)
  VAR_2++;

 VAR_6 = (char **) FUNC_0(VAR_2 * sizeof(char *));

 for (VAR_4 = 0, VAR_5 = 0; VAR_4 < VAR_2; VAR_4++)
 {
  if (VAR_0[VAR_4] == ((void*)0) || FUNC_1(VAR_0[VAR_4], VAR_1) == ((void*)0))
   VAR_6[VAR_5++] = VAR_0[VAR_4];
 }

 return VAR_6;
}
