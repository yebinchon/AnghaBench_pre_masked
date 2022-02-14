
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int sortcontext; } ;
typedef TYPE_1__ Tuplesortstate ;
typedef int TupleTableSlot ;
typedef int SortTuple ;
typedef int MemoryContext ;


 int FUNC_0 (TYPE_1__*,int *,void*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_1__*,int *) ;

void
FUNC_3(Tuplesortstate *VAR_0, TupleTableSlot *VAR_1)
{
 MemoryContext VAR_2 = FUNC_1(VAR_0->sortcontext);
 SortTuple VAR_3;





 FUNC_0(VAR_0, &VAR_3, (void *) VAR_1);

 FUNC_2(VAR_0, &VAR_3);

 FUNC_1(VAR_2);
}
