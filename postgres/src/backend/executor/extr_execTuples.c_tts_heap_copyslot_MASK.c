
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int tts_mcxt; } ;
typedef TYPE_1__ TupleTableSlot ;
typedef int MemoryContext ;
typedef int HeapTuple ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ,TYPE_1__*,int) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void
FUNC_3(TupleTableSlot *VAR_0, TupleTableSlot *VAR_1)
{
 HeapTuple VAR_2;
 MemoryContext VAR_3;

 VAR_3 = FUNC_2(VAR_0->tts_mcxt);
 VAR_2 = FUNC_0(VAR_1);
 FUNC_2(VAR_3);

 FUNC_1(VAR_2, VAR_0, 1);
}
