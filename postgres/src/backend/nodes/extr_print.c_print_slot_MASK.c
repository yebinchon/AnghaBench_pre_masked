
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int tts_tupleDescriptor; } ;
typedef TYPE_1__ TupleTableSlot ;


 scalar_t__ FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*,int *) ;
 int FUNC_2 (char*) ;

void
FUNC_3(TupleTableSlot *VAR_0)
{
 if (FUNC_0(VAR_0))
 {
  FUNC_2("tuple is null.\n");
  return;
 }
 if (!VAR_0->tts_tupleDescriptor)
 {
  FUNC_2("no tuple descriptor.\n");
  return;
 }

 FUNC_1(VAR_0, ((void*)0));
}
