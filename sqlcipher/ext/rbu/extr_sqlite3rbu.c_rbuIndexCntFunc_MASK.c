
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int dbMain; } ;
typedef TYPE_1__ sqlite3rbu ;
typedef int sqlite3_value ;
typedef int sqlite3_stmt ;
typedef int sqlite3_context ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,int **,char**,int ) ;
 int FUNC_2 (int *,int ) ;
 char* FUNC_3 (int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (char*,int ) ;
 int FUNC_7 (int *,char*,int) ;
 int FUNC_8 (int *,int) ;
 scalar_t__ FUNC_9 (int *) ;
 scalar_t__ FUNC_10 (int *) ;
 int FUNC_11 (int *) ;

__attribute__((used)) static void FUNC_12(
  sqlite3_context *VAR_2,
  int VAR_3,
  sqlite3_value **VAR_4
){
  sqlite3rbu *VAR_5 = (sqlite3rbu*)FUNC_10(VAR_2);
  sqlite3_stmt *VAR_6 = 0;
  char *VAR_7 = 0;
  int VAR_8;

  FUNC_0( VAR_3==1 );

  VAR_8 = FUNC_1(VAR_5->dbMain, &VAR_6, &VAR_7,
      FUNC_6("SELECT count(*) FROM sqlite_master "
        "WHERE type='index' AND tbl_name = %Q", FUNC_11(VAR_4[0]))
  );
  if( VAR_8!=VAR_0 ){
    FUNC_7(VAR_2, VAR_7, -1);
  }else{
    int VAR_9 = 0;
    if( VAR_1==FUNC_9(VAR_6) ){
      VAR_9 = FUNC_2(VAR_6, 0);
    }
    VAR_8 = FUNC_4(VAR_6);
    if( VAR_8==VAR_0 ){
      FUNC_8(VAR_2, VAR_9);
    }else{
      FUNC_7(VAR_2, FUNC_3(VAR_5->dbMain), -1);
    }
  }

  FUNC_5(VAR_7);
}
