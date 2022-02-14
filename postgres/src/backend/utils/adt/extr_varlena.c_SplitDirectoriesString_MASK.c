
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int List ;


 int VAR_0 ;
 int * VAR_1 ;
 int FUNC_0 (char*) ;
 int * FUNC_1 (int *,char*) ;
 int FUNC_2 (char*,char*,int) ;
 char* FUNC_3 (char*) ;
 scalar_t__ FUNC_4 (char) ;
 char* FUNC_5 (char*,char) ;
 int FUNC_6 (char*) ;

bool
FUNC_7(char *VAR_2, char VAR_3,
        List **VAR_4)
{
 char *VAR_5 = VAR_2;
 bool VAR_6 = 0;

 *VAR_4 = VAR_1;

 while (FUNC_4(*VAR_5))
  VAR_5++;

 if (*VAR_5 == '\0')
  return 1;


 do
 {
  char *VAR_7;
  char *VAR_8;

  if (*VAR_5 == '"')
  {

   VAR_7 = VAR_5 + 1;
   for (;;)
   {
    VAR_8 = FUNC_5(VAR_5 + 1, '"');
    if (VAR_8 == ((void*)0))
     return 0;
    if (VAR_8[1] != '"')
     break;

    FUNC_2(VAR_8, VAR_8 + 1, FUNC_6(VAR_8));
    VAR_5 = VAR_8;
   }

   VAR_5 = VAR_8 + 1;
  }
  else
  {

   VAR_7 = VAR_8 = VAR_5;
   while (*VAR_5 && *VAR_5 != VAR_3)
   {

    if (!FUNC_4(*VAR_5))
     VAR_8 = VAR_5 + 1;
    VAR_5++;
   }
   if (VAR_7 == VAR_8)
    return 0;
  }

  while (FUNC_4(*VAR_5))
   VAR_5++;

  if (*VAR_5 == VAR_3)
  {
   VAR_5++;
   while (FUNC_4(*VAR_5))
    VAR_5++;

  }
  else if (*VAR_5 == '\0')
   VAR_6 = 1;
  else
   return 0;


  *VAR_8 = '\0';


  if (FUNC_6(VAR_7) >= VAR_0)
   VAR_7[VAR_0 - 1] = '\0';




  VAR_7 = FUNC_3(VAR_7);
  FUNC_0(VAR_7);
  *VAR_4 = FUNC_1(*VAR_4, VAR_7);


 } while (!VAR_6);

 return 1;
}
