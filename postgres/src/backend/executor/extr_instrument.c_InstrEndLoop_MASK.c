
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int running; double total; int nloops; scalar_t__ tuplecount; scalar_t__ firsttuple; int counter; int starttime; int ntuples; int startup; } ;
typedef TYPE_1__ Instrumentation ;


 int VAR_0 ;
 double FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,char*) ;

void
FUNC_4(Instrumentation *VAR_1)
{
 double VAR_2;


 if (!VAR_1->running)
  return;

 if (!FUNC_1(VAR_1->starttime))
  FUNC_3(VAR_0, "InstrEndLoop called on running node");


 VAR_2 = FUNC_0(VAR_1->counter);

 VAR_1->startup += VAR_1->firsttuple;
 VAR_1->total += VAR_2;
 VAR_1->ntuples += VAR_1->tuplecount;
 VAR_1->nloops += 1;


 VAR_1->running = 0;
 FUNC_2(VAR_1->starttime);
 FUNC_2(VAR_1->counter);
 VAR_1->firsttuple = 0;
 VAR_1->tuplecount = 0;
}
