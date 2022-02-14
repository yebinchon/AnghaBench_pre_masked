
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int* PMSignalFlags; } ;
typedef size_t PMSignalReason ;


 TYPE_1__* VAR_0 ;

bool
FUNC_0(PMSignalReason VAR_1)
{

 if (VAR_0->PMSignalFlags[VAR_1])
 {
  VAR_0->PMSignalFlags[VAR_1] = 0;
  return 1;
 }
 return 0;
}
