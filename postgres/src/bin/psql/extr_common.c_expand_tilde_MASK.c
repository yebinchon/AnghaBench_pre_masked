
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct passwd {int pw_dir; } ;
typedef int home ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 struct passwd* FUNC_2 (char*) ;
 char* FUNC_3 (char*,char*,char*) ;
 int FUNC_4 (char*,int ,int) ;
 scalar_t__ FUNC_5 (char*) ;

void
FUNC_6(char **VAR_1)
{
 if (!VAR_1 || !(*VAR_1))
  return;
 if (**VAR_1 == '~')
 {
  char *VAR_2;
  char VAR_3,
       *VAR_4;
  struct passwd *VAR_5;
  char VAR_6[VAR_0];

  VAR_2 = *VAR_1;
  *VAR_6 = '\0';

  VAR_4 = VAR_2 + 1;
  while (*VAR_4 != '/' && *VAR_4 != '\0')
   VAR_4++;

  VAR_3 = *VAR_4;
  *VAR_4 = '\0';

  if (*(VAR_2 + 1) == '\0')
   FUNC_1(VAR_6);
  else if ((VAR_5 = FUNC_2(VAR_2 + 1)) != ((void*)0))
   FUNC_4(VAR_6, VAR_5->pw_dir, sizeof(VAR_6));

  *VAR_4 = VAR_3;
  if (FUNC_5(VAR_6) != 0)
  {
   char *VAR_7;

   VAR_7 = FUNC_3("%s%s", VAR_6, VAR_4);
   FUNC_0(VAR_2);
   *VAR_1 = VAR_7;
  }
 }


 return;
}
