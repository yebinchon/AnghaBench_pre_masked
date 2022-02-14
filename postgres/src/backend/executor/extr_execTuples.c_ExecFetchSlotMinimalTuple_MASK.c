
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {TYPE_1__* tts_ops; } ;
typedef TYPE_2__ TupleTableSlot ;
struct TYPE_7__ {int (* copy_minimal_tuple ) (TYPE_2__*) ;int (* get_minimal_tuple ) (TYPE_2__*) ;} ;
typedef int MinimalTuple ;


 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_2__*) ;

MinimalTuple
FUNC_4(TupleTableSlot *VAR_0,
        bool *VAR_1)
{



 FUNC_0(VAR_0 != ((void*)0));
 FUNC_0(!FUNC_1(VAR_0));

 if (VAR_0->tts_ops->get_minimal_tuple)
 {
  if (VAR_1)
   *VAR_1 = 0;
  return VAR_0->tts_ops->get_minimal_tuple(VAR_0);
 }
 else
 {
  if (VAR_1)
   *VAR_1 = 1;
  return VAR_0->tts_ops->copy_minimal_tuple(VAR_0);
 }
}
