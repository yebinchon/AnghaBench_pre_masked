
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sqlite3 ;


 int FUNC_0 (int *,char*) ;
 char* FUNC_1 (int *,char*,char*,...) ;

__attribute__((used)) static char *FUNC_2(sqlite3 *VAR_0, char *VAR_1, char *VAR_2){
  char *VAR_3;
  if( !VAR_1 ){
    VAR_3 = FUNC_1(VAR_0, "name=%Q", VAR_2);
  }else{
    VAR_3 = FUNC_1(VAR_0, "%s OR name=%Q", VAR_1, VAR_2);
    FUNC_0(VAR_0, VAR_1);
  }
  return VAR_3;
}
