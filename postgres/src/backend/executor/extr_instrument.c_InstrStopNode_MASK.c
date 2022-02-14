
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int instr_time ;
struct TYPE_3__ {double tuplecount; int running; int counter; int firsttuple; int bufusage_start; int bufusage; scalar_t__ need_bufusage; int starttime; scalar_t__ need_timer; } ;
typedef TYPE_1__ Instrumentation ;


 int FUNC_0 (int *,int *,int *) ;
 int VAR_0 ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,char*) ;
 int VAR_1 ;

void
FUNC_7(Instrumentation *VAR_2, double VAR_3)
{
 instr_time VAR_4;


 VAR_2->tuplecount += VAR_3;


 if (VAR_2->need_timer)
 {
  if (FUNC_3(VAR_2->starttime))
   FUNC_6(VAR_0, "InstrStopNode called without start");

  FUNC_4(VAR_4);
  FUNC_1(VAR_2->counter, VAR_4, VAR_2->starttime);

  FUNC_5(VAR_2->starttime);
 }


 if (VAR_2->need_bufusage)
  FUNC_0(&VAR_2->bufusage,
        &VAR_1, &VAR_2->bufusage_start);


 if (!VAR_2->running)
 {
  VAR_2->running = 1;
  VAR_2->firsttuple = FUNC_2(VAR_2->counter);
 }
}
