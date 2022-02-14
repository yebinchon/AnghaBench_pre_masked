
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int* pss_signalFlags; } ;
typedef TYPE_1__ ProcSignalSlot ;
typedef size_t ProcSignalReason ;


 TYPE_1__* VAR_0 ;

__attribute__((used)) static bool
FUNC_0(ProcSignalReason VAR_1)
{
 volatile ProcSignalSlot *VAR_2 = VAR_0;

 if (VAR_2 != ((void*)0))
 {

  if (VAR_2->pss_signalFlags[VAR_1])
  {
   VAR_2->pss_signalFlags[VAR_1] = 0;
   return 1;
  }
 }

 return 0;
}
