
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ pFile; int nKey; int aKey; } ;
typedef TYPE_1__ VdbeSorterIter ;
struct TYPE_7__ {int nTree; int* aTree; scalar_t__ pUnpacked; TYPE_1__* aIter; } ;
typedef TYPE_2__ VdbeSorter ;
struct TYPE_8__ {TYPE_2__* pSorter; } ;
typedef TYPE_3__ VdbeCursor ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_3__ const*,int ,int ,int ,int ,int ,int*) ;

__attribute__((used)) static int FUNC_2(const VdbeCursor *VAR_1, int VAR_2){
  VdbeSorter *VAR_3 = VAR_1->pSorter;
  int VAR_4;
  int VAR_5;
  int VAR_6;
  VdbeSorterIter *VAR_7;
  VdbeSorterIter *VAR_8;

  FUNC_0( VAR_2<VAR_3->nTree && VAR_2>0 );

  if( VAR_2>=(VAR_3->nTree/2) ){
    VAR_4 = (VAR_2 - VAR_3->nTree/2) * 2;
    VAR_5 = VAR_4 + 1;
  }else{
    VAR_4 = VAR_3->aTree[VAR_2*2];
    VAR_5 = VAR_3->aTree[VAR_2*2+1];
  }

  VAR_7 = &VAR_3->aIter[VAR_4];
  VAR_8 = &VAR_3->aIter[VAR_5];

  if( VAR_7->pFile==0 ){
    VAR_6 = VAR_5;
  }else if( VAR_8->pFile==0 ){
    VAR_6 = VAR_4;
  }else{
    int VAR_9;
    FUNC_0( VAR_1->pSorter->pUnpacked!=0 );
    FUNC_1(
        VAR_1, 0, VAR_7->aKey, VAR_7->nKey, VAR_8->aKey, VAR_8->nKey, &VAR_9
    );
    if( VAR_9<=0 ){
      VAR_6 = VAR_4;
    }else{
      VAR_6 = VAR_5;
    }
  }

  VAR_3->aTree[VAR_2] = VAR_6;
  return VAR_0;
}
