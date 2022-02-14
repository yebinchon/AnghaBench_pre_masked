
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ nBusy; scalar_t__ nCursor; scalar_t__ nNodeRef; struct TYPE_5__* zReadAuxSql; int pWriteAux; int pDeleteParent; int pWriteParent; int pReadParent; int pDeleteRowid; int pWriteRowid; int pReadRowid; int pDeleteNode; int pWriteNode; scalar_t__ bCorrupt; scalar_t__ inWrTrans; } ;
typedef TYPE_1__ Rtree ;


 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_4(Rtree *VAR_0){
  VAR_0->nBusy--;
  if( VAR_0->nBusy==0 ){
    VAR_0->inWrTrans = 0;
    FUNC_0( VAR_0->nCursor==0 );
    FUNC_1(VAR_0);
    FUNC_0( VAR_0->nNodeRef==0 || VAR_0->bCorrupt );
    FUNC_2(VAR_0->pWriteNode);
    FUNC_2(VAR_0->pDeleteNode);
    FUNC_2(VAR_0->pReadRowid);
    FUNC_2(VAR_0->pWriteRowid);
    FUNC_2(VAR_0->pDeleteRowid);
    FUNC_2(VAR_0->pReadParent);
    FUNC_2(VAR_0->pWriteParent);
    FUNC_2(VAR_0->pDeleteParent);
    FUNC_2(VAR_0->pWriteAux);
    FUNC_3(VAR_0->zReadAuxSql);
    FUNC_3(VAR_0);
  }
}
