
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int sortcontext; } ;
typedef TYPE_1__ Tuplesortstate ;
struct TYPE_7__ {int * tuple; } ;
typedef TYPE_2__ SortTuple ;
typedef int MemoryContext ;
typedef int IndexTuple ;


 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*,int,TYPE_2__*) ;

IndexTuple
FUNC_2(Tuplesortstate *VAR_0, bool VAR_1)
{
 MemoryContext VAR_2 = FUNC_0(VAR_0->sortcontext);
 SortTuple VAR_3;

 if (!FUNC_1(VAR_0, VAR_1, &VAR_3))
  VAR_3.tuple = ((void*)0);

 FUNC_0(VAR_2);

 return (IndexTuple) VAR_3.tuple;
}
