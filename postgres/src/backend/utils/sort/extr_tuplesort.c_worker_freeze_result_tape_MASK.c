
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int result_tape; scalar_t__ memtupcount; size_t worker; int tapeset; scalar_t__ memtupsize; int * memtuples; TYPE_2__* shared; } ;
typedef TYPE_1__ Tuplesortstate ;
typedef int TapeShare ;
struct TYPE_6__ {int mutex; int workersFinished; int * tapes; } ;
typedef TYPE_2__ Sharedsort ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ,int,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void
FUNC_6(Tuplesortstate *VAR_0)
{
 Sharedsort *VAR_1 = VAR_0->shared;
 TapeShare VAR_2;

 FUNC_0(FUNC_4(VAR_0));
 FUNC_0(VAR_0->result_tape != -1);
 FUNC_0(VAR_0->memtupcount == 0);





 FUNC_5(VAR_0->memtuples);

 VAR_0->memtuples = ((void*)0);
 VAR_0->memtupsize = 0;





 FUNC_1(VAR_0->tapeset, VAR_0->result_tape, &VAR_2);


 FUNC_2(&VAR_1->mutex);
 VAR_1->tapes[VAR_0->worker] = VAR_2;
 VAR_1->workersFinished++;
 FUNC_3(&VAR_1->mutex);
}
