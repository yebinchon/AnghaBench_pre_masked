
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {char const* tsconfname; int langname; } ;


 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (int ,char*) ;
 char* FUNC_2 (char const*) ;
 TYPE_1__* VAR_0 ;

__attribute__((used)) static const char *
FUNC_3(const char *VAR_1)
{
 int VAR_2;
 char *VAR_3,
      *VAR_4;
 if (VAR_1 == ((void*)0))
  VAR_3 = FUNC_2("");
 else
 {
  VAR_4 = VAR_3 = FUNC_2(VAR_1);
  while (*VAR_4 &&
      *VAR_4 != '_' && *VAR_4 != '-' && *VAR_4 != '.' && *VAR_4 != '@')
   VAR_4++;
  *VAR_4 = '\0';
 }

 for (VAR_2 = 0; VAR_0[VAR_2].tsconfname; VAR_2++)
 {
  if (FUNC_1(VAR_0[VAR_2].langname, VAR_3) == 0)
  {
   FUNC_0(VAR_3);
   return VAR_0[VAR_2].tsconfname;
  }
 }

 FUNC_0(VAR_3);
 return ((void*)0);
}
