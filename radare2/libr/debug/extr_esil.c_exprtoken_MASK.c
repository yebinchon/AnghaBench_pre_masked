
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int RDebug ;


 int FUNC_0 (char const*) ;
 char* FUNC_1 (char*,char const*) ;

__attribute__((used)) static int FUNC_2(RDebug *VAR_0, char *VAR_1, const char *VAR_2, char **VAR_3) {
 char *VAR_4 = FUNC_1 (VAR_1, VAR_2);
 if (VAR_4) {
  *VAR_4 = 0;
  VAR_4 += FUNC_0 (VAR_2);
  *VAR_3 = VAR_4;
  return 1;
 }
 *VAR_3 = ((void*)0);
 return 0;
}
