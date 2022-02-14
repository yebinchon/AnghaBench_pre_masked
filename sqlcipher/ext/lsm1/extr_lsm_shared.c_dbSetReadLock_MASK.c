
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct TYPE_6__ {TYPE_3__* pShmhdr; } ;
typedef TYPE_1__ lsm_db ;
typedef scalar_t__ i64 ;
struct TYPE_8__ {TYPE_2__* aReader; } ;
struct TYPE_7__ {scalar_t__ iLsmId; scalar_t__ iTreeId; } ;
typedef TYPE_2__ ShmReader ;
typedef TYPE_3__ ShmHeader ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (TYPE_1__*,int ,int ,int ) ;

__attribute__((used)) static int FUNC_2(lsm_db *VAR_5, i64 VAR_6, u32 VAR_7){
  int VAR_8 = VAR_4;
  ShmHeader *VAR_9 = VAR_5->pShmhdr;
  int VAR_10;


  for(VAR_10=0; VAR_10<VAR_2; VAR_10++){
    ShmReader *VAR_11 = &VAR_9->aReader[VAR_10];
    if( VAR_11->iLsmId==VAR_6 && VAR_11->iTreeId==VAR_7 ) return VAR_4;
  }




  for(VAR_10=0; VAR_8==VAR_4 && VAR_10<VAR_2; VAR_10++){
    VAR_8 = FUNC_1(VAR_5, FUNC_0(VAR_10), VAR_1, 0);
    if( VAR_8==VAR_0 ){
      VAR_8 = VAR_4;
    }else{
      ShmReader *VAR_12 = &VAR_9->aReader[VAR_10];
      VAR_12->iLsmId = VAR_6;
      VAR_12->iTreeId = VAR_7;
      FUNC_1(VAR_5, FUNC_0(VAR_10), VAR_3, 0);
      break;
    }
  }

  return VAR_8;
}
