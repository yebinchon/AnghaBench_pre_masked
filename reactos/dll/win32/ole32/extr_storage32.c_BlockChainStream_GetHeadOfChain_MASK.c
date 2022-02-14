
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ ULONG ;
struct TYPE_6__ {scalar_t__* headOfStreamPlaceHolder; scalar_t__ ownerDirEntry; int parentStorage; } ;
struct TYPE_5__ {scalar_t__ startingBlock; } ;
typedef int HRESULT ;
typedef TYPE_1__ DirEntry ;
typedef TYPE_2__ BlockChainStream ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ,scalar_t__,TYPE_1__*) ;

__attribute__((used)) static ULONG FUNC_2(BlockChainStream* VAR_3)
{
  DirEntry VAR_4;
  HRESULT VAR_5;

  if (VAR_3->headOfStreamPlaceHolder != 0)
    return *(VAR_3->headOfStreamPlaceHolder);

  if (VAR_3->ownerDirEntry != VAR_2)
  {
    VAR_5 = FUNC_1(
                      VAR_3->parentStorage,
                      VAR_3->ownerDirEntry,
                      &VAR_4);

    if (FUNC_0(VAR_5) && VAR_4.startingBlock < VAR_1)
      return VAR_4.startingBlock;
  }

  return VAR_0;
}
