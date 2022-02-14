
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int u32 ;
typedef int TreeCursor ;
struct TYPE_15__ {int iId; int iBlk; } ;
struct TYPE_14__ {int flags; int iFree; int nPtr; TYPE_5__* aPtr; TYPE_3__* pBtCsr; void* pSystemVal; TYPE_1__* pDb; int ** apTreeCsr; } ;
struct TYPE_13__ {int nKey; int eType; void* pKey; int pPg; } ;
struct TYPE_10__ {int nEntry; TYPE_7__* aEntry; } ;
struct TYPE_12__ {TYPE_2__ freelist; } ;
struct TYPE_11__ {int nKey; int eType; void* pKey; } ;
struct TYPE_9__ {TYPE_4__* pWorker; } ;
typedef TYPE_4__ Snapshot ;
typedef TYPE_5__ SegmentPtr ;
typedef TYPE_6__ MultiCursor ;
typedef TYPE_7__ FreelistEntry ;


 int VAR_0 ;



 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int) ;
 int FUNC_1 (void*,int ) ;
 int FUNC_2 (int *,int*,void**,int*) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(
  MultiCursor *VAR_6,
  int VAR_7,
  int *VAR_8,
  void **VAR_9,
  int *VAR_10
){
  int VAR_11 = 0;
  void *VAR_12 = 0;
  int VAR_13 = 0;

  switch( VAR_7 ){
    case 129:
    case 128: {
      TreeCursor *VAR_14 = VAR_6->apTreeCsr[VAR_7-129];
      if( FUNC_3(VAR_14) ){
        FUNC_2(VAR_14, &VAR_13, &VAR_12, &VAR_11);
      }
      break;
    }

    case 130: {
      Snapshot *VAR_15 = VAR_6->pDb->pWorker;
      if( VAR_15 && (VAR_6->flags & VAR_1) ){
        int VAR_16 = VAR_15->freelist.nEntry;
        if( VAR_6->iFree < (VAR_16*2) ){
          FreelistEntry *VAR_17 = VAR_15->freelist.aEntry;
          int VAR_18 = VAR_16 - 1 - (VAR_6->iFree / 2);
          u32 VAR_19 = 0;

          if( (VAR_6->iFree % 2) ){
            VAR_13 = VAR_2|VAR_5;
            VAR_19 = VAR_17[VAR_18].iBlk-1;
          }else if( VAR_17[VAR_18].iId>=0 ){
            VAR_13 = VAR_3|VAR_5;
            VAR_19 = VAR_17[VAR_18].iBlk;




            if( VAR_18<(VAR_16-1) && VAR_17[VAR_18+1].iBlk==VAR_19+1 && VAR_17[VAR_18+1].iId<0 ){
              VAR_13 |= VAR_2;
            }

          }else{
            VAR_13 = VAR_4|VAR_5;
            VAR_19 = VAR_17[VAR_18].iBlk + 1;
          }




          if( VAR_18>0 && VAR_17[VAR_18-1].iBlk==VAR_19-1 && VAR_17[VAR_18-1].iId<0 ){
            VAR_13 |= VAR_4;
          }

          VAR_12 = VAR_6->pSystemVal;
          VAR_11 = 4;
          FUNC_1(VAR_12, ~VAR_19);
        }
      }
      break;
    }

    default: {
      int VAR_20 = VAR_7 - VAR_0;
      FUNC_0( VAR_20>=0 );
      if( VAR_20==VAR_6->nPtr ){
        if( VAR_6->pBtCsr ){
          VAR_12 = VAR_6->pBtCsr->pKey;
          VAR_11 = VAR_6->pBtCsr->nKey;
          VAR_13 = VAR_6->pBtCsr->eType;
        }
      }else if( VAR_20<VAR_6->nPtr ){
        SegmentPtr *VAR_21 = &VAR_6->aPtr[VAR_20];
        if( VAR_21->pPg ){
          VAR_12 = VAR_21->pKey;
          VAR_11 = VAR_21->nKey;
          VAR_13 = VAR_21->eType;
        }
      }
      break;
    }
  }

  if( VAR_8 ) *VAR_8 = VAR_13;
  if( VAR_10 ) *VAR_10 = VAR_11;
  if( VAR_9 ) *VAR_9 = VAR_12;
}
