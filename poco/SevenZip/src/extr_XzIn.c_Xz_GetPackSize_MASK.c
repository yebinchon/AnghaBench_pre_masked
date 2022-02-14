
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int UInt64 ;
struct TYPE_5__ {size_t numBlocks; TYPE_1__* blocks; } ;
struct TYPE_4__ {int totalSize; } ;
typedef TYPE_2__ CXzStream ;


 int FUNC_0 (int,int) ;

UInt64 FUNC_1(const CXzStream *VAR_0)
{
  UInt64 VAR_1 = 0;
  size_t VAR_2;
  for (VAR_2 = 0; VAR_2 < VAR_0->numBlocks; VAR_2++)
    FUNC_0(VAR_1, (VAR_0->blocks[VAR_2].totalSize + 3) & ~(UInt64)3);
  return VAR_1;
}
