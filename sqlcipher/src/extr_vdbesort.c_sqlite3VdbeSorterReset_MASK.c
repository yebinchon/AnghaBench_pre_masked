
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int sqlite3 ;
struct TYPE_7__ {scalar_t__ aMemory; scalar_t__ szPMA; scalar_t__ pList; } ;
struct TYPE_8__ {scalar_t__ pReader; int nTask; scalar_t__ pUnpacked; scalar_t__ mxKeysize; scalar_t__ iMemory; scalar_t__ bUsePMA; TYPE_1__ list; TYPE_3__* aTask; scalar_t__ pMerger; scalar_t__ bUseThreads; } ;
typedef TYPE_2__ VdbeSorter ;
struct TYPE_9__ {TYPE_2__* pSorter; } ;
typedef TYPE_3__ SortSubtask ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *,scalar_t__) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (int *,TYPE_3__*) ;
 int FUNC_5 (TYPE_2__*,int ) ;
 int FUNC_6 (int ,scalar_t__) ;

void FUNC_7(sqlite3 *VAR_1, VdbeSorter *VAR_2){
  int VAR_3;
  (void)FUNC_5(VAR_2, VAR_0);
  FUNC_0( VAR_2->bUseThreads || VAR_2->pReader==0 );







  FUNC_2(VAR_2->pMerger);
  VAR_2->pMerger = 0;
  for(VAR_3=0; VAR_3<VAR_2->nTask; VAR_3++){
    SortSubtask *VAR_4 = &VAR_2->aTask[VAR_3];
    FUNC_4(VAR_1, VAR_4);
    VAR_4->pSorter = VAR_2;
  }
  if( VAR_2->list.aMemory==0 ){
    FUNC_6(0, VAR_2->list.pList);
  }
  VAR_2->list.pList = 0;
  VAR_2->list.szPMA = 0;
  VAR_2->bUsePMA = 0;
  VAR_2->iMemory = 0;
  VAR_2->mxKeysize = 0;
  FUNC_1(VAR_1, VAR_2->pUnpacked);
  VAR_2->pUnpacked = 0;
}
