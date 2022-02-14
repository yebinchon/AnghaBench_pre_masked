
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int memtupcount; int * memtuples; } ;
typedef TYPE_1__ Tuplesortstate ;
typedef int SortTuple ;


 int FUNC_0 (int) ;
 int FUNC_1 () ;
 scalar_t__ FUNC_2 (TYPE_1__*,int *,int *) ;

__attribute__((used)) static void
FUNC_3(Tuplesortstate *VAR_0, SortTuple *VAR_1)
{
 SortTuple *VAR_2 = VAR_0->memtuples;
 unsigned int VAR_3,
    VAR_4;

 FUNC_0(VAR_0->memtupcount >= 1);

 FUNC_1();






 VAR_4 = VAR_0->memtupcount;
 VAR_3 = 0;
 for (;;)
 {
  unsigned int VAR_5 = 2 * VAR_3 + 1;

  if (VAR_5 >= VAR_4)
   break;
  if (VAR_5 + 1 < VAR_4 &&
   FUNC_2(VAR_0, &VAR_2[VAR_5], &VAR_2[VAR_5 + 1]) > 0)
   VAR_5++;
  if (FUNC_2(VAR_0, VAR_1, &VAR_2[VAR_5]) <= 0)
   break;
  VAR_2[VAR_3] = VAR_2[VAR_5];
  VAR_3 = VAR_5;
 }
 VAR_2[VAR_3] = *VAR_1;
}
