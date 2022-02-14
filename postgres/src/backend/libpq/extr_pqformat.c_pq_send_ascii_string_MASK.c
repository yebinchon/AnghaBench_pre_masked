
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int StringInfo ;


 scalar_t__ FUNC_0 (char) ;
 int FUNC_1 (int ,char) ;
 int FUNC_2 (int ,char) ;

void
FUNC_3(StringInfo VAR_0, const char *VAR_1)
{
 while (*VAR_1)
 {
  char VAR_2 = *VAR_1++;

  if (FUNC_0(VAR_2))
   VAR_2 = '?';
  FUNC_2(VAR_0, VAR_2);
 }
 FUNC_1(VAR_0, '\0');
}
