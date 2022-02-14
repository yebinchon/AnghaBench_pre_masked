
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ rc; int * dbMain; int zErrmsg; int * dbRbu; } ;
typedef TYPE_1__ sqlite3rbu ;
typedef int sqlite3_stmt ;
typedef int sqlite3 ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int *,int **,int *,char*) ;
 int FUNC_1 (TYPE_1__*,int *) ;
 scalar_t__ FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*,int *,char*,int) ;
 int FUNC_4 (int *,int ) ;
 scalar_t__ FUNC_5 (int *) ;

__attribute__((used)) static void FUNC_6(sqlite3rbu *VAR_2){
  if( VAR_2->rc==VAR_0 ){
    sqlite3 *VAR_3 = (FUNC_2(VAR_2) ? VAR_2->dbRbu : VAR_2->dbMain);
    int VAR_4 = 1000000;
    sqlite3_stmt *VAR_5;

    VAR_2->rc = FUNC_0(VAR_3, &VAR_5, &VAR_2->zErrmsg,
        "PRAGMA schema_version"
    );
    if( VAR_2->rc==VAR_0 ){





      if( VAR_1==FUNC_5(VAR_5) ){
        VAR_4 = FUNC_4(VAR_5, 0);
      }
      FUNC_1(VAR_2, VAR_5);
    }
    if( VAR_2->rc==VAR_0 ){
      FUNC_3(VAR_2, VAR_2->dbMain, "PRAGMA schema_version = %d", VAR_4+1);
    }
  }
}
