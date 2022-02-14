
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int ULONG ;
struct TYPE_8__ {struct TYPE_8__* indexCache; scalar_t__ blockToEvict; TYPE_1__* cachedBlocks; scalar_t__ indexCacheSize; scalar_t__ indexCacheLen; int ownerDirEntry; int * headOfStreamPlaceHolder; int * parentStorage; } ;
struct TYPE_7__ {int index; void* dirty; } ;
typedef int StorageImpl ;
typedef int DirRef ;
typedef TYPE_2__ BlockChainStream ;


 int FUNC_0 (TYPE_2__*) ;
 scalar_t__ FUNC_1 (int ) ;
 void* VAR_0 ;
 int FUNC_2 () ;
 TYPE_2__* FUNC_3 (int ,int ,int) ;
 int FUNC_4 (int ,int ,TYPE_2__*) ;

BlockChainStream* FUNC_5(
  StorageImpl* VAR_1,
  ULONG* VAR_2,
  DirRef VAR_3)
{
  BlockChainStream* VAR_4;

  VAR_4 = FUNC_3(FUNC_2(), 0, sizeof(BlockChainStream));
  if(!VAR_4)
    return ((void*)0);

  VAR_4->parentStorage = VAR_1;
  VAR_4->headOfStreamPlaceHolder = VAR_2;
  VAR_4->ownerDirEntry = VAR_3;
  VAR_4->indexCache = ((void*)0);
  VAR_4->indexCacheLen = 0;
  VAR_4->indexCacheSize = 0;
  VAR_4->cachedBlocks[0].index = 0xffffffff;
  VAR_4->cachedBlocks[0].dirty = VAR_0;
  VAR_4->cachedBlocks[1].index = 0xffffffff;
  VAR_4->cachedBlocks[1].dirty = VAR_0;
  VAR_4->blockToEvict = 0;

  if (FUNC_1(FUNC_0(VAR_4)))
  {
    FUNC_4(FUNC_2(), 0, VAR_4->indexCache);
    FUNC_4(FUNC_2(), 0, VAR_4);
    return ((void*)0);
  }

  return VAR_4;
}
