
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
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,int ,int **,int ) ;
 int FUNC_1 (int *,int,int ) ;
 scalar_t__ FUNC_2 (int *,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(
  Fts3Table *VAR_5,
  sqlite3_int64 VAR_6,
  sqlite3_stmt **VAR_7
){
  sqlite3_stmt *VAR_8 = 0;
  int VAR_9;

  VAR_9 = FUNC_0(VAR_5, VAR_4, &VAR_8, 0);
  if( VAR_9==VAR_2 ){
    FUNC_1(VAR_8, 1, VAR_6);
    VAR_9 = FUNC_4(VAR_8);
    if( VAR_9!=VAR_3 || FUNC_2(VAR_8, 0)!=VAR_1 ){
      VAR_9 = FUNC_3(VAR_8);
      if( VAR_9==VAR_2 ) VAR_9 = VAR_0;
      VAR_8 = 0;
    }else{
      VAR_9 = VAR_2;
    }
  }

  *VAR_7 = VAR_8;
  return VAR_9;
}
