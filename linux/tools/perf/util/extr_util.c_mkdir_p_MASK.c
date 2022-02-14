
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {int dummy; } ;
typedef int mode_t ;


 scalar_t__ FUNC_0 (char*,int ) ;
 scalar_t__ FUNC_1 (char*,struct stat*) ;
 char* FUNC_2 (char*,char) ;

int FUNC_3(char *VAR_0, mode_t VAR_1)
{
 struct stat VAR_2;
 int VAR_3;
 char *VAR_4 = VAR_0;

 if (*VAR_4 != '/')
  return -1;

 if (FUNC_1(VAR_0, &VAR_2) == 0)
  return 0;

 while (*++VAR_4 == '/');

 while ((VAR_4 = FUNC_2(VAR_4, '/'))) {
  *VAR_4 = '\0';
  VAR_3 = FUNC_1(VAR_0, &VAR_2) && FUNC_0(VAR_0, VAR_1);
  *VAR_4++ = '/';
  if (VAR_3)
   return -1;
  while (*VAR_4 == '/')
   ++VAR_4;
 }
 return (FUNC_1(VAR_0, &VAR_2) && FUNC_0(VAR_0, VAR_1)) ? -1 : 0;
}
