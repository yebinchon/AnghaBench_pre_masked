
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sqlite3 ;


 scalar_t__ FUNC_0 (int) ;
 char* FUNC_1 (int *,char const*,int) ;
 scalar_t__ FUNC_2 (char const) ;

char *FUNC_3(sqlite3 *VAR_0, const char *VAR_1, const char *VAR_2){
  int VAR_3;
  while( FUNC_2(VAR_1[0]) ) VAR_1++;
  VAR_3 = (int)(VAR_2 - VAR_1);
  while( FUNC_0(VAR_3>0) && FUNC_2(VAR_1[VAR_3-1]) ) VAR_3--;
  return FUNC_1(VAR_0, VAR_1, VAR_3);
}
