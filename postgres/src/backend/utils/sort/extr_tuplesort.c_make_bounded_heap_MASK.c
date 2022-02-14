
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int memtupcount; scalar_t__ status; int bounded; int bound; int * memtuples; } ;
typedef TYPE_1__ Tuplesortstate ;
typedef int SortTuple ;


 int FUNC_0 (int) ;
 int FUNC_1 () ;
 scalar_t__ FUNC_2 (TYPE_1__*,int *,int *) ;
 int FUNC_3 (TYPE_1__*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_4 (TYPE_1__*,int *) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (TYPE_1__*,int *) ;
 int FUNC_7 (TYPE_1__*,int *) ;

__attribute__((used)) static void
FUNC_8(Tuplesortstate *VAR_2)
{
 int VAR_3 = VAR_2->memtupcount;
 int VAR_4;

 FUNC_0(VAR_2->status == VAR_1);
 FUNC_0(VAR_2->bounded);
 FUNC_0(VAR_3 >= VAR_2->bound);
 FUNC_0(FUNC_3(VAR_2));


 FUNC_5(VAR_2);

 VAR_2->memtupcount = 0;
 for (VAR_4 = 0; VAR_4 < VAR_3; VAR_4++)
 {
  if (VAR_2->memtupcount < VAR_2->bound)
  {


   SortTuple VAR_5 = VAR_2->memtuples[VAR_4];

   FUNC_6(VAR_2, &VAR_5);
  }
  else
  {





   if (FUNC_2(VAR_2, &VAR_2->memtuples[VAR_4], &VAR_2->memtuples[0]) <= 0)
   {
    FUNC_4(VAR_2, &VAR_2->memtuples[VAR_4]);
    FUNC_1();
   }
   else
    FUNC_7(VAR_2, &VAR_2->memtuples[VAR_4]);
  }
 }

 FUNC_0(VAR_2->memtupcount == VAR_2->bound);
 VAR_2->status = VAR_0;
}
