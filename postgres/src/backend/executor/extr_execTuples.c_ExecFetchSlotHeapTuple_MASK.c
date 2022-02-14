
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {TYPE_1__* tts_ops; } ;
typedef TYPE_2__ TupleTableSlot ;
struct TYPE_8__ {int (* get_heap_tuple ) (TYPE_2__*) ;int (* copy_heap_tuple ) (TYPE_2__*) ;int (* materialize ) (TYPE_2__*) ;} ;
typedef int HeapTuple ;


 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (TYPE_2__*) ;

HeapTuple
FUNC_5(TupleTableSlot *VAR_0, bool VAR_1, bool *VAR_2)
{



 FUNC_0(VAR_0 != ((void*)0));
 FUNC_0(!FUNC_1(VAR_0));


 if (VAR_1)
  VAR_0->tts_ops->materialize(VAR_0);

 if (VAR_0->tts_ops->get_heap_tuple == ((void*)0))
 {
  if (VAR_2)
   *VAR_2 = 1;
  return VAR_0->tts_ops->copy_heap_tuple(VAR_0);
 }
 else
 {
  if (VAR_2)
   *VAR_2 = 0;
  return VAR_0->tts_ops->get_heap_tuple(VAR_0);
 }
}
