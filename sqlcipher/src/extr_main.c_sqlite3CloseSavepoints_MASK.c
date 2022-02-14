
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ isTransactionSavepoint; scalar_t__ nStatement; scalar_t__ nSavepoint; TYPE_2__* pSavepoint; } ;
typedef TYPE_1__ sqlite3 ;
struct TYPE_7__ {struct TYPE_7__* pNext; } ;
typedef TYPE_2__ Savepoint ;


 int FUNC_0 (TYPE_1__*,TYPE_2__*) ;

void FUNC_1(sqlite3 *VAR_0){
  while( VAR_0->pSavepoint ){
    Savepoint *VAR_1 = VAR_0->pSavepoint;
    VAR_0->pSavepoint = VAR_1->pNext;
    FUNC_0(VAR_0, VAR_1);
  }
  VAR_0->nSavepoint = 0;
  VAR_0->nStatement = 0;
  VAR_0->isTransactionSavepoint = 0;
}
