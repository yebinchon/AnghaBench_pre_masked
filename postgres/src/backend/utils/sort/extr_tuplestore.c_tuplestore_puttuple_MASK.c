
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int context; } ;
typedef TYPE_1__ Tuplestorestate ;
typedef int MemoryContext ;
typedef scalar_t__ HeapTuple ;


 scalar_t__ FUNC_0 (TYPE_1__*,scalar_t__) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_1__*,void*) ;

void
FUNC_3(Tuplestorestate *VAR_0, HeapTuple VAR_1)
{
 MemoryContext VAR_2 = FUNC_1(VAR_0->context);





 VAR_1 = FUNC_0(VAR_0, VAR_1);

 FUNC_2(VAR_0, (void *) VAR_1);

 FUNC_1(VAR_2);
}
