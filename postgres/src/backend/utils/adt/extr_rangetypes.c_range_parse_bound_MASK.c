
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {char* data; } ;
typedef TYPE_1__ StringInfoData ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*,char) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (char*,char const*) ;
 int FUNC_5 (TYPE_1__*) ;

__attribute__((used)) static const char *
FUNC_6(const char *VAR_2, const char *VAR_3,
      char **VAR_4, bool *VAR_5)
{
 StringInfoData VAR_6;


 if (*VAR_3 == ',' || *VAR_3 == ')' || *VAR_3 == ']')
 {
  *VAR_4 = ((void*)0);
  *VAR_5 = 1;
 }
 else
 {

  bool VAR_7 = 0;

  FUNC_5(&VAR_6);
  while (VAR_7 || !(*VAR_3 == ',' || *VAR_3 == ')' || *VAR_3 == ']'))
  {
   char VAR_8 = *VAR_3++;

   if (VAR_8 == '\0')
    FUNC_1(VAR_1,
      (FUNC_2(VAR_0),
       FUNC_4("malformed range literal: \"%s\"",
        VAR_2),
       FUNC_3("Unexpected end of input.")));
   if (VAR_8 == '\\')
   {
    if (*VAR_3 == '\0')
     FUNC_1(VAR_1,
       (FUNC_2(VAR_0),
        FUNC_4("malformed range literal: \"%s\"",
         VAR_2),
        FUNC_3("Unexpected end of input.")));
    FUNC_0(&VAR_6, *VAR_3++);
   }
   else if (VAR_8 == '"')
   {
    if (!VAR_7)
     VAR_7 = 1;
    else if (*VAR_3 == '"')
    {

     FUNC_0(&VAR_6, *VAR_3++);
    }
    else
     VAR_7 = 0;
   }
   else
    FUNC_0(&VAR_6, VAR_8);
  }

  *VAR_4 = VAR_6.data;
  *VAR_5 = 0;
 }

 return VAR_3;
}
