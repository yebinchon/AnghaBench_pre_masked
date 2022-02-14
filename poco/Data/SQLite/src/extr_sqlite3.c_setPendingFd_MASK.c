
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {TYPE_3__* pUnused; } ;
typedef TYPE_1__ unixInodeInfo ;
struct TYPE_7__ {int h; TYPE_3__* pPreallocatedUnused; TYPE_1__* pInode; } ;
typedef TYPE_2__ unixFile ;
struct TYPE_8__ {struct TYPE_8__* pNext; } ;
typedef TYPE_3__ UnixUnusedFd ;


 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_2__*) ;

__attribute__((used)) static void FUNC_2(unixFile *VAR_0){
  unixInodeInfo *VAR_1 = VAR_0->pInode;
  UnixUnusedFd *VAR_2 = VAR_0->pPreallocatedUnused;
  FUNC_0( FUNC_1(VAR_0) );
  VAR_2->pNext = VAR_1->pUnused;
  VAR_1->pUnused = VAR_2;
  VAR_0->h = -1;
  VAR_0->pPreallocatedUnused = 0;
}
