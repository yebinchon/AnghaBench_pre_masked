
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int UInt64 ;
struct TYPE_5__ {size_t num; TYPE_1__* streams; } ;
struct TYPE_4__ {scalar_t__ numBlocks; } ;
typedef TYPE_2__ CXzs ;



UInt64 FUNC_0(const CXzs *VAR_0)
{
  UInt64 VAR_1 = 0;
  size_t VAR_2;
  for (VAR_2 = 0; VAR_2 < VAR_0->num; VAR_2++)
    VAR_1 += VAR_0->streams[VAR_2].numBlocks;
  return VAR_1;
}
