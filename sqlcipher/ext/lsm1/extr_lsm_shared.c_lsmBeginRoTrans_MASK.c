
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {scalar_t__ iReader; int bRoTrans; scalar_t__* apShm; int * pShmhdr; scalar_t__ bReadonly; } ;
typedef TYPE_1__ lsm_db ;
typedef int ShmHeader ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (int) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*,int) ;
 int FUNC_6 (TYPE_1__*,int ,int ,int ) ;
 int FUNC_7 (TYPE_1__*,int ,int ,int ) ;
 int FUNC_8 (int *,int ,int) ;

int FUNC_9(lsm_db *VAR_8){
  int VAR_9 = VAR_7;

  FUNC_1( VAR_8->bReadonly && VAR_8->pShmhdr==0 );
  FUNC_1( VAR_8->iReader<0 );

  if( VAR_8->bRoTrans==0 ){


    VAR_9 = FUNC_6(VAR_8, VAR_1, VAR_5, 0);
    if( VAR_9!=VAR_7 ) return VAR_9;

    VAR_9 = FUNC_7(
        VAR_8, FUNC_0(0), VAR_3, VAR_5
    );
    if( VAR_9==VAR_7 ){




      VAR_9 = FUNC_6(VAR_8, VAR_4, VAR_5, 0);
      FUNC_6(VAR_8, VAR_1, VAR_6, 0);

      if( VAR_9==VAR_7 ){
        VAR_8->bRoTrans = 1;
        VAR_9 = FUNC_5(VAR_8, 1);
        if( VAR_9==VAR_7 ){
          VAR_8->pShmhdr = (ShmHeader *)VAR_8->apShm[0];
          FUNC_8(VAR_8->pShmhdr, 0, sizeof(ShmHeader));
          VAR_9 = FUNC_3(VAR_8);
          if( VAR_9==VAR_7 ){
            VAR_9 = FUNC_4(VAR_8);
          }
        }
      }
    }else if( VAR_9==VAR_0 ){

      VAR_9 = FUNC_6(VAR_8, VAR_2, VAR_5, 0);
      FUNC_6(VAR_8, VAR_1, VAR_6, 0);
      if( VAR_9==VAR_7 ){
        VAR_9 = FUNC_5(VAR_8, 1);
        if( VAR_9==VAR_7 ){
          VAR_8->pShmhdr = (ShmHeader *)VAR_8->apShm[0];
        }
      }
    }

    if( VAR_9==VAR_7 ){
      VAR_9 = FUNC_2(VAR_8);
    }
  }

  return VAR_9;
}
