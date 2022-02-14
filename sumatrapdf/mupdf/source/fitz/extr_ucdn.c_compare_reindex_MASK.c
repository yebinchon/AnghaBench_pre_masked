
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ start; scalar_t__ count; } ;
typedef TYPE_1__ Reindex ;



__attribute__((used)) static int FUNC_0(const void *VAR_0, const void *VAR_1)
{
 Reindex *VAR_2 = (Reindex *)VAR_0;
 Reindex *VAR_3 = (Reindex *)VAR_1;

 if (VAR_2->start < VAR_3->start)
  return -1;
 else if (VAR_2->start > (VAR_3->start + VAR_3->count))
  return 1;
 else
  return 0;
}
