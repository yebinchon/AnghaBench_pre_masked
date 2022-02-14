
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t UInt32 ;
struct TYPE_5__ {size_t NumCoders; TYPE_1__* Coders; } ;
struct TYPE_4__ {scalar_t__ NumOutStreams; } ;
typedef TYPE_2__ CSzFolder ;



UInt32 FUNC_0(CSzFolder *VAR_0)
{
  UInt32 VAR_1 = 0;
  UInt32 VAR_2;
  for (VAR_2 = 0; VAR_2 < VAR_0->NumCoders; VAR_2++)
    VAR_1 += VAR_0->Coders[VAR_2].NumOutStreams;
  return VAR_1;
}
