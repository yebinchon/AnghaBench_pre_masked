
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef size_t UInt64 ;
typedef scalar_t__ UInt32 ;
struct TYPE_12__ {size_t totalSize; size_t unpackSize; } ;
struct TYPE_11__ {size_t numBlocks; size_t numBlocksAllocated; TYPE_3__* blocks; } ;
struct TYPE_10__ {TYPE_3__* (* Alloc ) (TYPE_1__*,int) ;} ;
typedef int SRes ;
typedef TYPE_1__ ISzAlloc ;
typedef TYPE_2__ CXzStream ;
typedef TYPE_3__ CXzBlockSizes ;
typedef scalar_t__ Byte ;


 scalar_t__ FUNC_0 (scalar_t__ const*,size_t) ;
 scalar_t__ FUNC_1 (scalar_t__ const*) ;
 int FUNC_2 (scalar_t__ const*,size_t,size_t,size_t*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (TYPE_2__*,TYPE_1__*) ;
 TYPE_3__* FUNC_4 (TYPE_1__*,int) ;

__attribute__((used)) static SRes FUNC_5(CXzStream *VAR_3, const Byte *VAR_4, size_t VAR_5, ISzAlloc *VAR_6)
{
  size_t VAR_7, VAR_8, VAR_9, VAR_10 = 1;
  UInt32 VAR_11;

  if (VAR_5 < 5 || VAR_4[0] != 0)
    return VAR_0;

  VAR_5 -= 4;
  VAR_11 = FUNC_0(VAR_4, VAR_5);
  if (VAR_11 != FUNC_1(VAR_4 + VAR_5))
    return VAR_0;

  {
    UInt64 VAR_12;
    FUNC_2(VAR_4, VAR_10, VAR_5, &VAR_12);
    VAR_8 = (size_t)VAR_12;
    if (VAR_8 != VAR_12 || VAR_8 * 2 > VAR_5)
      return VAR_0;
  }

  VAR_9 = VAR_10;
  FUNC_3(VAR_3, VAR_6);
  if (VAR_8 != 0)
  {
    VAR_3->numBlocks = VAR_8;
    VAR_3->numBlocksAllocated = VAR_8;
    VAR_3->blocks = VAR_6->Alloc(VAR_6, sizeof(CXzBlockSizes) * VAR_8);
    if (VAR_3->blocks == 0)
      return VAR_1;
    for (VAR_7 = 0; VAR_7 < VAR_8; VAR_7++)
    {
      CXzBlockSizes *VAR_13 = &VAR_3->blocks[VAR_7];
      FUNC_2(VAR_4, VAR_10, VAR_5, &VAR_13->totalSize);
      FUNC_2(VAR_4, VAR_10, VAR_5, &VAR_13->unpackSize);
      if (VAR_13->totalSize == 0)
        return VAR_0;
    }
  }
  while ((VAR_10 & 3) != 0)
    if (VAR_4[VAR_10++] != 0)
      return VAR_0;
  return (VAR_10 == VAR_5) ? VAR_2 : VAR_0;
}
