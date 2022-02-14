
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int sig_atomic_t ;
struct TYPE_4__ {scalar_t__ pss_pid; int pss_signalFlags; } ;
typedef TYPE_1__ ProcSignalSlot ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int) ;
 int VAR_1 ;
 int FUNC_2 (int ,int ,int) ;
 scalar_t__ VAR_2 ;
 TYPE_1__ volatile* VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 TYPE_1__* VAR_6 ;
 int FUNC_3 (int ,char*,scalar_t__,int) ;
 int FUNC_4 (int ,int ) ;

void
FUNC_5(int VAR_7)
{
 volatile ProcSignalSlot *VAR_8;

 FUNC_0(VAR_7 >= 1 && VAR_7 <= VAR_5);

 VAR_8 = &VAR_6[VAR_7 - 1];


 if (VAR_8->pss_pid != 0)
  FUNC_3(VAR_1, "process %d taking over ProcSignal slot %d, but it's not empty",
    VAR_2, VAR_7);


 FUNC_2(VAR_8->pss_signalFlags, 0, VAR_4 * sizeof(sig_atomic_t));


 VAR_8->pss_pid = VAR_2;


 VAR_3 = VAR_8;


 FUNC_4(VAR_0, FUNC_1(VAR_7));
}
