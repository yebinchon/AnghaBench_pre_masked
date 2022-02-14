
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int* PMSignalFlags; } ;
typedef size_t PMSignalReason ;


 int VAR_0 ;
 TYPE_1__* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ) ;

void
FUNC_1(PMSignalReason VAR_4)
{

 if (!VAR_0)
  return;

 VAR_1->PMSignalFlags[VAR_4] = 1;

 FUNC_0(VAR_2, VAR_3);
}
