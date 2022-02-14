
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ rc; int dbMain; int zErrmsg; int dbRbu; } ;
typedef TYPE_1__ sqlite3rbu ;
typedef int sqlite3_stmt ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int ,int **,int *,int ) ;
 int FUNC_1 (TYPE_1__*,int *) ;
 scalar_t__ FUNC_2 (TYPE_1__*,int ,char*,char const*,int ) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (char*,char const*) ;
 scalar_t__ FUNC_5 (int *) ;

__attribute__((used)) static void FUNC_6(sqlite3rbu *VAR_2, const char *VAR_3){
  if( VAR_2->rc==VAR_0 ){
    sqlite3_stmt *VAR_4 = 0;
    VAR_2->rc = FUNC_0(VAR_2->dbRbu, &VAR_4, &VAR_2->zErrmsg,
        FUNC_4("PRAGMA main.%s", VAR_3)
    );
    if( VAR_2->rc==VAR_0 && VAR_1==FUNC_5(VAR_4) ){
      VAR_2->rc = FUNC_2(VAR_2, VAR_2->dbMain, "PRAGMA main.%s = %d",
          VAR_3, FUNC_3(VAR_4, 0)
      );
    }
    FUNC_1(VAR_2, VAR_4);
  }
}
