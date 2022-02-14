
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_7__ {int iFirst; int nChunk; } ;
struct TYPE_8__ {TYPE_1__ treehdr; } ;
typedef TYPE_2__ lsm_db ;
struct TYPE_9__ {int iNext; scalar_t__ iShmid; } ;
typedef TYPE_3__ ShmChunk ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_3__* FUNC_0 (TYPE_2__*,int,int*) ;

__attribute__((used)) static int FUNC_1(lsm_db *VAR_2){
  int VAR_3 = VAR_1;
  int VAR_4 = 0;
  ShmChunk *VAR_5;

  VAR_5 = FUNC_0(VAR_2, VAR_2->treehdr.iFirst, &VAR_3);
  while( VAR_3==VAR_1 && VAR_5 ){
    if( VAR_5->iNext ){
      if( VAR_5->iNext>=VAR_2->treehdr.nChunk ){
        VAR_3 = VAR_0;
      }else{
        ShmChunk *VAR_6 = FUNC_0(VAR_2, VAR_5->iNext, &VAR_3);
        if( VAR_3==VAR_1 ){
          if( VAR_6->iShmid!=VAR_5->iShmid+1 ){
            VAR_3 = VAR_0;
          }
          VAR_5 = VAR_6;
        }
      }
    }else{
      VAR_5 = 0;
    }
    VAR_4++;
  }

  if( VAR_3==VAR_1 && (u32)VAR_4!=VAR_2->treehdr.nChunk-1 ){
    VAR_3 = VAR_0;
  }
  return VAR_3;
}
