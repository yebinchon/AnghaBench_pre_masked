
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int TupleTableSlot ;
struct TYPE_2__ {int tuple; } ;
typedef TYPE_1__ HeapTupleTableSlot ;
typedef int HeapTuple ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static HeapTuple
FUNC_4(TupleTableSlot *VAR_0)
{
 HeapTupleTableSlot *VAR_1 = (HeapTupleTableSlot *) VAR_0;

 FUNC_0(!FUNC_1(VAR_0));
 if (!VAR_1->tuple)
  FUNC_3(VAR_0);

 return FUNC_2(VAR_1->tuple);
}
