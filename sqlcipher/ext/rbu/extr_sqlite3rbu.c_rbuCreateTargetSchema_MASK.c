
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int zErrmsg; int dbMain; void* rc; int dbRbu; } ;
typedef TYPE_1__ sqlite3rbu ;
typedef int sqlite3_stmt ;


 void* VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ) ;
 void* FUNC_1 (int ,int **,int *,char*) ;
 int FUNC_2 (TYPE_1__*,int *) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (int *,int,int ) ;
 scalar_t__ FUNC_5 (int *,int ) ;
 int FUNC_6 (int *,int) ;
 void* FUNC_7 (int ,char const*,int ,int ,int *) ;
 void* FUNC_8 (int *) ;
 scalar_t__ FUNC_9 (int *) ;

__attribute__((used)) static void FUNC_10(sqlite3rbu *VAR_2){
  sqlite3_stmt *VAR_3 = 0;
  sqlite3_stmt *VAR_4 = 0;

  FUNC_0( FUNC_3(VAR_2) );
  VAR_2->rc = FUNC_7(VAR_2->dbMain, "PRAGMA writable_schema=1", 0,0, &VAR_2->zErrmsg);
  if( VAR_2->rc==VAR_0 ){
    VAR_2->rc = FUNC_1(VAR_2->dbRbu, &VAR_3, &VAR_2->zErrmsg,
      "SELECT sql FROM sqlite_master WHERE sql!='' AND rootpage!=0"
      " AND name!='sqlite_sequence' "
      " ORDER BY type DESC"
    );
  }

  while( VAR_2->rc==VAR_0 && FUNC_9(VAR_3)==VAR_1 ){
    const char *VAR_5 = (const char*)FUNC_5(VAR_3, 0);
    VAR_2->rc = FUNC_7(VAR_2->dbMain, VAR_5, 0, 0, &VAR_2->zErrmsg);
  }
  FUNC_2(VAR_2, VAR_3);
  if( VAR_2->rc!=VAR_0 ) return;

  if( VAR_2->rc==VAR_0 ){
    VAR_2->rc = FUNC_1(VAR_2->dbRbu, &VAR_3, &VAR_2->zErrmsg,
        "SELECT * FROM sqlite_master WHERE rootpage=0 OR rootpage IS NULL"
    );
  }

  if( VAR_2->rc==VAR_0 ){
    VAR_2->rc = FUNC_1(VAR_2->dbMain, &VAR_4, &VAR_2->zErrmsg,
        "INSERT INTO sqlite_master VALUES(?,?,?,?,?)"
    );
  }

  while( VAR_2->rc==VAR_0 && FUNC_9(VAR_3)==VAR_1 ){
    int VAR_6;
    for(VAR_6=0; VAR_6<5; VAR_6++){
      FUNC_4(VAR_4, VAR_6+1, FUNC_6(VAR_3, VAR_6));
    }
    FUNC_9(VAR_4);
    VAR_2->rc = FUNC_8(VAR_4);
  }
  if( VAR_2->rc==VAR_0 ){
    VAR_2->rc = FUNC_7(VAR_2->dbMain, "PRAGMA writable_schema=0",0,0,&VAR_2->zErrmsg);
  }

  FUNC_2(VAR_2, VAR_3);
  FUNC_2(VAR_2, VAR_4);
}
