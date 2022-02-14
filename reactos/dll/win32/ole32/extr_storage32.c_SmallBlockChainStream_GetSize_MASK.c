
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {int LowPart; scalar_t__ HighPart; } ;
struct TYPE_11__ {TYPE_1__ u; } ;
typedef TYPE_2__ ULARGE_INTEGER ;
struct TYPE_14__ {int smallBlockSize; } ;
struct TYPE_13__ {TYPE_2__ size; } ;
struct TYPE_12__ {int ownerDirEntry; TYPE_5__* parentStorage; int * headOfStreamPlaceHolder; } ;
typedef TYPE_3__ SmallBlockChainStream ;
typedef TYPE_4__ DirEntry ;


 int FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (TYPE_5__*,int ,TYPE_4__*) ;

__attribute__((used)) static ULARGE_INTEGER FUNC_2(SmallBlockChainStream* VAR_0)
{
  DirEntry VAR_1;

  if(VAR_0->headOfStreamPlaceHolder != ((void*)0))
  {
    ULARGE_INTEGER VAR_2;
    VAR_2.u.HighPart = 0;

    VAR_2.u.LowPart = FUNC_0(VAR_0) *
        VAR_0->parentStorage->smallBlockSize;

    return VAR_2;
  }

  FUNC_1(
    VAR_0->parentStorage,
    VAR_0->ownerDirEntry,
    &VAR_1);

  return VAR_1.size;
}
