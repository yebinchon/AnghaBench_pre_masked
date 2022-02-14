
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct TYPE_7__ {int iReader; scalar_t__ bRoTrans; TYPE_3__* pShmhdr; } ;
typedef TYPE_1__ lsm_db ;
typedef scalar_t__ i64 ;
struct TYPE_9__ {TYPE_2__* aReader; } ;
struct TYPE_8__ {scalar_t__ iLsmId; scalar_t__ iTreeId; } ;
typedef TYPE_2__ ShmReader ;
typedef TYPE_3__ ShmHeader ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int) ;
 int FUNC_2 (TYPE_1__*,int ,int ,int ) ;
 int FUNC_3 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_4 (TYPE_2__*,scalar_t__,scalar_t__,scalar_t__) ;

int FUNC_5(lsm_db *VAR_5, i64 VAR_6, u32 VAR_7, u32 VAR_8){
  int VAR_9 = VAR_4;
  ShmHeader *VAR_10 = VAR_5->pShmhdr;
  int VAR_11;

  FUNC_1( VAR_5->iReader<0 );
  FUNC_1( FUNC_3(VAR_8, VAR_7) );


  if( VAR_5->bRoTrans ){
    VAR_5->iReader = 0;
    return VAR_4;
  }


  for(VAR_11=0; VAR_5->iReader<0 && VAR_9==VAR_4 && VAR_11<VAR_2; VAR_11++){
    ShmReader *VAR_12 = &VAR_10->aReader[VAR_11];
    if( VAR_12->iLsmId==VAR_6 && VAR_12->iTreeId==VAR_8 ){
      VAR_9 = FUNC_2(VAR_5, FUNC_0(VAR_11), VAR_3, 0);
      if( VAR_9==VAR_4 && VAR_12->iLsmId==VAR_6 && VAR_12->iTreeId==VAR_8 ){
        VAR_5->iReader = VAR_11;
      }else if( VAR_9==VAR_0 ){
        VAR_9 = VAR_4;
      }
    }
  }



  for(VAR_11=0; VAR_5->iReader<0 && VAR_9==VAR_4 && VAR_11<VAR_2; VAR_11++){
    VAR_9 = FUNC_2(VAR_5, FUNC_0(VAR_11), VAR_1, 0);
    if( VAR_9==VAR_0 ){
      VAR_9 = VAR_4;
    }else{
      ShmReader *VAR_13 = &VAR_10->aReader[VAR_11];
      VAR_13->iLsmId = VAR_6;
      VAR_13->iTreeId = VAR_8;
      VAR_9 = FUNC_2(VAR_5, FUNC_0(VAR_11), VAR_3, 0);
      FUNC_1( VAR_9!=VAR_0 );
      if( VAR_9==VAR_4 ) VAR_5->iReader = VAR_11;
    }
  }


  for(VAR_11=0; VAR_5->iReader<0 && VAR_9==VAR_4 && VAR_11<VAR_2; VAR_11++){
    ShmReader *VAR_14 = &VAR_10->aReader[VAR_11];
    if( FUNC_4(VAR_14, VAR_6, VAR_7, VAR_8) ){
      VAR_9 = FUNC_2(VAR_5, FUNC_0(VAR_11), VAR_3, 0);
      if( VAR_9==VAR_4 && FUNC_4(VAR_14, VAR_6, VAR_7, VAR_8) ){
        VAR_5->iReader = VAR_11;
      }else if( VAR_9==VAR_0 ){
        VAR_9 = VAR_4;
      }
    }
  }

  if( VAR_9==VAR_4 && VAR_5->iReader<0 ){
    VAR_9 = VAR_0;
  }
  return VAR_9;
}
