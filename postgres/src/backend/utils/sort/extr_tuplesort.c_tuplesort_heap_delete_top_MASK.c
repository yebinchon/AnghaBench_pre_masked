
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ memtupcount; int * memtuples; } ;
typedef TYPE_1__ Tuplesortstate ;
typedef int SortTuple ;


 int FUNC_0 (TYPE_1__*,int *) ;

__attribute__((used)) static void
FUNC_1(Tuplesortstate *VAR_0)
{
 SortTuple *VAR_1 = VAR_0->memtuples;
 SortTuple *VAR_2;

 if (--VAR_0->memtupcount <= 0)
  return;





 VAR_2 = &VAR_1[VAR_0->memtupcount];
 FUNC_0(VAR_0, VAR_2);
}
