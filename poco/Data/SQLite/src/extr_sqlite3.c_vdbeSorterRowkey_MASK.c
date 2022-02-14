
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_6__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {TYPE_6__* pList; } ;
struct TYPE_9__ {TYPE_2__ list; TYPE_1__* pMerger; TYPE_4__* pReader; scalar_t__ bUseThreads; scalar_t__ bUsePMA; } ;
typedef TYPE_3__ VdbeSorter ;
struct TYPE_11__ {int nVal; } ;
struct TYPE_10__ {int nKey; void* aKey; } ;
struct TYPE_7__ {size_t* aTree; TYPE_4__* aReadr; } ;
typedef TYPE_4__ PmaReader ;


 void* FUNC_0 (TYPE_6__*) ;

__attribute__((used)) static void *FUNC_1(
  const VdbeSorter *VAR_0,
  int *VAR_1
){
  void *VAR_2;
  if( VAR_0->bUsePMA ){
    PmaReader *VAR_3;





                                   {
      VAR_3 = &VAR_0->pMerger->aReadr[VAR_0->pMerger->aTree[1]];
    }
    *VAR_1 = VAR_3->nKey;
    VAR_2 = VAR_3->aKey;
  }else{
    *VAR_1 = VAR_0->list.pList->nVal;
    VAR_2 = FUNC_0(VAR_0->list.pList);
  }
  return VAR_2;
}
