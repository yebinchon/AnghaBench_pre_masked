
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_12__ {int tts_isnull; int tts_values; int tts_tupleDescriptor; int tts_flags; int tts_mcxt; } ;
typedef TYPE_2__ TupleTableSlot ;
struct TYPE_11__ {int tuple; } ;
struct TYPE_13__ {TYPE_1__ base; } ;
typedef int MemoryContext ;
typedef int HeapTuple ;
typedef TYPE_3__ BufferHeapTupleTableSlot ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (int ,TYPE_2__*,int) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_5 (TYPE_2__*) ;
 scalar_t__ FUNC_6 (TYPE_2__*) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ,int ,int ,int ) ;
 int FUNC_9 (int ) ;

void
FUNC_10(HeapTuple VAR_2,
      TupleTableSlot *VAR_3,
      bool VAR_4)
{
 if (FUNC_6(VAR_3))
 {
  FUNC_2(VAR_2, VAR_3, VAR_4);
 }
 else if (FUNC_5(VAR_3))
 {
  MemoryContext VAR_5;
  BufferHeapTupleTableSlot *VAR_6 = (BufferHeapTupleTableSlot *) VAR_3;

  FUNC_0(VAR_3);
  VAR_3->tts_flags &= ~VAR_0;
  VAR_5 = FUNC_4(VAR_3->tts_mcxt);
  VAR_6->base.tuple = FUNC_7(VAR_2);
  VAR_3->tts_flags |= VAR_1;
  FUNC_4(VAR_5);

  if (VAR_4)
   FUNC_9(VAR_2);
 }
 else
 {
  FUNC_0(VAR_3);
  FUNC_8(VAR_2, VAR_3->tts_tupleDescriptor,
        VAR_3->tts_values, VAR_3->tts_isnull);
  FUNC_3(VAR_3);

  if (VAR_4)
  {
   FUNC_1(VAR_3);
   FUNC_9(VAR_2);
  }
 }
}
