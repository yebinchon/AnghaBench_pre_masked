
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


struct TYPE_16__ {int iFirst; } ;
struct TYPE_18__ {int nSplitKey; int pSplitKey; scalar_t__ iSplitTopic; TYPE_3__ lhs; } ;
struct TYPE_17__ {TYPE_1__* pDb; } ;
struct TYPE_15__ {int pPg; int eType; int iCell; int nCell; int flags; int nKey; int pKey; TYPE_3__* pSeg; TYPE_5__* pLevel; } ;
struct TYPE_14__ {int pFS; int xCmp; } ;
typedef TYPE_2__ SegmentPtr ;
typedef TYPE_3__ Segment ;
typedef TYPE_4__ MultiCursor ;
typedef TYPE_5__ Level ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,TYPE_3__*,int ,scalar_t__*) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (int) ;
 scalar_t__ FUNC_4 (TYPE_4__*,TYPE_2__*) ;
 int FUNC_5 (TYPE_2__*,int) ;
 int FUNC_6 (TYPE_2__*,int) ;
 int FUNC_7 (TYPE_2__*,int ) ;
 int FUNC_8 (int ,int ,int ,int ,scalar_t__,int ,int ) ;

__attribute__((used)) static int FUNC_9(
  MultiCursor *VAR_7,
  SegmentPtr *VAR_8,
  int VAR_9
){
  int VAR_10 = (VAR_9 ? -1 : 1);
  Level *VAR_11 = VAR_8->pLevel;
  do {
    int VAR_12;
    int VAR_13;
    int VAR_14 = 0;

    VAR_13 = VAR_8->iCell + VAR_10;
    FUNC_0( VAR_8->pPg );
    FUNC_0( VAR_13<=VAR_8->nCell && VAR_13>=-1 );

    if( VAR_9 && VAR_8->pSeg!=&VAR_8->pLevel->lhs ){
      VAR_14 = VAR_8->eType;
      FUNC_0( VAR_14 );
    }

    if( VAR_13>=VAR_8->nCell || VAR_13<0 ){
      do {
        VAR_12 = FUNC_6(VAR_8, VAR_10);
      }while( VAR_12==VAR_1
           && VAR_8->pPg
           && (VAR_8->nCell==0 || (VAR_8->flags & VAR_6) )
      );
      if( VAR_12!=VAR_1 ) return VAR_12;
      VAR_13 = VAR_9 ? (VAR_8->nCell-1) : 0;
    }
    VAR_12 = FUNC_5(VAR_8, VAR_13);
    if( VAR_12!=VAR_1 ) return VAR_12;

    if( VAR_14 && VAR_8->pPg ){
      int VAR_15 = FUNC_8(VAR_7->pDb->xCmp,
          FUNC_3(VAR_8->eType), VAR_8->pKey, VAR_8->nKey,
          VAR_11->iSplitTopic, VAR_11->pSplitKey, VAR_11->nSplitKey
      );
      if( VAR_15<0 ) FUNC_7(VAR_8, VAR_3);
    }

    if( VAR_8->pPg==0 && (VAR_14 & VAR_0) ){
      Segment *VAR_16 = VAR_8->pSeg;
      VAR_12 = FUNC_1(VAR_7->pDb->pFS, VAR_16, VAR_16->iFirst, &VAR_8->pPg);
      if( VAR_12!=VAR_1 ) return VAR_12;
      VAR_8->eType = VAR_4 | VAR_2;
      VAR_8->eType |= (VAR_11->iSplitTopic ? VAR_5 : 0);
      VAR_8->pKey = VAR_11->pSplitKey;
      VAR_8->nKey = VAR_11->nSplitKey;
    }

  }while( VAR_7
       && VAR_8->pPg
       && FUNC_4(VAR_7, VAR_8)
       && FUNC_2(VAR_8->eType)
  );

  return VAR_1;
}
