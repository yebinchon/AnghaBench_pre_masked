
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int PrevTimeLineID; void* ThisTimeLineID; int end_time; } ;
typedef TYPE_1__ xl_end_of_recovery ;
typedef scalar_t__ pg_time_t ;
typedef int XLogRecPtr ;
struct TYPE_6__ {void* minRecoveryPointTLI; int minRecoveryPoint; scalar_t__ time; } ;
struct TYPE_5__ {int PrevTimeLineID; } ;


 TYPE_3__* VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 int VAR_2 ;
 int FUNC_1 () ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ) ;
 int VAR_3 ;
 int FUNC_4 () ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 void* VAR_6 ;
 int FUNC_7 () ;
 int FUNC_8 () ;
 int FUNC_9 () ;
 int VAR_7 ;
 int FUNC_10 () ;
 TYPE_2__* VAR_8 ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int ,int ) ;
 int FUNC_13 (char*,int) ;
 int FUNC_14 (int ,char*) ;
 scalar_t__ FUNC_15 (int *) ;

__attribute__((used)) static void
FUNC_16(void)
{
 xl_end_of_recovery VAR_9;
 XLogRecPtr VAR_10;


 if (!FUNC_5())
  FUNC_14(VAR_2, "can only be used to end recovery");

 VAR_9.end_time = FUNC_1();

 FUNC_8();
 VAR_9.ThisTimeLineID = VAR_6;
 VAR_9.PrevTimeLineID = VAR_8->PrevTimeLineID;
 FUNC_9();

 FUNC_4();

 FUNC_6();

 FUNC_10();
 FUNC_13((char *) &VAR_9, sizeof(xl_end_of_recovery));
 VAR_10 = FUNC_12(VAR_5, VAR_7);

 FUNC_11(VAR_10);





 FUNC_2(VAR_1, VAR_3);
 VAR_0->time = (pg_time_t) FUNC_15(((void*)0));
 VAR_0->minRecoveryPoint = VAR_10;
 VAR_0->minRecoveryPointTLI = VAR_6;
 FUNC_7();
 FUNC_3(VAR_1);

 FUNC_0();

 VAR_4 = -1;
}
