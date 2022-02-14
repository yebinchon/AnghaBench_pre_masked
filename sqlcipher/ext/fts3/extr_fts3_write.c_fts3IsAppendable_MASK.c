
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sqlite3_stmt ;
typedef int sqlite3_int64 ;
typedef int Fts3Table ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int ,int **,int ) ;
 int FUNC_1 (int *,int,int ) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(Fts3Table *VAR_3, sqlite3_int64 VAR_4, int *VAR_5){
  int VAR_6 = 0;
  sqlite3_stmt *VAR_7 = 0;
  int VAR_8;

  VAR_8 = FUNC_0(VAR_3, VAR_2, &VAR_7, 0);
  if( VAR_8==VAR_0 ){
    FUNC_1(VAR_7, 1, VAR_4);
    if( VAR_1==FUNC_3(VAR_7) ) VAR_6 = 1;
    VAR_8 = FUNC_2(VAR_7);
  }

  *VAR_5 = VAR_6;
  return VAR_8;
}
