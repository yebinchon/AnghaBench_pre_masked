
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ rc; int nPhaseOneStep; int zErrmsg; int dbRbu; } ;
typedef TYPE_1__ sqlite3rbu ;
typedef int sqlite3_stmt ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 void* FUNC_0 (int ,int **,int *,char*) ;
 int VAR_3 ;
 int FUNC_1 (int *,int ) ;
 scalar_t__ FUNC_2 (int ,char*,int,int ,void*,int ,int ,int ) ;
 void* FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(sqlite3rbu *VAR_4){
  if( VAR_4->rc==VAR_0 ){
    sqlite3_stmt *VAR_5 = 0;
    int VAR_6 = 0;

    VAR_4->nPhaseOneStep = -1;

    VAR_4->rc = FUNC_2(VAR_4->dbRbu,
        "rbu_index_cnt", 1, VAR_2, (void*)VAR_4, VAR_3, 0, 0
    );



    if( VAR_4->rc==VAR_0 ){
      VAR_4->rc = FUNC_0(VAR_4->dbRbu, &VAR_5, &VAR_4->zErrmsg,
          "SELECT 1 FROM sqlite_master WHERE tbl_name = 'rbu_count'"
      );
    }
    if( VAR_4->rc==VAR_0 ){
      if( VAR_1==FUNC_4(VAR_5) ){
        VAR_6 = 1;
      }
      VAR_4->rc = FUNC_3(VAR_5);
    }

    if( VAR_4->rc==VAR_0 && VAR_6 ){
      VAR_4->rc = FUNC_0(VAR_4->dbRbu, &VAR_5, &VAR_4->zErrmsg,
          "SELECT sum(cnt * (1 + rbu_index_cnt(rbu_target_name(tbl))))"
          "FROM rbu_count"
      );
      if( VAR_4->rc==VAR_0 ){
        if( VAR_1==FUNC_4(VAR_5) ){
          VAR_4->nPhaseOneStep = FUNC_1(VAR_5, 0);
        }
        VAR_4->rc = FUNC_3(VAR_5);
      }
    }
  }
}
