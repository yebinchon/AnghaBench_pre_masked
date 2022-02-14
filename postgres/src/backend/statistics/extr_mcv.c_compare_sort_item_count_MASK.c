
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ count; } ;
typedef TYPE_1__ SortItem ;



__attribute__((used)) static int
FUNC_0(const void *VAR_0, const void *VAR_1)
{
 SortItem *VAR_2 = (SortItem *) VAR_0;
 SortItem *VAR_3 = (SortItem *) VAR_1;

 if (VAR_2->count == VAR_3->count)
  return 0;
 else if (VAR_2->count > VAR_3->count)
  return -1;

 return 1;
}
