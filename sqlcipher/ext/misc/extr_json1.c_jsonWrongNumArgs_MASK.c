
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sqlite3_context ;


 int FUNC_0 (char*) ;
 char* FUNC_1 (char*,char const*) ;
 int FUNC_2 (int *,char*,int) ;

__attribute__((used)) static void FUNC_3(
  sqlite3_context *VAR_0,
  const char *VAR_1
){
  char *VAR_2 = FUNC_1("json_%s() needs an odd number of arguments",
                               VAR_1);
  FUNC_2(VAR_0, VAR_2, -1);
  FUNC_0(VAR_2);
}
