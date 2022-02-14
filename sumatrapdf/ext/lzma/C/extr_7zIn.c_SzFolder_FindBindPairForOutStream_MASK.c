
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t UInt32 ;
struct TYPE_5__ {size_t NumBindPairs; TYPE_1__* BindPairs; } ;
struct TYPE_4__ {size_t OutIndex; } ;
typedef TYPE_2__ CSzFolder ;



int FUNC_0(CSzFolder *VAR_0, UInt32 VAR_1)
{
  UInt32 VAR_2;
  for (VAR_2 = 0; VAR_2 < VAR_0->NumBindPairs; VAR_2++)
    if (VAR_0->BindPairs[VAR_2].OutIndex == VAR_1)
      return VAR_2;
  return -1;
}
