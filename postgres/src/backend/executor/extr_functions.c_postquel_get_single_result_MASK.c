
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int TupleTableSlot ;
struct TYPE_6__ {int isnull; } ;
struct TYPE_5__ {int typlen; int typbyval; scalar_t__ returnsTuple; } ;
typedef TYPE_1__* SQLFunctionCachePtr ;
typedef int MemoryContext ;
typedef TYPE_2__* FunctionCallInfo ;
typedef int Datum ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (int *,int,int*) ;

__attribute__((used)) static Datum
FUNC_4(TupleTableSlot *VAR_0,
         FunctionCallInfo VAR_1,
         SQLFunctionCachePtr VAR_2,
         MemoryContext VAR_3)
{
 Datum VAR_4;
 MemoryContext VAR_5;







 VAR_5 = FUNC_1(VAR_3);

 if (VAR_2->returnsTuple)
 {

  VAR_1->isnull = 0;
  VAR_4 = FUNC_0(VAR_0);
 }
 else
 {




  VAR_4 = FUNC_3(VAR_0, 1, &(VAR_1->isnull));

  if (!VAR_1->isnull)
   VAR_4 = FUNC_2(VAR_4, VAR_2->typbyval, VAR_2->typlen);
 }

 FUNC_1(VAR_5);

 return VAR_4;
}
