
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ ULONG ;
struct TYPE_5__ {scalar_t__ numBlocks; scalar_t__ indexCacheLen; TYPE_1__* indexCache; } ;
struct TYPE_4__ {scalar_t__ firstOffset; scalar_t__ lastOffset; scalar_t__ firstSector; } ;
typedef TYPE_2__ BlockChainStream ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static ULONG FUNC_0(BlockChainStream *VAR_1, ULONG VAR_2)
{
  ULONG VAR_3 = 0, VAR_4 = VAR_1->numBlocks-1;
  ULONG VAR_5 = 0, VAR_6 = VAR_1->indexCacheLen-1;

  if (VAR_2 >= VAR_1->numBlocks)
    return VAR_0;

  while (VAR_5 < VAR_6)
  {
    ULONG VAR_7 = VAR_5 + (VAR_2 - VAR_3) * (VAR_6 - VAR_5) / (VAR_4 - VAR_3);
    if (VAR_2 < VAR_1->indexCache[VAR_7].firstOffset)
    {
      VAR_4 = VAR_1->indexCache[VAR_7].firstOffset-1;
      VAR_6 = VAR_7-1;
    }
    else if (VAR_2 > VAR_1->indexCache[VAR_7].lastOffset)
    {
      VAR_3 = VAR_1->indexCache[VAR_7].lastOffset+1;
      VAR_5 = VAR_7+1;
    }
    else

      VAR_5 = VAR_6 = VAR_7;
  }

  return VAR_1->indexCache[VAR_5].firstSector + VAR_2 - VAR_1->indexCache[VAR_5].firstOffset;
}
