
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int List ;


 int * VAR_0 ;
 int * FUNC_0 (int *,char*) ;
 int FUNC_1 (char*,char*,int ) ;
 scalar_t__ FUNC_2 (char) ;
 char* FUNC_3 (char*,char) ;
 int FUNC_4 (char*) ;

bool
FUNC_5(char *VAR_1, char VAR_2,
    List **VAR_3)
{
 char *VAR_4 = VAR_1;
 bool VAR_5 = 0;

 *VAR_3 = VAR_0;

 while (FUNC_2(*VAR_4))
  VAR_4++;

 if (*VAR_4 == '\0')
  return 1;


 do
 {
  char *VAR_6;
  char *VAR_7;

  if (*VAR_4 == '"')
  {

   VAR_6 = VAR_4 + 1;
   for (;;)
   {
    VAR_7 = FUNC_3(VAR_4 + 1, '"');
    if (VAR_7 == ((void*)0))
     return 0;
    if (VAR_7[1] != '"')
     break;

    FUNC_1(VAR_7, VAR_7 + 1, FUNC_4(VAR_7));
    VAR_4 = VAR_7;
   }

   VAR_4 = VAR_7 + 1;
  }
  else
  {

   VAR_6 = VAR_4;
   while (*VAR_4 && *VAR_4 != VAR_2 &&
       !FUNC_2(*VAR_4))
    VAR_4++;
   VAR_7 = VAR_4;
   if (VAR_6 == VAR_4)
    return 0;
  }

  while (FUNC_2(*VAR_4))
   VAR_4++;

  if (*VAR_4 == VAR_2)
  {
   VAR_4++;
   while (FUNC_2(*VAR_4))
    VAR_4++;

  }
  else if (*VAR_4 == '\0')
   VAR_5 = 1;
  else
   return 0;


  *VAR_7 = '\0';




  *VAR_3 = FUNC_0(*VAR_3, VAR_6);


 } while (!VAR_5);

 return 1;
}
