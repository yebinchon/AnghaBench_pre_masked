
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ center; } ;
typedef TYPE_1__ gseg_picksplit_item ;



__attribute__((used)) static int
FUNC_0(const void *VAR_0, const void *VAR_1)
{
 const gseg_picksplit_item *VAR_2 = (const gseg_picksplit_item *) VAR_0;
 const gseg_picksplit_item *VAR_3 = (const gseg_picksplit_item *) VAR_1;

 if (VAR_2->center < VAR_3->center)
  return -1;
 else if (VAR_2->center == VAR_3->center)
  return 0;
 else
  return 1;
}
