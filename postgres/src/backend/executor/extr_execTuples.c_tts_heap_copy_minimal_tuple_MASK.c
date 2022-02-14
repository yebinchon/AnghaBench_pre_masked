
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int TupleTableSlot ;
struct TYPE_2__ {int tuple; } ;
typedef int MinimalTuple ;
typedef TYPE_1__ HeapTupleTableSlot ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static MinimalTuple
FUNC_2(TupleTableSlot *VAR_0)
{
 HeapTupleTableSlot *VAR_1 = (HeapTupleTableSlot *) VAR_0;

 if (!VAR_1->tuple)
  FUNC_1(VAR_0);

 return FUNC_0(VAR_1->tuple);
}
