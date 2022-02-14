
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct BlockChainRun {scalar_t__ lastOffset; scalar_t__ firstSector; scalar_t__ firstOffset; } ;
typedef scalar_t__ ULONG ;
struct TYPE_4__ {int indexCacheLen; int indexCacheSize; scalar_t__ tailIndex; scalar_t__ numBlocks; int parentStorage; struct BlockChainRun* indexCache; } ;
typedef int HRESULT ;
typedef TYPE_1__ BlockChainStream ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_1__*) ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 () ;
 void* FUNC_3 (int ,int ,int) ;
 int FUNC_4 (int ,int ,struct BlockChainRun*) ;
 int VAR_2 ;
 int FUNC_5 (int ,scalar_t__,scalar_t__*) ;
 int FUNC_6 (struct BlockChainRun*,struct BlockChainRun*,int) ;

__attribute__((used)) static HRESULT FUNC_7(BlockChainStream* VAR_3)
{
  ULONG VAR_4, VAR_5;
  HRESULT VAR_6;
  struct BlockChainRun *VAR_7;

  if (VAR_3->indexCacheLen == 0)
  {
    VAR_7 = ((void*)0);
    VAR_5 = 0;
    VAR_4 = FUNC_0(VAR_3);
  }
  else
  {
    VAR_7 = &VAR_3->indexCache[VAR_3->indexCacheLen-1];
    VAR_5 = VAR_7->lastOffset+1;
    VAR_6 = FUNC_5(VAR_3->parentStorage,
        VAR_7->firstSector + VAR_7->lastOffset - VAR_7->firstOffset,
        &VAR_4);
    if (FUNC_1(VAR_6)) return VAR_6;
  }

  while (VAR_4 != VAR_0)
  {
    if (!VAR_7 || VAR_4 != VAR_7->firstSector + VAR_5 - VAR_7->firstOffset)
    {

      if (VAR_3->indexCacheSize == 0)
      {
        VAR_3->indexCache = FUNC_3(FUNC_2(), 0, sizeof(struct BlockChainRun)*16);
        if (!VAR_3->indexCache) return VAR_1;
        VAR_3->indexCacheSize = 16;
      }
      else if (VAR_3->indexCacheSize == VAR_3->indexCacheLen)
      {
        struct BlockChainRun *VAR_8;
        ULONG VAR_9;

        VAR_9 = VAR_3->indexCacheSize * 2;
        VAR_8 = FUNC_3(FUNC_2(), 0, sizeof(struct BlockChainRun)*VAR_9);
        if (!VAR_8) return VAR_1;
        FUNC_6(VAR_8, VAR_3->indexCache, sizeof(struct BlockChainRun)*VAR_3->indexCacheLen);

        FUNC_4(FUNC_2(), 0, VAR_3->indexCache);
        VAR_3->indexCache = VAR_8;
        VAR_3->indexCacheSize = VAR_9;
      }

      VAR_3->indexCacheLen++;
      VAR_7 = &VAR_3->indexCache[VAR_3->indexCacheLen-1];
      VAR_7->firstSector = VAR_4;
      VAR_7->firstOffset = VAR_5;
    }

    VAR_7->lastOffset = VAR_5;


    VAR_5++;
    VAR_6 = FUNC_5(VAR_3->parentStorage, VAR_4, &VAR_4);
    if (FUNC_1(VAR_6)) return VAR_6;
  }

  if (VAR_3->indexCacheLen)
  {
    VAR_3->tailIndex = VAR_7->firstSector + VAR_7->lastOffset - VAR_7->firstOffset;
    VAR_3->numBlocks = VAR_7->lastOffset+1;
  }
  else
  {
    VAR_3->tailIndex = VAR_0;
    VAR_3->numBlocks = 0;
  }

  return VAR_2;
}
