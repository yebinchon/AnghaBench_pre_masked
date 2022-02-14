
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {TYPE_3__* pUnused; } ;
typedef TYPE_1__ unixInodeInfo ;
struct TYPE_6__ {int h; TYPE_3__* pUnused; TYPE_1__* pInode; } ;
typedef TYPE_2__ unixFile ;
struct TYPE_7__ {struct TYPE_7__* pNext; } ;
typedef TYPE_3__ UnixUnusedFd ;



__attribute__((used)) static void FUNC_0(unixFile *VAR_0){
  unixInodeInfo *VAR_1 = VAR_0->pInode;
  UnixUnusedFd *VAR_2 = VAR_0->pUnused;
  VAR_2->pNext = VAR_1->pUnused;
  VAR_1->pUnused = VAR_2;
  VAR_0->h = -1;
  VAR_0->pUnused = 0;
}
