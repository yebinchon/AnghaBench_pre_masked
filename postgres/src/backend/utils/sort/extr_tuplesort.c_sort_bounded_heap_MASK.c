
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int memtupcount; scalar_t__ status; int bounded; int bound; int boundUsed; int * memtuples; } ;
typedef TYPE_1__ Tuplesortstate ;
typedef int SortTuple ;


 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;

__attribute__((used)) static void
FUNC_4(Tuplesortstate *VAR_2)
{
 int VAR_3 = VAR_2->memtupcount;

 FUNC_0(VAR_2->status == VAR_0);
 FUNC_0(VAR_2->bounded);
 FUNC_0(VAR_3 == VAR_2->bound);
 FUNC_0(FUNC_1(VAR_2));






 while (VAR_2->memtupcount > 1)
 {
  SortTuple VAR_4 = VAR_2->memtuples[0];


  FUNC_3(VAR_2);
  VAR_2->memtuples[VAR_2->memtupcount] = VAR_4;
 }
 VAR_2->memtupcount = VAR_3;





 FUNC_2(VAR_2);

 VAR_2->status = VAR_1;
 VAR_2->boundUsed = 1;
}
