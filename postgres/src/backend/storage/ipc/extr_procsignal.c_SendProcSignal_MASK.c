
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ pid_t ;
struct TYPE_3__ {scalar_t__ pss_pid; int* pss_signalFlags; } ;
typedef TYPE_1__ ProcSignalSlot ;
typedef size_t ProcSignalReason ;
typedef int BackendId ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_1__* VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (scalar_t__,int ) ;

int
FUNC_1(pid_t VAR_6, ProcSignalReason VAR_7, BackendId VAR_8)
{
 volatile ProcSignalSlot *VAR_9;

 if (VAR_8 != VAR_1)
 {
  VAR_9 = &VAR_3[VAR_8 - 1];
  if (VAR_9->pss_pid == VAR_6)
  {

   VAR_9->pss_signalFlags[VAR_7] = 1;

   return FUNC_0(VAR_6, VAR_4);
  }
 }
 else
 {






  int VAR_10;

  for (VAR_10 = VAR_2 - 1; VAR_10 >= 0; VAR_10--)
  {
   VAR_9 = &VAR_3[VAR_10];

   if (VAR_9->pss_pid == VAR_6)
   {



    VAR_9->pss_signalFlags[VAR_7] = 1;

    return FUNC_0(VAR_6, VAR_4);
   }
  }
 }

 VAR_5 = VAR_0;
 return -1;
}
