
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {int nRight; scalar_t__ pSplitKey; int * aRhs; int lhs; } ;
struct TYPE_8__ {int nPtr; int pDb; TYPE_1__* aPtr; } ;
struct TYPE_7__ {int * pSeg; TYPE_3__* pLevel; } ;
typedef TYPE_2__ MultiCursor ;
typedef TYPE_3__ Level ;


 int VAR_0 ;
 int FUNC_0 (int ,TYPE_3__*,int*) ;

__attribute__((used)) static void FUNC_1(MultiCursor *VAR_1, Level *VAR_2, int *VAR_3){
  if( *VAR_3==VAR_0 ){
    int VAR_4 = VAR_1->nPtr;
    int VAR_5;
    VAR_1->aPtr[VAR_4].pLevel = VAR_2;
    VAR_1->aPtr[VAR_4].pSeg = &VAR_2->lhs;
    VAR_4++;
    for(VAR_5=0; VAR_5<VAR_2->nRight; VAR_5++){
      VAR_1->aPtr[VAR_4].pLevel = VAR_2;
      VAR_1->aPtr[VAR_4].pSeg = &VAR_2->aRhs[VAR_5];
      VAR_4++;
    }

    if( VAR_2->nRight && VAR_2->pSplitKey==0 ){
      FUNC_0(VAR_1->pDb, VAR_2, VAR_3);
    }
    VAR_1->nPtr = VAR_4;
  }
}
