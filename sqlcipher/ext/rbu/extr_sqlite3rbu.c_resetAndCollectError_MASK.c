
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sqlite3_stmt ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 char* FUNC_2 (char*,int ) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(sqlite3_stmt *VAR_1, char **VAR_2){
  int VAR_3 = FUNC_3(VAR_1);
  if( VAR_3!=VAR_0 ){
    *VAR_2 = FUNC_2("%s", FUNC_1(FUNC_0(VAR_1)));
  }
  return VAR_3;
}
