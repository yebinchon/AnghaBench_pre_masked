
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ ULONG ;
struct TYPE_6__ {scalar_t__ startingBlock; } ;
struct TYPE_5__ {scalar_t__* headOfStreamPlaceHolder; scalar_t__ ownerDirEntry; int parentStorage; } ;
typedef TYPE_1__ SmallBlockChainStream ;
typedef int HRESULT ;
typedef TYPE_2__ DirEntry ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ,scalar_t__,TYPE_2__*) ;

__attribute__((used)) static ULONG FUNC_2(
  SmallBlockChainStream* VAR_2)
{
  DirEntry VAR_3;
  HRESULT VAR_4;

  if (VAR_2->headOfStreamPlaceHolder != ((void*)0))
    return *(VAR_2->headOfStreamPlaceHolder);

  if (VAR_2->ownerDirEntry)
  {
    VAR_4 = FUNC_1(
                      VAR_2->parentStorage,
                      VAR_2->ownerDirEntry,
                      &VAR_3);

    if (FUNC_0(VAR_4) && VAR_3.startingBlock < VAR_1)
      return VAR_3.startingBlock;
  }

  return VAR_0;
}
