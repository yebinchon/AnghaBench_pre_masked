
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int tts_flags; int tts_isnull; int tts_values; int tts_tupleDescriptor; scalar_t__ tts_nvalid; int tts_mcxt; } ;
typedef TYPE_2__ TupleTableSlot ;
struct TYPE_7__ {scalar_t__ tuple; scalar_t__ off; } ;
struct TYPE_9__ {int buffer; TYPE_1__ base; } ;
typedef int MemoryContext ;
typedef TYPE_3__ BufferHeapTupleTableSlot ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (TYPE_2__*) ;
 int VAR_1 ;
 scalar_t__ FUNC_5 (TYPE_2__*) ;
 scalar_t__ FUNC_6 (scalar_t__) ;
 scalar_t__ FUNC_7 (int ,int ,int ) ;
 scalar_t__ FUNC_8 (int ) ;

__attribute__((used)) static void
FUNC_9(TupleTableSlot *VAR_2)
{
 BufferHeapTupleTableSlot *VAR_3 = (BufferHeapTupleTableSlot *) VAR_2;
 MemoryContext VAR_4;

 FUNC_0(!FUNC_4(VAR_2));


 if (FUNC_5(VAR_2))
  return;

 VAR_4 = FUNC_2(VAR_2->tts_mcxt);





 VAR_3->base.off = 0;
 VAR_2->tts_nvalid = 0;

 if (!VAR_3->base.tuple)
 {







  VAR_3->base.tuple = FUNC_7(VAR_2->tts_tupleDescriptor,
           VAR_2->tts_values,
           VAR_2->tts_isnull);
 }
 else
 {
  VAR_3->base.tuple = FUNC_6(VAR_3->base.tuple);





  if (FUNC_8(FUNC_1(VAR_3->buffer)))
   FUNC_3(VAR_3->buffer);
  VAR_3->buffer = VAR_0;
 }
 VAR_2->tts_flags |= VAR_1;

 FUNC_2(VAR_4);
}
