
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ pss_pid; } ;
typedef TYPE_1__ ProcSignalSlot ;
typedef int Datum ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 TYPE_1__ volatile* VAR_2 ;
 TYPE_1__* VAR_3 ;
 int FUNC_2 (int ,char*,scalar_t__,int,int) ;

__attribute__((used)) static void
FUNC_3(int VAR_4, Datum VAR_5)
{
 int VAR_6 = FUNC_1(VAR_5);
 volatile ProcSignalSlot *VAR_7;

 VAR_7 = &VAR_3[VAR_6 - 1];
 FUNC_0(VAR_7 == VAR_2);






 VAR_2 = ((void*)0);


 if (VAR_7->pss_pid != VAR_1)
 {




  FUNC_2(VAR_0, "process %d releasing ProcSignal slot %d, but it contains %d",
    VAR_1, VAR_6, (int) VAR_7->pss_pid);
  return;
 }

 VAR_7->pss_pid = 0;
}
