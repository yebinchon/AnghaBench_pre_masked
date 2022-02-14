
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int VOID ;
typedef size_t ULONG ;
struct TYPE_2__ {scalar_t__ ApicAddress; } ;
typedef size_t* PULONG ;


 TYPE_1__* VAR_0 ;
 size_t VAR_1 ;

VOID FUNC_0(ULONG VAR_2, ULONG VAR_3, ULONG VAR_4)
{
  PULONG VAR_5;

  VAR_5 = (PULONG)VAR_0[VAR_2].ApicAddress;
  *VAR_5 = VAR_3;
  *((PULONG)((ULONG)VAR_5 + VAR_1)) = VAR_4;
}
