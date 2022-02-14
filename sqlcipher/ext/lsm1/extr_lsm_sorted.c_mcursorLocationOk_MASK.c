
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_13__ {int nRight; scalar_t__ iSplitTopic; void* pSplitKey; int nSplitKey; int lhs; } ;
struct TYPE_10__ {int nData; int pData; } ;
struct TYPE_12__ {int eType; int flags; int nPtr; int* aTree; TYPE_2__ key; TYPE_1__* pDb; TYPE_3__* aPtr; } ;
struct TYPE_11__ {scalar_t__ pPg; int eType; int nKey; int pKey; int * pSeg; TYPE_5__* pLevel; } ;
struct TYPE_9__ {int xCmp; } ;
typedef TYPE_3__ SegmentPtr ;
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
 int FUNC_1 (TYPE_4__*) ;
 int FUNC_2 (TYPE_4__*,int,int*,void**,int*) ;
 scalar_t__ FUNC_3 (int) ;
 scalar_t__ FUNC_4 (int ,scalar_t__,int ,int ,scalar_t__,void*,int) ;

__attribute__((used)) static int FUNC_5(MultiCursor *VAR_7, int VAR_8){
  int VAR_9 = VAR_7->eType;
  int VAR_10;
  int VAR_11;
  int VAR_12;

  FUNC_0( VAR_7->flags & (VAR_2|VAR_3) );
  FUNC_1(VAR_7);

  VAR_12 = (VAR_7->flags & VAR_2) ? VAR_4 : VAR_6;




  if( (VAR_7->flags & VAR_0) && VAR_8==0 ){
    if( (VAR_9 & VAR_5)==0 ) return 0;
  }



  if( (VAR_7->flags & VAR_1) && FUNC_3(VAR_9)!=0 ){
    return 0;
  }
  for(VAR_11=0; VAR_11<VAR_7->nPtr; VAR_11++){
    SegmentPtr *VAR_13 = &VAR_7->aPtr[VAR_11];
    Level *VAR_14 = VAR_13->pLevel;
    if( VAR_14->nRight && VAR_13->pPg ){
      if( VAR_13->pSeg==&VAR_14->lhs ){
        int VAR_15;
        for(VAR_15=0; VAR_15<VAR_14->nRight; VAR_15++) FUNC_0( VAR_13[VAR_15+1].pPg==0 );
      }else{
        int VAR_16 = FUNC_4(VAR_7->pDb->xCmp,
            FUNC_3(VAR_13->eType), VAR_13->pKey, VAR_13->nKey,
            VAR_14->iSplitTopic, VAR_14->pSplitKey, VAR_14->nSplitKey
        );
        FUNC_0( VAR_16>=0 );
      }
    }
  }
  VAR_10 = VAR_7->aTree[1];
  for(VAR_11=0; VAR_11<VAR_10; VAR_11++){
    int VAR_17;
    FUNC_2(VAR_7, VAR_11, &VAR_17, 0, 0);
    if( (VAR_12 & VAR_17) ){
      const int VAR_18 = (VAR_6|VAR_4);
      if( (VAR_17 & VAR_18)==VAR_18
       || (VAR_7->flags & VAR_0)==0
      ){
        void *VAR_19; int VAR_20;
        FUNC_2(VAR_7, VAR_11, 0, &VAR_19, &VAR_20);
        if( 0==FUNC_4(VAR_7->pDb->xCmp,
              FUNC_3(VAR_9), VAR_7->key.pData, VAR_7->key.nData,
              FUNC_3(VAR_17), VAR_19, VAR_20
        )){
          continue;
        }
      }
      return 0;
    }
  }


  return 1;
}
