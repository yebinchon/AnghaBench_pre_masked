
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {struct TYPE_4__* zCandidates; int hIdx; int pWrite; int pTable; int pStatement; int pScan; int dbv; int dbm; } ;
typedef TYPE_1__ sqlite3expert ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (TYPE_1__*) ;

void FUNC_7(sqlite3expert *VAR_0){
  if( VAR_0 ){
    FUNC_5(VAR_0->dbm);
    FUNC_5(VAR_0->dbv);
    FUNC_1(VAR_0->pScan, 0);
    FUNC_2(VAR_0->pStatement, 0);
    FUNC_3(VAR_0->pTable);
    FUNC_4(VAR_0->pWrite);
    FUNC_0(&VAR_0->hIdx);
    FUNC_6(VAR_0->zCandidates);
    FUNC_6(VAR_0);
  }
}
