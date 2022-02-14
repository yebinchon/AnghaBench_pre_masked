
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {TYPE_5__* pShmhdr; } ;
typedef TYPE_3__ lsm_db ;
struct TYPE_8__ {scalar_t__ nByte; } ;
struct TYPE_7__ {scalar_t__ nByte; } ;
struct TYPE_10__ {scalar_t__ iOldLog; TYPE_2__ oldroot; scalar_t__ iOldShmid; TYPE_1__ root; } ;
typedef TYPE_4__ TreeHeader ;
struct TYPE_11__ {int aSnap1; TYPE_4__ hdr1; } ;
typedef TYPE_5__ ShmHeader ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;

__attribute__((used)) static int FUNC_1(lsm_db *VAR_1, int *VAR_2, int *VAR_3){
  ShmHeader *VAR_4 = VAR_1->pShmhdr;
  TreeHeader *VAR_5 = &VAR_4->hdr1;
  *VAR_3 = ((int)VAR_5->root.nByte + 1023) / 1024;
  if( VAR_5->iOldShmid ){
    if( VAR_5->iOldLog==FUNC_0(VAR_4->aSnap1) ){
      *VAR_2 = 0;
    }else{
      *VAR_2 = ((int)VAR_5->oldroot.nByte + 1023) / 1024;
    }
  }else{
    *VAR_2 = 0;
  }

  return VAR_0;
}
