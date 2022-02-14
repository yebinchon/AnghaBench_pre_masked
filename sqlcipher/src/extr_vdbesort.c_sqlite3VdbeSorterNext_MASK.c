
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_9__ ;
typedef struct TYPE_17__ TYPE_8__ ;
typedef struct TYPE_16__ TYPE_6__ ;
typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int sqlite3 ;
struct TYPE_13__ {scalar_t__ aMemory; TYPE_6__* pList; } ;
struct TYPE_14__ {int bUseThreads; TYPE_3__ list; TYPE_9__* pMerger; int * aTask; TYPE_8__* pReader; scalar_t__ bUsePMA; } ;
typedef TYPE_4__ VdbeSorter ;
struct TYPE_11__ {TYPE_4__* pSorter; } ;
struct TYPE_15__ {scalar_t__ eCurType; TYPE_1__ uc; } ;
typedef TYPE_5__ VdbeCursor ;
struct TYPE_18__ {int * pTask; } ;
struct TYPE_17__ {scalar_t__ pFd; } ;
struct TYPE_12__ {TYPE_6__* pNext; } ;
struct TYPE_16__ {TYPE_2__ u; } ;
typedef TYPE_6__ SorterRecord ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_9__*,int*) ;
 int FUNC_2 (TYPE_8__*) ;
 int FUNC_3 (int *,TYPE_6__*) ;

int FUNC_4(sqlite3 *VAR_3, const VdbeCursor *VAR_4){
  VdbeSorter *VAR_5;
  int VAR_6;

  FUNC_0( VAR_4->eCurType==VAR_0 );
  VAR_5 = VAR_4->uc.pSorter;
  FUNC_0( VAR_5->bUsePMA || (VAR_5->pReader==0 && VAR_5->pMerger==0) );
  if( VAR_5->bUsePMA ){
    FUNC_0( VAR_5->pReader==0 || VAR_5->pMerger==0 );
    FUNC_0( VAR_5->bUseThreads==0 || VAR_5->pReader );
    FUNC_0( VAR_5->bUseThreads==1 || VAR_5->pMerger );






                                    {
      int VAR_7 = 0;
      FUNC_0( VAR_5->pMerger!=0 );
      FUNC_0( VAR_5->pMerger->pTask==(&VAR_5->aTask[0]) );
      VAR_6 = FUNC_1(VAR_5->pMerger, &VAR_7);
      if( VAR_6==VAR_2 && VAR_7 ) VAR_6 = VAR_1;
    }
  }else{
    SorterRecord *VAR_8 = VAR_5->list.pList;
    VAR_5->list.pList = VAR_8->u.pNext;
    VAR_8->u.pNext = 0;
    if( VAR_5->list.aMemory==0 ) FUNC_3(VAR_3, VAR_8);
    VAR_6 = VAR_5->list.pList ? VAR_2 : VAR_1;
  }
  return VAR_6;
}
