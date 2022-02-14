
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char const*,int,char const*) ;
 int FUNC_1 (char const*,int,char const*) ;
 int FUNC_2 (char const*) ;
 int FUNC_3 (char*,char const*) ;
 int FUNC_4 (char*,char const*) ;
 int FUNC_5 (char const*,char*) ;
 char* FUNC_6 (char const*,char) ;

__attribute__((used)) static int FUNC_7(const char *VAR_0, const char *VAR_1)
{
 const char *VAR_2 = VAR_0 + 4;
 const char *VAR_3 = FUNC_6(VAR_2, '.');

 if (!VAR_3) {
  FUNC_3("Config with no key for man viewer: %s", VAR_2);
  return -1;
 }

 if (!FUNC_5(VAR_3, ".path")) {
  if (!VAR_1)
   return FUNC_2(VAR_0);
  return FUNC_1(VAR_2, VAR_3 - VAR_2, VAR_1);
 }
 if (!FUNC_5(VAR_3, ".cmd")) {
  if (!VAR_1)
   return FUNC_2(VAR_0);
  return FUNC_0(VAR_2, VAR_3 - VAR_2, VAR_1);
 }

 FUNC_4("'%s': unsupported man viewer sub key.", VAR_3);
 return 0;
}
