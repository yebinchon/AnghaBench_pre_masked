
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


typedef scalar_t__ ULONG ;
struct TYPE_15__ {scalar_t__ QuadPart; } ;
typedef TYPE_1__ ULARGE_INTEGER ;
struct TYPE_18__ {scalar_t__ bigBlockSize; } ;
struct TYPE_17__ {scalar_t__ ownerDirEntry; scalar_t__ tailIndex; int numBlocks; TYPE_4__* parentStorage; scalar_t__* headOfStreamPlaceHolder; } ;
struct TYPE_16__ {scalar_t__ startingBlock; } ;
typedef TYPE_2__ DirEntry ;
typedef TYPE_3__ BlockChainStream ;
typedef int BOOL ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (TYPE_3__*) ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_2 (int ) ;
 int VAR_2 ;
 int FUNC_3 (TYPE_4__*,scalar_t__,scalar_t__*) ;
 scalar_t__ FUNC_4 (TYPE_4__*) ;
 int FUNC_5 (TYPE_4__*,scalar_t__,TYPE_2__*) ;
 int FUNC_6 (TYPE_4__*,scalar_t__,scalar_t__) ;
 int FUNC_7 (TYPE_4__*,scalar_t__,TYPE_2__*) ;
 int VAR_3 ;
 int FUNC_8 (int) ;

__attribute__((used)) static BOOL FUNC_9(BlockChainStream* VAR_4,
                                     ULARGE_INTEGER VAR_5)
{
  ULONG VAR_6, VAR_7;
  ULONG VAR_8;
  ULONG VAR_9 = 0;

  VAR_6 = FUNC_0(VAR_4);




  if (VAR_6 == VAR_0)
  {
    VAR_6 = FUNC_4(VAR_4->parentStorage);
    FUNC_6(VAR_4->parentStorage,
                                      VAR_6,
                                      VAR_0);

    if (VAR_4->headOfStreamPlaceHolder != 0)
    {
      *(VAR_4->headOfStreamPlaceHolder) = VAR_6;
    }
    else
    {
      DirEntry VAR_10;
      FUNC_8(VAR_4->ownerDirEntry != VAR_1);

      FUNC_5(
        VAR_4->parentStorage,
        VAR_4->ownerDirEntry,
        &VAR_10);

      VAR_10.startingBlock = VAR_6;

      FUNC_7(
        VAR_4->parentStorage,
        VAR_4->ownerDirEntry,
        &VAR_10);
    }

    VAR_4->tailIndex = VAR_6;
    VAR_4->numBlocks = 1;
  }




  VAR_8 = VAR_5.QuadPart / VAR_4->parentStorage->bigBlockSize;

  if ((VAR_5.QuadPart % VAR_4->parentStorage->bigBlockSize) != 0)
    VAR_8++;




  if (VAR_4->tailIndex == VAR_0)
  {
    VAR_7 = VAR_6;

    while (VAR_6 != VAR_0)
    {
      VAR_4->numBlocks++;
      VAR_7 = VAR_6;

      if(FUNC_2(FUNC_3(VAR_4->parentStorage, VAR_7,
      &VAR_6)))
 return VAR_2;
    }

    VAR_4->tailIndex = VAR_7;
  }

  VAR_7 = VAR_4->tailIndex;
  VAR_9 = VAR_4->numBlocks;




  if (VAR_9 < VAR_8)
  {
    while (VAR_9 < VAR_8)
    {
      VAR_6 = FUNC_4(VAR_4->parentStorage);

      FUNC_6(
 VAR_4->parentStorage,
 VAR_7,
 VAR_6);

      FUNC_6(
        VAR_4->parentStorage,
 VAR_6,
 VAR_0);

      VAR_7 = VAR_6;
      VAR_9++;
    }

    VAR_4->tailIndex = VAR_6;
    VAR_4->numBlocks = VAR_8;
  }

  if (FUNC_2(FUNC_1(VAR_4)))
    return VAR_2;

  return VAR_3;
}
