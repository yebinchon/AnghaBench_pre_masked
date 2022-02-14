
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


struct BlockChainRun {int lastOffset; scalar_t__ firstSector; scalar_t__ firstOffset; } ;
typedef int ULONG ;
struct TYPE_15__ {int QuadPart; } ;
typedef TYPE_2__ ULARGE_INTEGER ;
struct TYPE_18__ {int bigBlockSize; } ;
struct TYPE_17__ {int tailIndex; scalar_t__ ownerDirEntry; int numBlocks; int indexCacheLen; TYPE_1__* cachedBlocks; TYPE_5__* parentStorage; struct BlockChainRun* indexCache; void** headOfStreamPlaceHolder; } ;
struct TYPE_16__ {void* startingBlock; } ;
struct TYPE_14__ {int index; int dirty; } ;
typedef TYPE_3__ DirEntry ;
typedef TYPE_4__ BlockChainStream ;
typedef int BOOL ;


 void* VAR_0 ;
 int FUNC_0 (TYPE_4__*,int) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (TYPE_5__*,scalar_t__) ;
 int FUNC_2 (TYPE_5__*,scalar_t__,TYPE_3__*) ;
 int FUNC_3 (TYPE_5__*,int,void*) ;
 int FUNC_4 (TYPE_5__*,scalar_t__,TYPE_3__*) ;
 int VAR_3 ;
 int FUNC_5 (int) ;

__attribute__((used)) static BOOL FUNC_6(BlockChainStream* VAR_4,
                                    ULARGE_INTEGER VAR_5)
{
  ULONG VAR_6;
  ULONG VAR_7;
  int VAR_8;




  VAR_7 = VAR_5.QuadPart / VAR_4->parentStorage->bigBlockSize;

  if ((VAR_5.QuadPart % VAR_4->parentStorage->bigBlockSize) != 0)
    VAR_7++;

  if (VAR_7)
  {



    VAR_6 = FUNC_0(VAR_4, VAR_7-1);


    FUNC_3(
      VAR_4->parentStorage,
      VAR_6,
      VAR_0);

    VAR_4->tailIndex = VAR_6;
  }
  else
  {
    if (VAR_4->headOfStreamPlaceHolder != 0)
    {
      *VAR_4->headOfStreamPlaceHolder = VAR_0;
    }
    else
    {
      DirEntry VAR_9;
      FUNC_5(VAR_4->ownerDirEntry != VAR_1);

      FUNC_2(
        VAR_4->parentStorage,
        VAR_4->ownerDirEntry,
        &VAR_9);

      VAR_9.startingBlock = VAR_0;

      FUNC_4(
        VAR_4->parentStorage,
        VAR_4->ownerDirEntry,
        &VAR_9);
    }

    VAR_4->tailIndex = VAR_0;
  }

  VAR_4->numBlocks = VAR_7;




  while (VAR_4->indexCacheLen && VAR_4->indexCache[VAR_4->indexCacheLen-1].lastOffset >= VAR_7)
  {
    struct BlockChainRun *VAR_10 = &VAR_4->indexCache[VAR_4->indexCacheLen-1];
    FUNC_1(VAR_4->parentStorage,
      VAR_10->firstSector + VAR_10->lastOffset - VAR_10->firstOffset);
    if (VAR_10->lastOffset == VAR_10->firstOffset)
      VAR_4->indexCacheLen--;
    else
      VAR_10->lastOffset--;
  }




  for (VAR_8=0; VAR_8<2; VAR_8++)
  {
    if (VAR_4->cachedBlocks[VAR_8].index >= VAR_7)
    {
      VAR_4->cachedBlocks[VAR_8].index = 0xffffffff;
      VAR_4->cachedBlocks[VAR_8].dirty = VAR_2;
    }
  }

  return VAR_3;
}
