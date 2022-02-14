
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_7__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_11__ {scalar_t__ iRoot; } ;
struct TYPE_10__ {int nRight; TYPE_7__* aRhs; TYPE_7__ lhs; struct TYPE_10__* pNext; } ;
struct TYPE_9__ {int * pPg; TYPE_7__* pSeg; int iCell; TYPE_2__* pLevel; } ;
typedef TYPE_1__ SegmentPtr ;
typedef int Page ;
typedef int MultiCursor ;
typedef int LsmPgno ;
typedef TYPE_2__ Level ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_1__*,int ,int) ;
 int FUNC_2 (int *,int ,TYPE_7__*,int *,int*) ;
 int FUNC_3 (TYPE_1__*,int ) ;
 int FUNC_4 (int *,TYPE_2__*,TYPE_1__*) ;

__attribute__((used)) static int FUNC_5(
  MultiCursor *VAR_2,
  SegmentPtr *VAR_3,
  LsmPgno *VAR_4
){
  Level *VAR_5 = VAR_3->pLevel;
  Level *VAR_6 = VAR_5->pNext;
  Page *VAR_7 = VAR_3->pPg;
  int VAR_8;
  int VAR_9;
  LsmPgno VAR_10 = 0;

  if( VAR_3->pSeg==&VAR_5->lhs || VAR_3->pSeg==&VAR_5->aRhs[VAR_5->nRight-1] ){
    if( VAR_6==0
        || (VAR_6->nRight==0 && VAR_6->lhs.iRoot)
        || (VAR_6->nRight!=0 && VAR_6->aRhs[0].iRoot)
      ){

      return VAR_1;
    }
  }else{
    if( VAR_3[1].pSeg->iRoot ){
      return VAR_1;
    }
  }


  FUNC_0(VAR_7);
  VAR_8 = FUNC_2(VAR_7, VAR_3->iCell, VAR_3->pSeg, &VAR_10, &VAR_9);

  if( VAR_8==VAR_1 && VAR_9==0 ){





    SegmentPtr VAR_11;

    if( VAR_3->pLevel->nRight==0 || VAR_3->pSeg!=&VAR_3->pLevel->lhs ){
      return VAR_0;
    }

    FUNC_1(&VAR_11, 0, sizeof(SegmentPtr));
    VAR_11.pLevel = VAR_3->pLevel;
    VAR_11.pSeg = &VAR_11.pLevel->aRhs[VAR_11.pLevel->nRight-1];
    VAR_8 = FUNC_4(VAR_2, VAR_11.pLevel, &VAR_11);
    if( VAR_8==VAR_1 ){
      VAR_8 = FUNC_2(VAR_11.pPg, VAR_11.iCell, VAR_11.pSeg, &VAR_10, &VAR_9);
      VAR_11.pPg = 0;
    }
    FUNC_3(&VAR_11, 0);
  }

  *VAR_4 = VAR_10;
  return VAR_8;
}
