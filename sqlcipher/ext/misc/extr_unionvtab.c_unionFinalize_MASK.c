
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sqlite3_stmt ;
typedef int sqlite3 ;


 int VAR_0 ;
 int * FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 char* FUNC_3 (char*,int ) ;

__attribute__((used)) static void FUNC_4(int *VAR_1, sqlite3_stmt *VAR_2, char **VAR_3){
  sqlite3 *VAR_4 = FUNC_0(VAR_2);
  int VAR_5 = FUNC_2(VAR_2);
  if( *VAR_1==VAR_0 ){
    *VAR_1 = VAR_5;
    if( VAR_5 ){
      *VAR_3 = FUNC_3("%s", FUNC_1(VAR_4));
    }
  }
}
