
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ memtupcount; scalar_t__ memtupsize; int * memtuples; } ;
typedef TYPE_1__ Tuplesortstate ;
typedef int SortTuple ;


 int FUNC_0 (int) ;
 int FUNC_1 () ;
 scalar_t__ FUNC_2 (TYPE_1__*,int *,int *) ;

__attribute__((used)) static void
FUNC_3(Tuplesortstate *VAR_0, SortTuple *VAR_1)
{
 SortTuple *VAR_2;
 int VAR_3;

 VAR_2 = VAR_0->memtuples;
 FUNC_0(VAR_0->memtupcount < VAR_0->memtupsize);

 FUNC_1();





 VAR_3 = VAR_0->memtupcount++;
 while (VAR_3 > 0)
 {
  int VAR_4 = (VAR_3 - 1) >> 1;

  if (FUNC_2(VAR_0, VAR_1, &VAR_2[VAR_4]) >= 0)
   break;
  VAR_2[VAR_3] = VAR_2[VAR_4];
  VAR_3 = VAR_4;
 }
 VAR_2[VAR_3] = *VAR_1;
}
