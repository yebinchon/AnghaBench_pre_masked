
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* FUNC_0 (char const*,int,int,char**) ;
 int FUNC_1 (char*,char const*) ;
 char* FUNC_2 (char*) ;

__attribute__((used)) static char *FUNC_3(const char **VAR_0, int VAR_1, char *VAR_2[])
{
 const char *VAR_3 = *VAR_0;
 const char *VAR_4;
 int VAR_5 = 0;






 if (*VAR_3 != '(') {
  *VAR_0 = VAR_3;
  return FUNC_2("$");
 }

 VAR_3++;
 VAR_4 = VAR_3;
 while (*VAR_4) {
  if (*VAR_4 == '(') {
   VAR_5++;
  } else if (*VAR_4 == ')') {
   if (VAR_5-- == 0)
    break;
  }
  VAR_4++;
 }

 if (!*VAR_4)
  FUNC_1("unterminated reference to '%s': missing ')'", VAR_3);


 *VAR_0 = VAR_4 + 1;

 return FUNC_0(VAR_3, VAR_4 - VAR_3, VAR_1, VAR_2);
}
