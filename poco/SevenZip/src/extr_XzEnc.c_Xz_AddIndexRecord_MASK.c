
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef void* UInt64 ;
struct TYPE_14__ {void* unpackSize; void* totalSize; } ;
struct TYPE_13__ {int numBlocksAllocated; int numBlocks; TYPE_3__* blocks; } ;
struct TYPE_12__ {TYPE_3__* (* Alloc ) (TYPE_1__*,size_t) ;} ;
typedef int SRes ;
typedef TYPE_1__ ISzAlloc ;
typedef TYPE_2__ CXzStream ;
typedef TYPE_3__ CXzBlockSizes ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_2__*,TYPE_1__*) ;
 int FUNC_1 (TYPE_3__*,TYPE_3__*,int) ;
 TYPE_3__* FUNC_2 (TYPE_1__*,size_t) ;

SRes FUNC_3(CXzStream *VAR_2, UInt64 VAR_3, UInt64 VAR_4, ISzAlloc *VAR_5)
{
  if (VAR_2->blocks == 0 || VAR_2->numBlocksAllocated == VAR_2->numBlocks)
  {
    size_t VAR_6 = (VAR_2->numBlocks + 1) * 2;
    size_t VAR_7 = sizeof(CXzBlockSizes) * VAR_6;
    CXzBlockSizes *VAR_8;
    if (VAR_7 / sizeof(CXzBlockSizes) != VAR_6)
      return VAR_0;
    VAR_8 = VAR_5->Alloc(VAR_5, VAR_7);
    if (VAR_8 == 0)
      return VAR_0;
    if (VAR_2->numBlocks != 0)
    {
      FUNC_1(VAR_8, VAR_2->blocks, VAR_2->numBlocks * sizeof(CXzBlockSizes));
      FUNC_0(VAR_2, VAR_5);
    }
    VAR_2->blocks = VAR_8;
    VAR_2->numBlocksAllocated = VAR_6;
  }
  {
    CXzBlockSizes *VAR_9 = &VAR_2->blocks[VAR_2->numBlocks++];
    VAR_9->totalSize = VAR_4;
    VAR_9->unpackSize = VAR_3;
  }
  return VAR_1;
}
