
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int StringInfo ;


 scalar_t__ FUNC_0 (char,int) ;
 int FUNC_1 (int ,char) ;
 int VAR_0 ;

__attribute__((used)) static void
FUNC_2(StringInfo VAR_1, const char *VAR_2)
{
 const char *VAR_3;






 FUNC_1(VAR_1, '\'');
 for (VAR_3 = VAR_2; *VAR_3; VAR_3++)
 {
  char VAR_4 = *VAR_3;

  if (FUNC_0(VAR_4, !VAR_0))
   FUNC_1(VAR_1, VAR_4);
  FUNC_1(VAR_1, VAR_4);
 }
 FUNC_1(VAR_1, '\'');
}
