
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int StringInfo ;


 int FUNC_0 (int ,char const*,int) ;
 int FUNC_1 (char*) ;
 char* FUNC_2 (char const*,int) ;
 int FUNC_3 (char const*) ;

void
FUNC_4(StringInfo VAR_0, const char *VAR_1)
{
 int VAR_2 = FUNC_3(VAR_1);
 char *VAR_3;

 VAR_3 = FUNC_2(VAR_1, VAR_2);
 if (VAR_3 != VAR_1)
 {
  VAR_2 = FUNC_3(VAR_3);
  FUNC_0(VAR_0, VAR_3, VAR_2 + 1);
  FUNC_1(VAR_3);
 }
 else
  FUNC_0(VAR_0, VAR_1, VAR_2 + 1);
}
