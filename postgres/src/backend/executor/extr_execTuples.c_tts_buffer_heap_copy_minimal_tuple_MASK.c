
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int TupleTableSlot ;
struct TYPE_3__ {int tuple; } ;
struct TYPE_4__ {TYPE_1__ base; } ;
typedef int MinimalTuple ;
typedef TYPE_2__ BufferHeapTupleTableSlot ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static MinimalTuple
FUNC_4(TupleTableSlot *VAR_0)
{
 BufferHeapTupleTableSlot *VAR_1 = (BufferHeapTupleTableSlot *) VAR_0;

 FUNC_0(!FUNC_1(VAR_0));

 if (!VAR_1->base.tuple)
  FUNC_3(VAR_0);

 return FUNC_2(VAR_1->base.tuple);
}
