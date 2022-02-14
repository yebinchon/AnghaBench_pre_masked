
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_13__ {int iUsedShmid; } ;
struct TYPE_14__ {scalar_t__ bReadonly; int iRwclient; TYPE_4__* pShmhdr; TYPE_2__ treehdr; scalar_t__* apShm; int pEnv; } ;
typedef TYPE_3__ lsm_db ;
struct TYPE_15__ {TYPE_1__* aReader; int aSnap1; } ;
struct TYPE_12__ {int iTreeId; int iLsmId; } ;
typedef TYPE_4__ ShmHeader ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (int) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (int ,int) ;
 int FUNC_5 (TYPE_3__*) ;
 int FUNC_6 (TYPE_3__*,int) ;
 int FUNC_7 (TYPE_3__*,scalar_t__,int ,int) ;
 int FUNC_8 (TYPE_3__*,scalar_t__,int,int ) ;
 int FUNC_9 (TYPE_4__*,int ,int) ;

__attribute__((used)) static int FUNC_10(lsm_db *VAR_9){
  const int VAR_10 = 100000;
  int VAR_11 = 1000;
  int VAR_12;


  FUNC_1( VAR_9->pShmhdr==0 );
  FUNC_1( VAR_9->bReadonly==0 );



  while( 1 ){
    VAR_12 = FUNC_7(VAR_9, VAR_1, VAR_4, 1);
    if( VAR_12!=VAR_0 ) break;
    FUNC_4(VAR_9->pEnv, VAR_11);
    VAR_11 = VAR_11 * 2;
    if( VAR_11>VAR_10 ) VAR_11 = VAR_10;
  }
  if( VAR_12==VAR_8 ){
    VAR_12 = FUNC_6(VAR_9, 1);
  }
  if( VAR_12!=VAR_8 ) return VAR_12;
  VAR_9->pShmhdr = (ShmHeader *)VAR_9->apShm[0];




  FUNC_1( VAR_3==1+VAR_2 );
  VAR_12 = FUNC_8(VAR_9, VAR_2, 2, VAR_4);
  if( VAR_12==VAR_8 ){
    FUNC_9(VAR_9->pShmhdr, 0, sizeof(ShmHeader));
    VAR_12 = FUNC_3(VAR_9);
    if( VAR_12==VAR_8 ){
      VAR_12 = FUNC_5(VAR_9);
    }
    if( VAR_12==VAR_8 ){
      ShmHeader *VAR_13 = VAR_9->pShmhdr;
      VAR_13->aReader[0].iLsmId = FUNC_2(VAR_13->aSnap1, 0);
      VAR_13->aReader[0].iTreeId = VAR_9->treehdr.iUsedShmid;
    }
  }else if( VAR_12==VAR_0 ){
    VAR_12 = VAR_8;
  }
  if( VAR_12==VAR_8 ){
    VAR_12 = FUNC_7(VAR_9, VAR_2, VAR_6, 0);
  }



  if( VAR_12!=VAR_8 ){
    VAR_9->pShmhdr = 0;
  }else{
    int VAR_14;
    for(VAR_14=0; VAR_14<VAR_5; VAR_14++){
      int VAR_15 = FUNC_7(VAR_9, FUNC_0(VAR_14), VAR_4, 0);
      if( VAR_15==VAR_8 ) VAR_9->iRwclient = VAR_14;
      if( VAR_15!=VAR_0 ){
        VAR_12 = VAR_15;
        break;
      }
    }
  }
  FUNC_7(VAR_9, VAR_1, VAR_7, 0);

  return VAR_12;
}
