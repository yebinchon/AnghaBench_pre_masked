
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_6__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int iTransId; } ;
struct TYPE_11__ {int iFirst; int nChunk; int iNextShmid; int iUsedShmid; scalar_t__ iWrite; TYPE_1__ root; } ;
struct TYPE_9__ {TYPE_6__ treehdr; } ;
typedef TYPE_2__ lsm_db ;
typedef int TreeHeader ;
struct TYPE_10__ {int iShmid; scalar_t__ iNext; } ;
typedef TYPE_3__ ShmChunk ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (TYPE_6__*,int ,int) ;
 TYPE_3__* FUNC_1 (TYPE_2__*,int,int*) ;

int FUNC_2(lsm_db *VAR_3){
  ShmChunk *VAR_4;
  int VAR_5 = VAR_0;

  FUNC_0(&VAR_3->treehdr, 0, sizeof(TreeHeader));
  VAR_3->treehdr.root.iTransId = 1;
  VAR_3->treehdr.iFirst = 1;
  VAR_3->treehdr.nChunk = 2;
  VAR_3->treehdr.iWrite = VAR_2 + VAR_1;
  VAR_3->treehdr.iNextShmid = 2;
  VAR_3->treehdr.iUsedShmid = 1;

  VAR_4 = FUNC_1(VAR_3, 1, &VAR_5);
  if( VAR_4 ){
    VAR_4->iNext = 0;
    VAR_4->iShmid = 1;
  }
  return VAR_5;
}
