
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int PQExpBuffer ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static char *
FUNC_2(PQExpBuffer VAR_0, char *VAR_1)
{
 FUNC_1(VAR_0);

 while (*VAR_1 && *VAR_1 != '=')
 {



  if (*VAR_1 != '"')
   FUNC_0(VAR_0, *VAR_1++);
  else
  {

   VAR_1++;

   while (!(*VAR_1 == '"' && *(VAR_1 + 1) != '"'))
   {
    if (*VAR_1 == '\0')
     return VAR_1;





    if (*VAR_1 == '"' && *(VAR_1 + 1) == '"')
     VAR_1++;
    FUNC_0(VAR_0, *VAR_1++);
   }
   VAR_1++;
  }
 }
 return VAR_1;
}
