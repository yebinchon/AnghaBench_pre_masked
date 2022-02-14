
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ rc; int zErrmsg; int dbMain; } ;
typedef TYPE_1__ sqlite3rbu ;
typedef int sqlite3_stmt ;
struct TYPE_8__ {scalar_t__ zIdx; char const* zTbl; } ;
typedef TYPE_2__ RbuObjIter ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int) ;
 void* FUNC_1 (int ,int **,int *,int ) ;
 int FUNC_2 (TYPE_1__*,int *) ;
 char* FUNC_3 (TYPE_1__*,char*,char*,...) ;
 scalar_t__ FUNC_4 (int *,int) ;
 scalar_t__ FUNC_5 (int *,int) ;
 int FUNC_6 (char*,char const*) ;
 scalar_t__ FUNC_7 (int *) ;
 scalar_t__ FUNC_8 (char const*,char*) ;

__attribute__((used)) static char *FUNC_9(sqlite3rbu *VAR_2, RbuObjIter *VAR_3){
  char *VAR_4 = 0;
  FUNC_0( VAR_3->zIdx==0 );
  if( VAR_2->rc==VAR_0 ){
    const char *VAR_5 = "PRIMARY KEY(";
    sqlite3_stmt *VAR_6 = 0;
    sqlite3_stmt *VAR_7 = 0;

    VAR_2->rc = FUNC_1(VAR_2->dbMain, &VAR_6, &VAR_2->zErrmsg,
        FUNC_6("PRAGMA main.index_list = %Q", VAR_3->zTbl)
    );
    while( VAR_2->rc==VAR_0 && VAR_1==FUNC_7(VAR_6) ){
      const char *VAR_8 = (const char*)FUNC_5(VAR_6,3);
      if( VAR_8 && FUNC_8(VAR_8, "pk")==0 ){
        const char *VAR_9 = (const char*)FUNC_5(VAR_6,1);
        if( VAR_9 ){
          VAR_2->rc = FUNC_1(VAR_2->dbMain, &VAR_7, &VAR_2->zErrmsg,
              FUNC_6("PRAGMA main.index_xinfo = %Q", VAR_9)
          );
        }
        break;
      }
    }
    FUNC_2(VAR_2, VAR_6);

    while( VAR_2->rc==VAR_0 && VAR_1==FUNC_7(VAR_7) ){
      if( FUNC_4(VAR_7, 5) ){

        const char *VAR_10 = (const char*)FUNC_5(VAR_7, 2);
        const char *VAR_11 = FUNC_4(VAR_7, 3) ? " DESC" : "";
        VAR_4 = FUNC_3(VAR_2, "%z%s\"%w\"%s", VAR_4, VAR_5, VAR_10, VAR_11);
        VAR_5 = ", ";
      }
    }
    VAR_4 = FUNC_3(VAR_2, "%z)", VAR_4);
    FUNC_2(VAR_2, VAR_7);
  }
  return VAR_4;
}
