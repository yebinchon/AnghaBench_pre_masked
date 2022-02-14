
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sqlite3_value ;
typedef int sqlite3_stmt ;
typedef int Fts3Table ;


 int VAR_0 ;
 int FUNC_0 (int *,int,int **,int **) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(
  int *VAR_1,
  Fts3Table *VAR_2,
  int VAR_3,
  sqlite3_value **VAR_4
){
  sqlite3_stmt *VAR_5;
  int VAR_6;
  if( *VAR_1 ) return;
  VAR_6 = FUNC_0(VAR_2, VAR_3, &VAR_5, VAR_4);
  if( VAR_6==VAR_0 ){
    FUNC_2(VAR_5);
    VAR_6 = FUNC_1(VAR_5);
  }
  *VAR_1 = VAR_6;
}
