
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {TYPE_3__* pShmhdr; } ;
typedef TYPE_1__ lsm_db ;
typedef scalar_t__ i64 ;
struct TYPE_8__ {TYPE_2__* aReader; } ;
struct TYPE_7__ {scalar_t__ iLsmId; } ;
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

__attribute__((used)) static int FUNC_3(
  lsm_db *VAR_5,
  i64 *VAR_6
){
  ShmHeader *VAR_7 = VAR_5->pShmhdr;
  i64 VAR_8 = *VAR_6;
  int VAR_9;

  FUNC_1( VAR_8>0 );
  for(VAR_9=0; VAR_9<VAR_2; VAR_9++){
    ShmReader *VAR_10 = &VAR_7->aReader[VAR_9];
    if( VAR_10->iLsmId ){
      i64 VAR_11 = VAR_10->iLsmId;
      if( VAR_11!=0 && VAR_8>VAR_11 ){
        int VAR_12 = FUNC_2(VAR_5, FUNC_0(VAR_9), VAR_1, 0);
        if( VAR_12==VAR_4 ){
          VAR_10->iLsmId = 0;
          FUNC_2(VAR_5, FUNC_0(VAR_9), VAR_3, 0);
        }else if( VAR_12==VAR_0 ){
          VAR_8 = VAR_11;
        }else{


          return VAR_12;
        }
      }
    }
  }

  *VAR_6 = VAR_8;
  return VAR_4;
}
