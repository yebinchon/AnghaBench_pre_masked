
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int zStateDb; int zErrmsg; int dbRbu; int rc; } ;
typedef TYPE_1__ sqlite3rbu ;
struct TYPE_7__ {scalar_t__ eType; scalar_t__ pTmpInsert; int zDataTbl; scalar_t__ nTblCol; } ;
typedef TYPE_2__ RbuObjIter ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,scalar_t__*,int *,int ) ;
 char* FUNC_2 (TYPE_1__*,scalar_t__) ;
 int FUNC_3 (char*,int ,int ,char const*,char const*,char*) ;

__attribute__((used)) static void FUNC_4(
  sqlite3rbu *VAR_2,
  RbuObjIter *VAR_3,
  const char *VAR_4,
  const char *VAR_5
){
  int VAR_6 = (VAR_3->eType==VAR_0 || VAR_3->eType==VAR_1);
  char *VAR_7 = FUNC_2(VAR_2, VAR_3->nTblCol + 1 + VAR_6);
  if( VAR_7 ){
    FUNC_0( VAR_3->pTmpInsert==0 );
    VAR_2->rc = FUNC_1(
        VAR_2->dbRbu, &VAR_3->pTmpInsert, &VAR_2->zErrmsg, FUNC_3(
          "INSERT INTO %s.'rbu_tmp_%q'(rbu_control,%s%s) VALUES(%z)",
          VAR_2->zStateDb, VAR_3->zDataTbl, VAR_4, VAR_5, VAR_7
    ));
  }
}
