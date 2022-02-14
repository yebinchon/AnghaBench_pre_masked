
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sqlite3_api_routines ;
typedef int sqlite3 ;


 int FUNC_0 (int const*) ;
 char* FUNC_1 (char*) ;

__attribute__((used)) static int FUNC_2(
  sqlite3 *VAR_0,
  char **VAR_1,
  const sqlite3_api_routines *VAR_2
){
  char *VAR_3;
  FUNC_0(VAR_2);
  VAR_3 = FUNC_1("broken autoext!");
  *VAR_1 = VAR_3;
  return 1;
}
