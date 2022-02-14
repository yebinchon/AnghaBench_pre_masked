
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int running; scalar_t__ firsttuple; int bufusage; scalar_t__ need_bufusage; scalar_t__ nfiltered2; scalar_t__ nfiltered1; scalar_t__ nloops; scalar_t__ ntuples2; scalar_t__ ntuples; scalar_t__ total; scalar_t__ startup; scalar_t__ tuplecount; int counter; } ;
typedef TYPE_1__ Instrumentation ;


 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int ,int ) ;

void
FUNC_2(Instrumentation *VAR_0, Instrumentation *VAR_1)
{
 if (!VAR_0->running && VAR_1->running)
 {
  VAR_0->running = 1;
  VAR_0->firsttuple = VAR_1->firsttuple;
 }
 else if (VAR_0->running && VAR_1->running && VAR_0->firsttuple > VAR_1->firsttuple)
  VAR_0->firsttuple = VAR_1->firsttuple;

 FUNC_1(VAR_0->counter, VAR_1->counter);

 VAR_0->tuplecount += VAR_1->tuplecount;
 VAR_0->startup += VAR_1->startup;
 VAR_0->total += VAR_1->total;
 VAR_0->ntuples += VAR_1->ntuples;
 VAR_0->ntuples2 += VAR_1->ntuples2;
 VAR_0->nloops += VAR_1->nloops;
 VAR_0->nfiltered1 += VAR_1->nfiltered1;
 VAR_0->nfiltered2 += VAR_1->nfiltered2;


 if (VAR_0->need_bufusage)
  FUNC_0(&VAR_0->bufusage, &VAR_1->bufusage);
}
