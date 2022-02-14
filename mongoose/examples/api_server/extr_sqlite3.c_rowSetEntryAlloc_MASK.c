
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct RowSetEntry {int dummy; } ;
struct RowSetChunk {int aEntry; struct RowSetChunk* pNextChunk; } ;
struct TYPE_3__ {scalar_t__ nFresh; int pFresh; struct RowSetChunk* pChunk; int db; } ;
typedef TYPE_1__ RowSet ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 struct RowSetChunk* FUNC_1 (int ,int) ;

__attribute__((used)) static struct RowSetEntry *FUNC_2(RowSet *VAR_1){
  FUNC_0( VAR_1!=0 );
  if( VAR_1->nFresh==0 ){
    struct RowSetChunk *VAR_2;
    VAR_2 = FUNC_1(VAR_1->db, sizeof(*VAR_2));
    if( VAR_2==0 ){
      return 0;
    }
    VAR_2->pNextChunk = VAR_1->pChunk;
    VAR_1->pChunk = VAR_2;
    VAR_1->pFresh = VAR_2->aEntry;
    VAR_1->nFresh = VAR_0;
  }
  VAR_1->nFresh--;
  return VAR_1->pFresh++;
}
