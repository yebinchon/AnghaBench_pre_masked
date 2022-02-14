
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int bTotalsValid; int aTotalSize; int nTotalRow; int pIndex; } ;
typedef TYPE_1__ Fts5Storage ;


 int VAR_0 ;
 int FUNC_0 (int ,int *,int ) ;

__attribute__((used)) static int FUNC_1(Fts5Storage *VAR_1, int VAR_2){
  int VAR_3 = VAR_0;
  if( VAR_1->bTotalsValid==0 ){
    VAR_3 = FUNC_0(VAR_1->pIndex, &VAR_1->nTotalRow, VAR_1->aTotalSize);
    VAR_1->bTotalsValid = VAR_2;
  }
  return VAR_3;
}
