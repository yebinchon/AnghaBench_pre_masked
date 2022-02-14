
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_4__ {int * aFrameCksum; int mxFrame; } ;
struct TYPE_5__ {int nCkpt; TYPE_1__ hdr; int writeLock; } ;
typedef TYPE_2__ Wal ;


 int FUNC_0 (int ) ;

void FUNC_1(Wal *VAR_0, u32 *VAR_1){
  FUNC_0( VAR_0->writeLock );
  VAR_1[0] = VAR_0->hdr.mxFrame;
  VAR_1[1] = VAR_0->hdr.aFrameCksum[0];
  VAR_1[2] = VAR_0->hdr.aFrameCksum[1];
  VAR_1[3] = VAR_0->nCkpt;
}
