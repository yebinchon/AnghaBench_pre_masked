
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* opts; } ;
typedef TYPE_2__ TableSpaceCacheEntry ;
struct TYPE_4__ {scalar_t__ effective_io_concurrency; } ;
typedef int Oid ;


 int VAR_0 ;
 TYPE_2__* FUNC_0 (int ) ;

int
FUNC_1(Oid VAR_1)
{
 TableSpaceCacheEntry *VAR_2 = FUNC_0(VAR_1);

 if (!VAR_2->opts || VAR_2->opts->effective_io_concurrency < 0)
  return VAR_0;
 else
  return VAR_2->opts->effective_io_concurrency;
}
