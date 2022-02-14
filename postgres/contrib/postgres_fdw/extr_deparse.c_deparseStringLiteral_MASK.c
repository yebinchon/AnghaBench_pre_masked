
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int StringInfo ;


 char VAR_0 ;
 scalar_t__ FUNC_0 (char,int) ;
 int FUNC_1 (int ,char) ;
 int * FUNC_2 (char const*,char) ;

void
FUNC_3(StringInfo VAR_1, const char *VAR_2)
{
 const char *VAR_3;







 if (FUNC_2(VAR_2, '\\') != ((void*)0))
  FUNC_1(VAR_1, VAR_0);
 FUNC_1(VAR_1, '\'');
 for (VAR_3 = VAR_2; *VAR_3; VAR_3++)
 {
  char VAR_4 = *VAR_3;

  if (FUNC_0(VAR_4, 1))
   FUNC_1(VAR_1, VAR_4);
  FUNC_1(VAR_1, VAR_4);
 }
 FUNC_1(VAR_1, '\'');
}
