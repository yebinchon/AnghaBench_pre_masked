
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct TYPE_5__ {scalar_t__ mxFrame; scalar_t__* aFrameCksum; } ;
struct TYPE_6__ {int writeLock; scalar_t__ nCkpt; TYPE_1__ hdr; } ;
typedef TYPE_2__ Wal ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_2__*) ;

int FUNC_2(Wal *VAR_1, u32 *VAR_2){
  int VAR_3 = VAR_0;

  FUNC_0( VAR_1->writeLock );
  FUNC_0( VAR_2[3]!=VAR_1->nCkpt || VAR_2[0]<=VAR_1->hdr.mxFrame );

  if( VAR_2[3]!=VAR_1->nCkpt ){




    VAR_2[0] = 0;
    VAR_2[3] = VAR_1->nCkpt;
  }

  if( VAR_2[0]<VAR_1->hdr.mxFrame ){
    VAR_1->hdr.mxFrame = VAR_2[0];
    VAR_1->hdr.aFrameCksum[0] = VAR_2[1];
    VAR_1->hdr.aFrameCksum[1] = VAR_2[2];
    FUNC_1(VAR_1);
  }

  return VAR_3;
}
