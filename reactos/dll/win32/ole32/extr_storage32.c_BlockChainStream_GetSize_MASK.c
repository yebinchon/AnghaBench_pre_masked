
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int ULONGLONG ;
struct TYPE_9__ {int QuadPart; } ;
typedef TYPE_1__ ULARGE_INTEGER ;
struct TYPE_12__ {int bigBlockSize; } ;
struct TYPE_11__ {TYPE_4__* parentStorage; int ownerDirEntry; int * headOfStreamPlaceHolder; } ;
struct TYPE_10__ {TYPE_1__ size; } ;
typedef TYPE_2__ DirEntry ;
typedef TYPE_3__ BlockChainStream ;


 scalar_t__ FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (TYPE_4__*,int ,TYPE_2__*) ;

__attribute__((used)) static ULARGE_INTEGER FUNC_2(BlockChainStream* VAR_0)
{
  DirEntry VAR_1;

  if(VAR_0->headOfStreamPlaceHolder == ((void*)0))
  {



    FUNC_1(
      VAR_0->parentStorage,
      VAR_0->ownerDirEntry,
      &VAR_1);

    return VAR_1.size;
  }
  else
  {





    ULARGE_INTEGER VAR_2;
    VAR_2.QuadPart =
      (ULONGLONG)FUNC_0(VAR_0) *
      VAR_0->parentStorage->bigBlockSize;

    return VAR_2;
  }
}
