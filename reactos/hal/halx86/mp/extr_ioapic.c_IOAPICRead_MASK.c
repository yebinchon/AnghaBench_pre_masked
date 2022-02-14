
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t ULONG ;
struct TYPE_2__ {scalar_t__ ApicAddress; } ;
typedef size_t* PULONG ;


 TYPE_1__* VAR_0 ;
 size_t VAR_1 ;

ULONG FUNC_0(ULONG VAR_2, ULONG VAR_3)
{
  PULONG VAR_4;

  VAR_4 = (PULONG)VAR_0[VAR_2].ApicAddress;
  *VAR_4 = VAR_3;
  return *((PULONG)((ULONG)VAR_4 + VAR_1));
}
