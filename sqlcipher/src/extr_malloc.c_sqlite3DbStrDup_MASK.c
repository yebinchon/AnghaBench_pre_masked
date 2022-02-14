
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sqlite3 ;


 int FUNC_0 (char*,char const*,size_t) ;
 char* FUNC_1 (int *,size_t) ;
 int FUNC_2 (char const*) ;

char *FUNC_3(sqlite3 *VAR_0, const char *VAR_1){
  char *VAR_2;
  size_t VAR_3;
  if( VAR_1==0 ){
    return 0;
  }
  VAR_3 = FUNC_2(VAR_1) + 1;
  VAR_2 = FUNC_1(VAR_0, VAR_3);
  if( VAR_2 ){
    FUNC_0(VAR_2, VAR_1, VAR_3);
  }
  return VAR_2;
}
