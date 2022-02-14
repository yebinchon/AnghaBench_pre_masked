
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_13__ {int iTransId; scalar_t__ nByte; scalar_t__ nHeight; scalar_t__ iRoot; } ;
struct TYPE_10__ {int cksum1; int cksum0; TYPE_1__* aRegion; } ;
struct TYPE_11__ {scalar_t__ iOldShmid; int iOldLog; scalar_t__ iNextShmid; TYPE_6__ root; int oldroot; TYPE_3__ log; int oldcksum1; int oldcksum0; } ;
struct TYPE_12__ {scalar_t__ iReader; TYPE_4__ treehdr; TYPE_2__* pClient; } ;
typedef TYPE_5__ lsm_db ;
typedef int i64 ;
typedef int TreeRoot ;
struct TYPE_9__ {int iLogOff; } ;
struct TYPE_8__ {int iEnd; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *,TYPE_6__*,int) ;

void FUNC_2(lsm_db *VAR_0){







  FUNC_0( VAR_0->iReader>=0 );

  if( VAR_0->treehdr.iOldShmid==0 ){
    VAR_0->treehdr.iOldLog = (VAR_0->treehdr.log.aRegion[2].iEnd << 1);
    VAR_0->treehdr.iOldLog |= (~(VAR_0->pClient->iLogOff) & (i64)0x0001);

    VAR_0->treehdr.oldcksum0 = VAR_0->treehdr.log.cksum0;
    VAR_0->treehdr.oldcksum1 = VAR_0->treehdr.log.cksum1;
    VAR_0->treehdr.iOldShmid = VAR_0->treehdr.iNextShmid-1;
    FUNC_1(&VAR_0->treehdr.oldroot, &VAR_0->treehdr.root, sizeof(TreeRoot));

    VAR_0->treehdr.root.iTransId = 1;
    VAR_0->treehdr.root.iRoot = 0;
    VAR_0->treehdr.root.nHeight = 0;
    VAR_0->treehdr.root.nByte = 0;
  }
}
