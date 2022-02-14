
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int context; } ;
typedef TYPE_1__ Tuplestorestate ;
typedef int TupleDesc ;
typedef scalar_t__ MinimalTuple ;
typedef int MemoryContext ;
typedef int Datum ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_1__*,int ) ;
 scalar_t__ FUNC_3 (int ,int *,int*) ;
 int FUNC_4 (TYPE_1__*,void*) ;

void
FUNC_5(Tuplestorestate *VAR_0, TupleDesc VAR_1,
      Datum *VAR_2, bool *VAR_3)
{
 MinimalTuple VAR_4;
 MemoryContext VAR_5 = FUNC_1(VAR_0->context);

 VAR_4 = FUNC_3(VAR_1, VAR_2, VAR_3);
 FUNC_2(VAR_0, FUNC_0(VAR_4));

 FUNC_4(VAR_0, (void *) VAR_4);

 FUNC_1(VAR_5);
}
