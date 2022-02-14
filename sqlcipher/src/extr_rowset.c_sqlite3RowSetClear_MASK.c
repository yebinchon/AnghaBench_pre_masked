
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct RowSetChunk {struct RowSetChunk* pNextChunk; } ;
struct TYPE_2__ {int rsFlags; scalar_t__ pForest; scalar_t__ pLast; scalar_t__ pEntry; scalar_t__ nFresh; struct RowSetChunk* pChunk; int db; } ;
typedef TYPE_1__ RowSet ;


 int VAR_0 ;
 int FUNC_0 (int ,struct RowSetChunk*) ;

void FUNC_1(void *VAR_1){
  RowSet *VAR_2 = (RowSet*)VAR_1;
  struct RowSetChunk *VAR_3, *VAR_4;
  for(VAR_3=VAR_2->pChunk; VAR_3; VAR_3 = VAR_4){
    VAR_4 = VAR_3->pNextChunk;
    FUNC_0(VAR_2->db, VAR_3);
  }
  VAR_2->pChunk = 0;
  VAR_2->nFresh = 0;
  VAR_2->pEntry = 0;
  VAR_2->pLast = 0;
  VAR_2->pForest = 0;
  VAR_2->rsFlags = VAR_0;
}
