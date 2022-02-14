
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_25__ TYPE_3__ ;
typedef struct TYPE_24__ TYPE_2__ ;
typedef struct TYPE_23__ TYPE_1__ ;
typedef struct TYPE_22__ TYPE_17__ ;


typedef int lsm_env ;
struct TYPE_25__ {int eType; int flags; int val; int key; TYPE_1__* pDb; } ;
struct TYPE_24__ {scalar_t__ iPtr; int nCell; int eType; scalar_t__ iPgPtr; scalar_t__ pPg; int nVal; int pVal; int nKey; int pKey; TYPE_17__* pSeg; } ;
struct TYPE_23__ {int (* xCmp ) (void*,int,void*,int) ;int * pEnv; } ;
struct TYPE_22__ {int nSize; } ;
typedef TYPE_2__ SegmentPtr ;
typedef TYPE_3__ MultiCursor ;
typedef scalar_t__ LsmPgno ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,int) ;
 int VAR_3 ;
 int VAR_4 ;



 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int) ;
 int FUNC_2 (TYPE_3__*,TYPE_2__*,void*,int) ;
 scalar_t__ FUNC_3 (TYPE_3__*,TYPE_2__*,int,void*,int,int) ;
 scalar_t__ FUNC_4 (TYPE_17__*,scalar_t__) ;
 scalar_t__ FUNC_5 (int) ;
 int FUNC_6 (int) ;
 int FUNC_7 (TYPE_3__*,TYPE_2__*,int) ;
 int FUNC_8 (TYPE_3__*,TYPE_2__*,scalar_t__*) ;
 scalar_t__ FUNC_9 (TYPE_3__*,TYPE_2__*) ;
 int FUNC_10 (TYPE_2__*,void**,int*) ;
 int FUNC_11 (TYPE_2__*,int) ;
 int FUNC_12 (TYPE_2__*,int ) ;
 int FUNC_13 (TYPE_3__*,TYPE_2__*,int,void*,int) ;
 int FUNC_14 (int *,int *,int ,int ) ;
 int FUNC_15 (int (*) (void*,int,void*,int),int,void*,int,int,void*,int) ;

__attribute__((used)) static int FUNC_16(
  MultiCursor *VAR_7,
  SegmentPtr *VAR_8,
  int VAR_9,
  void *VAR_10, int VAR_11,
  int VAR_12,
  int *VAR_13,
  int *VAR_14
){
  int (*VAR_15)(void *, int, void *, int) = VAR_7->pDb->xCmp;
  int VAR_16 = 0;
  int VAR_17 = VAR_3;
  int VAR_18;
  int VAR_19;
  LsmPgno VAR_20 = 0;





  VAR_17 = FUNC_13(VAR_7, VAR_8, VAR_9, VAR_10, VAR_11);
  VAR_20 = VAR_8->iPtr;
  FUNC_1( VAR_8->nCell>0
       || VAR_8->pSeg->nSize==1
       || FUNC_4(VAR_8->pSeg, VAR_8->pPg)
  );
  if( VAR_8->nCell==0 ){
    FUNC_12(VAR_8, VAR_5);
  }else{
    VAR_18 = 0;
    VAR_19 = VAR_8->nCell-1;

    while( 1 ){
      int VAR_21 = (VAR_18+VAR_19)/2;
      void *VAR_22; int VAR_23;
      int VAR_24;

      FUNC_1( VAR_21<VAR_19 || VAR_18==VAR_19 );

      VAR_17 = FUNC_11(VAR_8, VAR_21);
      if( VAR_17!=VAR_3 ) break;

      FUNC_10(VAR_8, &VAR_22, &VAR_23);
      VAR_24 = FUNC_6(VAR_8->eType);

      VAR_16 = FUNC_15(VAR_15, VAR_24, VAR_22, VAR_23, VAR_9, VAR_10, VAR_11);
      if( VAR_16<=0 ){
        VAR_20 = VAR_8->iPtr + VAR_8->iPgPtr;
      }

      if( VAR_16==0 || VAR_18==VAR_19 ){
        break;
      }else if( VAR_16>0 ){
        VAR_19 = FUNC_0(VAR_21-1, VAR_18);
      }else{
        VAR_18 = VAR_21+1;
      }
    }

    if( VAR_17==VAR_3 ){
      FUNC_1( VAR_16==0 || (VAR_18==VAR_19 && VAR_18>=0 && VAR_18<VAR_8->nCell) );
      if( VAR_16 ){
        VAR_17 = FUNC_11(VAR_8, VAR_18);
      }
      FUNC_1( VAR_17!=VAR_3 || VAR_16>0 || VAR_20==(VAR_8->iPtr + VAR_8->iPgPtr) );

      if( VAR_17==VAR_3 ){
        switch( VAR_12 ){
          case 130: {
            int VAR_25 = VAR_8->eType;
            if( (VAR_16<0 && (VAR_25 & VAR_6))
             || (VAR_16>0 && (VAR_25 & VAR_1))
             || (VAR_16==0 && (VAR_25 & VAR_4))
            ){
              *VAR_14 = 1;
            }else if( VAR_16==0 && (VAR_25 & VAR_2) ){
              lsm_env *VAR_26 = VAR_7->pDb->pEnv;
              *VAR_14 = 1;
              VAR_7->eType = VAR_8->eType;
              VAR_17 = FUNC_14(VAR_26, &VAR_7->key, VAR_8->pKey, VAR_8->nKey);
              if( VAR_17==VAR_3 ){
                VAR_17 = FUNC_14(VAR_26, &VAR_7->val, VAR_8->pVal, VAR_8->nVal);
              }
              VAR_7->flags |= VAR_0;
            }
            FUNC_12(VAR_8, VAR_5);
            break;
          }
          case 128:
            if( VAR_16>0 ) VAR_17 = FUNC_7(VAR_7, VAR_8, 1);
            break;
          case 129: {

            if( (VAR_16<=0 && (VAR_8->eType & VAR_6))
             || (VAR_16>0 && (VAR_8->eType & VAR_1))
            ){
              VAR_17 = FUNC_8(VAR_7, VAR_8, &VAR_20);
            }
            if( VAR_16<0 && VAR_17==VAR_3 ){
              VAR_17 = FUNC_7(VAR_7, VAR_8, 0);
            }
            break;
          }
        }
      }
    }



    if( VAR_17==VAR_3 && VAR_8->pPg
     && FUNC_9(VAR_7, VAR_8)
     && FUNC_5(VAR_8->eType)
    ){
      FUNC_1( VAR_12!=130 );
      VAR_17 = FUNC_7(VAR_7, VAR_8, VAR_12==128);
    }
  }

  FUNC_1( VAR_17!=VAR_3 || FUNC_3(VAR_7,VAR_8,VAR_9,VAR_10,VAR_11,VAR_12) );
  *VAR_13 = (int)VAR_20;
  return VAR_17;
}
