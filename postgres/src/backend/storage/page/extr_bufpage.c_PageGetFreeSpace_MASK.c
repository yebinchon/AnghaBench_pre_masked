
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ pd_lower; scalar_t__ pd_upper; } ;
typedef int Size ;
typedef TYPE_1__* PageHeader ;
typedef scalar_t__ Page ;
typedef int ItemIdData ;



Size
FUNC_0(Page VAR_0)
{
 int VAR_1;





 VAR_1 = (int) ((PageHeader) VAR_0)->pd_upper -
  (int) ((PageHeader) VAR_0)->pd_lower;

 if (VAR_1 < (int) sizeof(ItemIdData))
  return 0;
 VAR_1 -= sizeof(ItemIdData);

 return (Size) VAR_1;
}
