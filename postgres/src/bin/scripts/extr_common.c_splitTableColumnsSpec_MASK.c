
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char const*,int) ;
 char* FUNC_1 (char const*) ;

void
FUNC_2(const char *VAR_0, int VAR_1,
       char **VAR_2, const char **VAR_3)
{
 bool VAR_4 = 0;
 const char *VAR_5 = VAR_0;





 while (*VAR_5 && (*VAR_5 != '(' || VAR_4))
 {
  if (*VAR_5 == '"')
  {
   if (VAR_4 && VAR_5[1] == '"')
    VAR_5++;
   else
    VAR_4 = !VAR_4;
   VAR_5++;
  }
  else
   VAR_5 += FUNC_0(VAR_5, VAR_1);
 }
 *VAR_2 = FUNC_1(VAR_0);
 (*VAR_2)[VAR_5 - VAR_0] = '\0';
 *VAR_3 = VAR_5;
}
