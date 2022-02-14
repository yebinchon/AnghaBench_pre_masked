
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef char u8 ;
struct TYPE_4__ {scalar_t__ rc; int zErrmsg; int dbMain; } ;
typedef TYPE_1__ sqlite3rbu ;
typedef int sqlite3_stmt ;
typedef int aStmt ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_0 (int) ;
 void* FUNC_1 (int ,int **,int *,int ) ;
 int FUNC_2 (TYPE_1__*,int *) ;
 int FUNC_3 (int *,int) ;
 char* FUNC_4 (int *,int) ;
 int FUNC_5 (char*,char const*) ;
 scalar_t__ FUNC_6 (int *) ;

__attribute__((used)) static void FUNC_7(
  sqlite3rbu *VAR_8,
  const char *VAR_9,
  int *VAR_10,
  int *VAR_11,
  int *VAR_12
){






  sqlite3_stmt *VAR_13[4] = {0, 0, 0, 0};

  *VAR_10 = VAR_3;
  *VAR_12 = 0;

  FUNC_0( VAR_8->rc==VAR_6 );
  VAR_8->rc = FUNC_1(VAR_8->dbMain, &VAR_13[0], &VAR_8->zErrmsg,
    FUNC_5(
          "SELECT (sql LIKE 'create virtual%%'), rootpage"
          "  FROM sqlite_master"
          " WHERE name=%Q", VAR_9
  ));
  if( VAR_8->rc!=VAR_6 || FUNC_6(VAR_13[0])!=VAR_7 ){

    goto rbuTableType_end;
  }
  if( FUNC_3(VAR_13[0], 0) ){
    *VAR_10 = VAR_4;
    goto rbuTableType_end;
  }
  *VAR_11 = FUNC_3(VAR_13[0], 1);

  VAR_8->rc = FUNC_1(VAR_8->dbMain, &VAR_13[1], &VAR_8->zErrmsg,
    FUNC_5("PRAGMA index_list=%Q",VAR_9)
  );
  if( VAR_8->rc ) goto rbuTableType_end;
  while( FUNC_6(VAR_13[1])==VAR_7 ){
    const u8 *VAR_14 = FUNC_4(VAR_13[1], 3);
    const u8 *VAR_15 = FUNC_4(VAR_13[1], 1);
    if( VAR_14 && VAR_15 && VAR_14[0]=='p' ){
      VAR_8->rc = FUNC_1(VAR_8->dbMain, &VAR_13[2], &VAR_8->zErrmsg,
          FUNC_5(
            "SELECT rootpage FROM sqlite_master WHERE name = %Q", VAR_15
      ));
      if( VAR_8->rc==VAR_6 ){
        if( FUNC_6(VAR_13[2])==VAR_7 ){
          *VAR_12 = FUNC_3(VAR_13[2], 0);
          *VAR_10 = VAR_0;
        }else{
          *VAR_10 = VAR_5;
        }
      }
      goto rbuTableType_end;
    }
  }

  VAR_8->rc = FUNC_1(VAR_8->dbMain, &VAR_13[3], &VAR_8->zErrmsg,
    FUNC_5("PRAGMA table_info=%Q",VAR_9)
  );
  if( VAR_8->rc==VAR_6 ){
    while( FUNC_6(VAR_13[3])==VAR_7 ){
      if( FUNC_3(VAR_13[3],5)>0 ){
        *VAR_10 = VAR_1;
        goto rbuTableType_end;
      }
    }
    *VAR_10 = VAR_2;
  }

rbuTableType_end: {
    unsigned int VAR_16;
    for(VAR_16=0; VAR_16<sizeof(VAR_13)/sizeof(VAR_13[0]); VAR_16++){
      FUNC_2(VAR_8, VAR_13[VAR_16]);
    }
  }
}
