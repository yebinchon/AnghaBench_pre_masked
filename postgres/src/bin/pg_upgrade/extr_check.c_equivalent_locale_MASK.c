
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* FUNC_0 (int,char const*) ;
 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (char const*,char const*) ;
 scalar_t__ FUNC_3 (char*,char*,int) ;
 int FUNC_4 (char*) ;
 char* FUNC_5 (char*,char) ;

__attribute__((used)) static bool
FUNC_6(int VAR_0, const char *VAR_1, const char *VAR_2)
{
 const char *VAR_3;
 const char *VAR_4;
 char *VAR_5;
 char *VAR_6;
 int VAR_7;
 int VAR_8;






 if (FUNC_2(VAR_1, VAR_2) == 0)
  return 1;





 VAR_5 = FUNC_0(VAR_0, VAR_1);
 VAR_3 = FUNC_5(VAR_5, '.');
 VAR_7 = VAR_3 ? (VAR_3 - VAR_5) : FUNC_4(VAR_5);

 VAR_6 = FUNC_0(VAR_0, VAR_2);
 VAR_4 = FUNC_5(VAR_6, '.');
 VAR_8 = VAR_4 ? (VAR_4 - VAR_6) : FUNC_4(VAR_6);

 if (VAR_7 == VAR_8 && FUNC_3(VAR_5, VAR_6, VAR_7) == 0)
 {
  FUNC_1(VAR_5);
  FUNC_1(VAR_6);
  return 1;
 }

 FUNC_1(VAR_5);
 FUNC_1(VAR_6);
 return 0;
}
