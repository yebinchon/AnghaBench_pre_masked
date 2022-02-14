
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_15__ {int nRight; void* pSplitKey; int nSplitKey; int iSplitTopic; } ;
struct TYPE_14__ {TYPE_1__* pDb; } ;
struct TYPE_13__ {scalar_t__ pPg; int eType; void* pKey; int nKey; scalar_t__ nVal; scalar_t__ pVal; TYPE_4__* pLevel; } ;
struct TYPE_12__ {int xCmp; } ;
typedef TYPE_2__ SegmentPtr ;
typedef TYPE_3__ MultiCursor ;
typedef int LsmPgno ;
typedef TYPE_4__ Level ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (TYPE_3__*,TYPE_2__*,int,void*,int,int,int,int*,int*) ;
 int FUNC_3 (TYPE_3__*,TYPE_2__*,int) ;
 int FUNC_4 (TYPE_2__*,int ) ;
 int FUNC_5 (int ,int,void*,int,int ,void*,int) ;

__attribute__((used)) static int FUNC_6(
  MultiCursor *VAR_7,
  SegmentPtr *VAR_8,
  int VAR_9,
  int VAR_10,
  void *VAR_11, int VAR_12,
  LsmPgno *VAR_13,
  int *VAR_14
){
  Level *VAR_15 = VAR_8[0].pLevel;
  int VAR_16 = VAR_1;
  int VAR_17 = 0;
  int VAR_18 = -1;
  int VAR_19 = VAR_15->nRight;
  int VAR_20 = 0;




  if( VAR_19 ){
    VAR_18 = FUNC_5(VAR_7->pDb->xCmp, VAR_10, VAR_11, VAR_12,
        VAR_15->iSplitTopic, VAR_15->pSplitKey, VAR_15->nSplitKey
    );
  }




  if( VAR_18<0 ){
    int VAR_21;
    int VAR_22 = 0;
    if( VAR_19==0 ) VAR_22 = (int)*VAR_13;

    VAR_16 = FUNC_2(
        VAR_7, &VAR_8[0], VAR_10, VAR_11, VAR_12, VAR_22, VAR_9, &VAR_17, &VAR_20
    );
    if( VAR_16==VAR_1 && VAR_19>0 && VAR_9==VAR_3 && VAR_8[0].pPg==0 ){
      VAR_18 = 0;
    }
    for(VAR_21=1; VAR_21<=VAR_19; VAR_21++){
      FUNC_4(&VAR_8[VAR_21], VAR_5);
    }
  }

  if( VAR_18>=0 ){
    int VAR_23 = 0;
    int VAR_24 = (int)*VAR_13;
    int VAR_25;
    FUNC_4(&VAR_8[0], VAR_5);
    for(VAR_25=1; VAR_16==VAR_1 && VAR_25<=VAR_19 && VAR_20==0; VAR_25++){
      SegmentPtr *VAR_26 = &VAR_8[VAR_25];
      VAR_17 = 0;
      VAR_16 = FUNC_2(
          VAR_7, VAR_26, VAR_10, VAR_11, VAR_12, VAR_24, VAR_9, &VAR_17, &VAR_20
      );
      VAR_24 = VAR_17;



      if( VAR_26->pPg ){
        VAR_18 = FUNC_5(VAR_7->pDb->xCmp,
            FUNC_1(VAR_26->eType), VAR_26->pKey, VAR_26->nKey,
            VAR_15->iSplitTopic, VAR_15->pSplitKey, VAR_15->nSplitKey
        );
        if( VAR_18<0 ){
          if( VAR_26->eType & VAR_6 ){
            VAR_26->eType &= ~VAR_0;
            VAR_26->pKey = VAR_15->pSplitKey;
            VAR_26->nKey = VAR_15->nSplitKey;
            VAR_26->pVal = 0;
            VAR_26->nVal = 0;
          }else{
            FUNC_4(VAR_26, VAR_5);
          }
        }
      }

      if( VAR_8[VAR_25].pKey ) VAR_23 = 1;
    }

    if( VAR_16==VAR_1 && VAR_9==VAR_4 && VAR_23==0 ){
      VAR_16 = FUNC_3(VAR_7, &VAR_8[0], 1);
    }
  }

  FUNC_0( VAR_9==VAR_2 || VAR_20==0 );
  *VAR_13 = VAR_17;
  *VAR_14 = VAR_20;
  return VAR_16;
}
