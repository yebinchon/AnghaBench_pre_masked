
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ ULONG ;
struct TYPE_7__ {scalar_t__ index; scalar_t__ sector; void* read; void* dirty; int data; } ;
struct TYPE_6__ {int blockToEvict; int parentStorage; TYPE_2__* cachedBlocks; } ;
typedef int HRESULT ;
typedef TYPE_1__ BlockChainStream ;
typedef TYPE_2__ BlockChainBlock ;
typedef scalar_t__ BOOL ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_1__*,scalar_t__) ;
 void* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ,scalar_t__,int ) ;

__attribute__((used)) static HRESULT FUNC_2(BlockChainStream *VAR_5,
    ULONG VAR_6, BlockChainBlock **VAR_7, ULONG *VAR_8, BOOL VAR_9)
{
  BlockChainBlock *VAR_10=((void*)0);
  int VAR_11;

  for (VAR_11=0; VAR_11<2; VAR_11++)
    if (VAR_5->cachedBlocks[VAR_11].index == VAR_6)
    {
      *VAR_8 = VAR_5->cachedBlocks[VAR_11].sector;
      *VAR_7 = &VAR_5->cachedBlocks[VAR_11];
      return VAR_4;
    }

  *VAR_8 = FUNC_0(VAR_5, VAR_6);
  if (*VAR_8 == VAR_0)
    return VAR_2;

  if (VAR_9)
  {
    if (VAR_5->cachedBlocks[0].index == 0xffffffff)
      VAR_10 = &VAR_5->cachedBlocks[0];
    else if (VAR_5->cachedBlocks[1].index == 0xffffffff)
      VAR_10 = &VAR_5->cachedBlocks[1];
    else
    {
      VAR_10 = &VAR_5->cachedBlocks[VAR_5->blockToEvict++];
      if (VAR_5->blockToEvict == 2)
        VAR_5->blockToEvict = 0;
    }

    if (VAR_10->dirty)
    {
      if (!FUNC_1(VAR_5->parentStorage, VAR_10->sector, VAR_10->data))
        return VAR_3;
      VAR_10->dirty = VAR_1;
    }

    VAR_10->read = VAR_1;
    VAR_10->index = VAR_6;
    VAR_10->sector = *VAR_8;
  }

  *VAR_7 = VAR_10;
  return VAR_4;
}
