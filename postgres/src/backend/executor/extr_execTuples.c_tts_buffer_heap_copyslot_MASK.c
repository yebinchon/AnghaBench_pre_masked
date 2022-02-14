
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_11__ {scalar_t__ tts_ops; int tts_flags; int tts_mcxt; } ;
typedef TYPE_2__ TupleTableSlot ;
struct TYPE_10__ {int tupdata; int * tuple; } ;
struct TYPE_12__ {TYPE_1__ base; int buffer; } ;
typedef int MemoryContext ;
typedef int HeapTupleData ;
typedef TYPE_3__ BufferHeapTupleTableSlot ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_2__*) ;
 int * FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (int *,int *,int) ;
 int FUNC_7 (TYPE_2__*,int *,int ,int) ;

__attribute__((used)) static void
FUNC_8(TupleTableSlot *VAR_2, TupleTableSlot *VAR_3)
{
 BufferHeapTupleTableSlot *VAR_4 = (BufferHeapTupleTableSlot *) VAR_3;
 BufferHeapTupleTableSlot *VAR_5 = (BufferHeapTupleTableSlot *) VAR_2;






 if (VAR_2->tts_ops != VAR_3->tts_ops ||
  FUNC_5(VAR_3) ||
  !VAR_4->base.tuple)
 {
  MemoryContext VAR_6;

  FUNC_2(VAR_2);
  VAR_2->tts_flags &= ~VAR_0;
  VAR_6 = FUNC_4(VAR_2->tts_mcxt);
  VAR_5->base.tuple = FUNC_3(VAR_3);
  VAR_2->tts_flags |= VAR_1;
  FUNC_4(VAR_6);
 }
 else
 {
  FUNC_0(FUNC_1(VAR_4->buffer));

  FUNC_7(VAR_2, VAR_4->base.tuple,
         VAR_4->buffer, 0);







  FUNC_6(&VAR_5->base.tupdata, VAR_5->base.tuple, sizeof(HeapTupleData));
  VAR_5->base.tuple = &VAR_5->base.tupdata;
 }
}
