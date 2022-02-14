
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (char*) ;
 char** FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (char) ;
 int FUNC_5 (scalar_t__,int) ;
 scalar_t__ FUNC_6 (char*) ;

__attribute__((used)) static char **
FUNC_7(char *VAR_1)
{
 char *VAR_2;
 char **VAR_3;
 int VAR_4;

 if (VAR_1 == ((void*)0))
  return ((void*)0);
 VAR_3 = FUNC_1(FUNC_5(FUNC_6(VAR_1) + 1, sizeof *VAR_3));
 VAR_4 = 0;
 for (;;)
 {
  while (FUNC_4(*VAR_1))
   ++VAR_1;
  if (*VAR_1 == '\0' || *VAR_1 == '#')
   break;
  VAR_3[VAR_4++] = VAR_2 = VAR_1;
  do
  {
   if ((*VAR_2 = *VAR_1++) != '"')
    ++VAR_2;
   else
    while ((*VAR_2 = *VAR_1++) != '"')
     if (*VAR_2 != '\0')
      ++VAR_2;
     else
     {
      FUNC_2(FUNC_0("Odd number of quotation marks"));
      FUNC_3(VAR_0);
     }
  } while (*VAR_1 && *VAR_1 != '#' && !FUNC_4(*VAR_1));
  if (FUNC_4(*VAR_1))
   ++VAR_1;
  *VAR_2 = '\0';
 }
 VAR_3[VAR_4] = ((void*)0);
 return VAR_3;
}
