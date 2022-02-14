
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char const* VAR_0 ;

const char *
FUNC_0(int *VAR_1)
{
 const char *VAR_2;
 const char *VAR_3;

 VAR_2 = VAR_0;

 while (*VAR_2 == ' ' || *VAR_2 == '\n' || *VAR_2 == '\t')
  VAR_2++;

 if (*VAR_2 == '\0')
 {
  *VAR_1 = 0;
  VAR_0 = VAR_2;
  return ((void*)0);
 }




 VAR_3 = VAR_2;

 if (*VAR_2 == '(' || *VAR_2 == ')' ||
  *VAR_2 == '{' || *VAR_2 == '}')
 {

  VAR_2++;
 }
 else
 {

  while (*VAR_2 != '\0' &&
      *VAR_2 != ' ' && *VAR_2 != '\n' &&
      *VAR_2 != '\t' &&
      *VAR_2 != '(' && *VAR_2 != ')' &&
      *VAR_2 != '{' && *VAR_2 != '}')
  {
   if (*VAR_2 == '\\' && VAR_2[1] != '\0')
    VAR_2 += 2;
   else
    VAR_2++;
  }
 }

 *VAR_1 = VAR_2 - VAR_3;


 if (*VAR_1 == 2 && VAR_3[0] == '<' && VAR_3[1] == '>')
  *VAR_1 = 0;

 VAR_0 = VAR_2;

 return VAR_3;
}
