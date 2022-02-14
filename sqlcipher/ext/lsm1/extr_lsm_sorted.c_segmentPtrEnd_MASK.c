
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


struct TYPE_18__ {int iSplitTopic; int nSplitKey; int pSplitKey; scalar_t__ nRight; int lhs; } ;
struct TYPE_17__ {TYPE_1__* pDb; } ;
struct TYPE_16__ {scalar_t__ nCell; int flags; int eType; scalar_t__ nVal; scalar_t__ pVal; int nKey; int pKey; int iCell; int * pSeg; scalar_t__ pPg; TYPE_4__* pLevel; } ;
struct TYPE_15__ {int xCmp; int * pFS; } ;
typedef TYPE_2__ SegmentPtr ;
typedef TYPE_3__ MultiCursor ;
typedef TYPE_4__ Level ;
typedef int FileSystem ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (TYPE_3__*,TYPE_2__*,int) ;
 int FUNC_3 (int *,TYPE_2__*,int,int*) ;
 int FUNC_4 (TYPE_3__*,TYPE_2__*) ;
 int FUNC_5 (TYPE_2__*,scalar_t__) ;
 int FUNC_6 (TYPE_2__*,int) ;
 int FUNC_7 (TYPE_2__*,int ) ;
 int FUNC_8 (int ,int ,int ,int ,int,int ,int ) ;

__attribute__((used)) static int FUNC_9(MultiCursor *VAR_5, SegmentPtr *VAR_6, int VAR_7){
  Level *VAR_8 = VAR_6->pLevel;
  int VAR_9 = VAR_1;
  FileSystem *VAR_10 = VAR_5->pDb->pFS;
  int VAR_11;

  FUNC_3(VAR_10, VAR_6, VAR_7, &VAR_9);
  while( VAR_9==VAR_1 && VAR_6->pPg
      && (VAR_6->nCell==0 || (VAR_6->flags & VAR_4))
  ){
    VAR_9 = FUNC_6(VAR_6, (VAR_7 ? -1 : 1));
  }

  if( VAR_9==VAR_1 && VAR_6->pPg ){
    VAR_9 = FUNC_5(VAR_6, VAR_7 ? (VAR_6->nCell-1) : 0);
    if( VAR_9==VAR_1 && VAR_7 && VAR_6->pSeg!=&VAR_8->lhs ){
      int VAR_12 = FUNC_8(VAR_5->pDb->xCmp,
          FUNC_1(VAR_6->eType), VAR_6->pKey, VAR_6->nKey,
          VAR_8->iSplitTopic, VAR_8->pSplitKey, VAR_8->nSplitKey
      );
      if( VAR_12<0 ) FUNC_7(VAR_6, VAR_2);
    }
  }

  VAR_11 = FUNC_4(VAR_5, VAR_6);
  if( VAR_9==VAR_1 && VAR_6->pPg && VAR_11 && FUNC_0(VAR_6->eType) ){
    VAR_9 = FUNC_2(VAR_5, VAR_6, VAR_7);
  }
  return VAR_9;
}
