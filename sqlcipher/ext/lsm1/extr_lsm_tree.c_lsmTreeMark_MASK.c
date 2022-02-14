
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int nHeight; int iRoot; } ;
struct TYPE_7__ {int iNextShmid; int nChunk; int iWrite; TYPE_2__ root; } ;
struct TYPE_9__ {int rollback; TYPE_1__ treehdr; } ;
typedef TYPE_3__ lsm_db ;
struct TYPE_10__ {int iRollback; int iNextShmid; int nChunk; int iWrite; int nHeight; int iRoot; } ;
typedef TYPE_4__ TreeMark ;


 int FUNC_0 (int *) ;

void FUNC_1(lsm_db *VAR_0, TreeMark *VAR_1){
  VAR_1->iRoot = VAR_0->treehdr.root.iRoot;
  VAR_1->nHeight = VAR_0->treehdr.root.nHeight;
  VAR_1->iWrite = VAR_0->treehdr.iWrite;
  VAR_1->nChunk = VAR_0->treehdr.nChunk;
  VAR_1->iNextShmid = VAR_0->treehdr.iNextShmid;
  VAR_1->iRollback = FUNC_0(&VAR_0->rollback);
}
