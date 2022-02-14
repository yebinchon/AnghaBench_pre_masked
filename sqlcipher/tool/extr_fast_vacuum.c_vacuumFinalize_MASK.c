
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sqlite3_stmt ;
typedef int sqlite3 ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ,char*,char*) ;
 int * FUNC_2 (int *) ;
 char* FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_5(sqlite3_stmt *VAR_1){
  sqlite3 *VAR_2 = FUNC_2(VAR_1);
  int VAR_3 = FUNC_4(VAR_1);
  if( VAR_3 ){
    FUNC_1(VAR_0, "finalize error: %s\n", FUNC_3(VAR_2));
    FUNC_0(1);
  }
}
