
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int response_type ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (char const) ;
 scalar_t__ FUNC_1 (char*,char*) ;
 int FUNC_2 (char const*) ;

__attribute__((used)) static bool
FUNC_3(const char *VAR_1,
       char *VAR_2)
{
 const char *VAR_3 = VAR_1;




 if (FUNC_2(VAR_1) < 2)
  return 0;
 else if (VAR_1[FUNC_2(VAR_1) - 2] != '\r')
  return 0;
 else
 {
  while (*VAR_3 != ':' && *VAR_3 != '\r')
   VAR_3++;

  if (*VAR_3 != ':')
   return 0;
  else
  {

   char VAR_4[80];
   int VAR_5;

   VAR_3++;
   while (FUNC_0(*VAR_3))
    VAR_3++;
   VAR_5 = 0;
   while (*VAR_3 != ':' && *VAR_3 != '\r' && !FUNC_0(*VAR_3) &&
       VAR_5 < (int) (sizeof(VAR_4) - 1))
    VAR_4[VAR_5++] = *VAR_3++;
   VAR_4[VAR_5] = '\0';
   while (FUNC_0(*VAR_3))
    VAR_3++;
   if (FUNC_1(VAR_4, "USERID") != 0)
    return 0;
   else
   {




    if (*VAR_3 != ':')
     return 0;
    else
    {
     VAR_3++;

     while (*VAR_3 != ':' && *VAR_3 != '\r')
      VAR_3++;
     if (*VAR_3 != ':')
      return 0;
     else
     {
      int VAR_6;

      VAR_3++;
      while (FUNC_0(*VAR_3))
       VAR_3++;

      VAR_6 = 0;
      while (*VAR_3 != '\r' && VAR_6 < VAR_0)
       VAR_2[VAR_6++] = *VAR_3++;
      VAR_2[VAR_6] = '\0';
      return 1;
     }
    }
   }
  }
 }
}
