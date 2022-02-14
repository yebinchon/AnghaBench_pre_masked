
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {char* data; } ;
typedef TYPE_1__ StringInfoData ;


 int FUNC_0 (TYPE_1__*,char) ;
 int FUNC_1 (TYPE_1__*) ;
 scalar_t__ FUNC_2 (unsigned char) ;

__attribute__((used)) static char *
FUNC_3(const char *VAR_0)
{
 bool VAR_1;
 const char *VAR_2;
 StringInfoData VAR_3;

 FUNC_1(&VAR_3);


 VAR_1 = (VAR_0[0] == '\0');
 for (VAR_2 = VAR_0; *VAR_2; VAR_2++)
 {
  char VAR_4 = *VAR_2;

  if (VAR_4 == '"' || VAR_4 == '\\' ||
   VAR_4 == '(' || VAR_4 == ')' ||
   VAR_4 == '[' || VAR_4 == ']' ||
   VAR_4 == ',' ||
   FUNC_2((unsigned char) VAR_4))
  {
   VAR_1 = 1;
   break;
  }
 }


 if (VAR_1)
  FUNC_0(&VAR_3, '"');
 for (VAR_2 = VAR_0; *VAR_2; VAR_2++)
 {
  char VAR_5 = *VAR_2;

  if (VAR_5 == '"' || VAR_5 == '\\')
   FUNC_0(&VAR_3, VAR_5);
  FUNC_0(&VAR_3, VAR_5);
 }
 if (VAR_1)
  FUNC_0(&VAR_3, '"');

 return VAR_3.data;
}
