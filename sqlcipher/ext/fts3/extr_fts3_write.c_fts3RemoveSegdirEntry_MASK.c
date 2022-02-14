
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sqlite3_stmt ;
typedef int sqlite3_int64 ;
typedef int Fts3Table ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ,int **,int ) ;
 int FUNC_1 (int *,int,int) ;
 int FUNC_2 (int *,int,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(
  Fts3Table *VAR_2,
  sqlite3_int64 VAR_3,
  int VAR_4
){
  int VAR_5;
  sqlite3_stmt *VAR_6 = 0;

  VAR_5 = FUNC_0(VAR_2, VAR_1, &VAR_6, 0);
  if( VAR_5==VAR_0 ){
    FUNC_2(VAR_6, 1, VAR_3);
    FUNC_1(VAR_6, 2, VAR_4);
    FUNC_4(VAR_6);
    VAR_5 = FUNC_3(VAR_6);
  }

  return VAR_5;
}
