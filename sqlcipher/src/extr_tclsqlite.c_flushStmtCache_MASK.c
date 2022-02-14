
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {struct TYPE_6__* pNext; } ;
struct TYPE_5__ {TYPE_2__* stmtList; scalar_t__ stmtLast; scalar_t__ nStmt; } ;
typedef TYPE_1__ SqliteDb ;
typedef TYPE_2__ SqlPreparedStmt ;


 int FUNC_0 (TYPE_2__*) ;

__attribute__((used)) static void FUNC_1(SqliteDb *VAR_0){
  SqlPreparedStmt *VAR_1;
  SqlPreparedStmt *VAR_2;

  for(VAR_1 = VAR_0->stmtList; VAR_1; VAR_1=VAR_2){
    VAR_2 = VAR_1->pNext;
    FUNC_0(VAR_1);
  }
  VAR_0->nStmt = 0;
  VAR_0->stmtLast = 0;
  VAR_0->stmtList = 0;
}
