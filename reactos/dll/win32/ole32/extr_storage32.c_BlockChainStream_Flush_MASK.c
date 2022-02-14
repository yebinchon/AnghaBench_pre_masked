
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* cachedBlocks; int parentStorage; } ;
struct TYPE_4__ {scalar_t__ dirty; int data; int sector; } ;
typedef int HRESULT ;
typedef TYPE_2__ BlockChainStream ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ,int ,int ) ;

HRESULT FUNC_1(BlockChainStream* VAR_3)
{
  int VAR_4;
  if (!VAR_3) return VAR_2;
  for (VAR_4=0; VAR_4<2; VAR_4++)
  {
    if (VAR_3->cachedBlocks[VAR_4].dirty)
    {
      if (FUNC_0(VAR_3->parentStorage, VAR_3->cachedBlocks[VAR_4].sector, VAR_3->cachedBlocks[VAR_4].data))
        VAR_3->cachedBlocks[VAR_4].dirty = VAR_0;
      else
        return VAR_1;
    }
  }
  return VAR_2;
}
