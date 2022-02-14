
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int tts_isnull; int tts_values; int tts_tupleDescriptor; } ;
typedef TYPE_1__ TupleTableSlot ;
typedef int HeapTuple ;


 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int ,int ,int ) ;

__attribute__((used)) static HeapTuple
FUNC_3(TupleTableSlot *VAR_0)
{
 FUNC_0(!FUNC_1(VAR_0));

 return FUNC_2(VAR_0->tts_tupleDescriptor,
         VAR_0->tts_values,
         VAR_0->tts_isnull);
}
