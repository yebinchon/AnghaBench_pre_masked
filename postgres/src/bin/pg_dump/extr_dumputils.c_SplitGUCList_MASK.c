
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (unsigned char) ;
 int FUNC_1 (char*,char*,int) ;
 scalar_t__ FUNC_2 (int) ;
 char* FUNC_3 (char*,char) ;
 int FUNC_4 (char*) ;

bool
FUNC_5(char *VAR_0, char VAR_1,
    char ***VAR_2)
{
 char *VAR_3 = VAR_0;
 bool VAR_4 = 0;
 char **VAR_5;






 *VAR_2 = VAR_5 = (char **)
  FUNC_2((FUNC_4(VAR_0) / 2 + 2) * sizeof(char *));
 *VAR_5 = ((void*)0);

 while (FUNC_0((unsigned char) *VAR_3))
  VAR_3++;

 if (*VAR_3 == '\0')
  return 1;


 do
 {
  char *VAR_6;
  char *VAR_7;

  if (*VAR_3 == '"')
  {

   VAR_6 = VAR_3 + 1;
   for (;;)
   {
    VAR_7 = FUNC_3(VAR_3 + 1, '"');
    if (VAR_7 == ((void*)0))
     return 0;
    if (VAR_7[1] != '"')
     break;

    FUNC_1(VAR_7, VAR_7 + 1, FUNC_4(VAR_7));
    VAR_3 = VAR_7;
   }

   VAR_3 = VAR_7 + 1;
  }
  else
  {

   VAR_6 = VAR_3;
   while (*VAR_3 && *VAR_3 != VAR_1 &&
       !FUNC_0((unsigned char) *VAR_3))
    VAR_3++;
   VAR_7 = VAR_3;
   if (VAR_6 == VAR_3)
    return 0;
  }

  while (FUNC_0((unsigned char) *VAR_3))
   VAR_3++;

  if (*VAR_3 == VAR_1)
  {
   VAR_3++;
   while (FUNC_0((unsigned char) *VAR_3))
    VAR_3++;

  }
  else if (*VAR_3 == '\0')
   VAR_4 = 1;
  else
   return 0;


  *VAR_7 = '\0';




  *VAR_5++ = VAR_6;


 } while (!VAR_4);

 *VAR_5 = ((void*)0);
 return 1;
}
