
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int context; } ;
typedef TYPE_1__ Tuplestorestate ;
typedef int TupleTableSlot ;
typedef scalar_t__ MinimalTuple ;
typedef int MemoryContext ;


 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_1__*,int ) ;
 int FUNC_4 (TYPE_1__*,void*) ;

void
FUNC_5(Tuplestorestate *VAR_0,
      TupleTableSlot *VAR_1)
{
 MinimalTuple VAR_2;
 MemoryContext VAR_3 = FUNC_2(VAR_0->context);




 VAR_2 = FUNC_0(VAR_1);
 FUNC_3(VAR_0, FUNC_1(VAR_2));

 FUNC_4(VAR_0, (void *) VAR_2);

 FUNC_2(VAR_3);
}
