
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int StringInfo ;


 int FUNC_0 (int ,char) ;
 int FUNC_1 (int ,char*) ;
 scalar_t__ FUNC_2 (unsigned char) ;

void
FUNC_3(StringInfo VAR_0, const char *VAR_1)
{
 if (VAR_1 == ((void*)0) || *VAR_1 == '\0')
 {
  FUNC_1(VAR_0, "<>");
  return;
 }







 if (*VAR_1 == '<' ||
  *VAR_1 == '"' ||
  FUNC_2((unsigned char) *VAR_1) ||
  ((*VAR_1 == '+' || *VAR_1 == '-') &&
   (FUNC_2((unsigned char) VAR_1[1]) || VAR_1[1] == '.')))
  FUNC_0(VAR_0, '\\');
 while (*VAR_1)
 {

  if (*VAR_1 == ' ' || *VAR_1 == '\n' || *VAR_1 == '\t' ||
   *VAR_1 == '(' || *VAR_1 == ')' || *VAR_1 == '{' || *VAR_1 == '}' ||
   *VAR_1 == '\\')
   FUNC_0(VAR_0, '\\');
  FUNC_0(VAR_0, *VAR_1++);
 }
}
