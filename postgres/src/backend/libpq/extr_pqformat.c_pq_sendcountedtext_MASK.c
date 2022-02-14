
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int StringInfo ;


 int FUNC_0 (int ,char const*,int) ;
 int FUNC_1 (char*) ;
 char* FUNC_2 (char const*,int) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (char*) ;

void
FUNC_5(StringInfo VAR_0, const char *VAR_1, int VAR_2,
       bool VAR_3)
{
 int VAR_4 = VAR_3 ? 4 : 0;
 char *VAR_5;

 VAR_5 = FUNC_2(VAR_1, VAR_2);
 if (VAR_5 != VAR_1)
 {
  VAR_2 = FUNC_4(VAR_5);
  FUNC_3(VAR_0, VAR_2 + VAR_4);
  FUNC_0(VAR_0, VAR_5, VAR_2);
  FUNC_1(VAR_5);
 }
 else
 {
  FUNC_3(VAR_0, VAR_2 + VAR_4);
  FUNC_0(VAR_0, VAR_1, VAR_2);
 }
}
