
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int List ;


 int FUNC_0 (int) ;
 int * VAR_0 ;
 char* FUNC_1 (char*,int,int) ;
 int * FUNC_2 (int *,char*) ;
 int FUNC_3 (char*,char*,int) ;
 int FUNC_4 (char*) ;
 scalar_t__ FUNC_5 (char) ;
 char* FUNC_6 (char*,char) ;
 int FUNC_7 (char*) ;
 int FUNC_8 (char*,char*,int) ;
 int FUNC_9 (char*,int,int) ;

bool
FUNC_10(char *VAR_1, char VAR_2,
       List **VAR_3)
{
 char *VAR_4 = VAR_1;
 bool VAR_5 = 0;

 *VAR_3 = VAR_0;

 while (FUNC_5(*VAR_4))
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
    VAR_7 = FUNC_6(VAR_4 + 1, '"');
    if (VAR_7 == ((void*)0))
     return 0;
    if (VAR_7[1] != '"')
     break;

    FUNC_3(VAR_7, VAR_7 + 1, FUNC_7(VAR_7));
    VAR_4 = VAR_7;
   }

   VAR_4 = VAR_7 + 1;
  }
  else
  {

   char *VAR_8;
   int VAR_9;

   VAR_6 = VAR_4;
   while (*VAR_4 && *VAR_4 != VAR_2 &&
       !FUNC_5(*VAR_4))
    VAR_4++;
   VAR_7 = VAR_4;
   if (VAR_6 == VAR_4)
    return 0;
   VAR_9 = VAR_7 - VAR_6;
   VAR_8 = FUNC_1(VAR_6, VAR_9, 0);
   FUNC_0(FUNC_7(VAR_8) <= VAR_9);
   FUNC_8(VAR_6, VAR_8, VAR_9);
   FUNC_4(VAR_8);
  }

  while (FUNC_5(*VAR_4))
   VAR_4++;

  if (*VAR_4 == VAR_2)
  {
   VAR_4++;
   while (FUNC_5(*VAR_4))
    VAR_4++;

  }
  else if (*VAR_4 == '\0')
   VAR_5 = 1;
  else
   return 0;


  *VAR_7 = '\0';


  FUNC_9(VAR_6, FUNC_7(VAR_6), 0);




  *VAR_3 = FUNC_2(*VAR_3, VAR_6);


 } while (!VAR_5);

 return 1;
}
