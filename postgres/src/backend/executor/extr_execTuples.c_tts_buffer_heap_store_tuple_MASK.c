
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_10__ {int tts_tid; scalar_t__ tts_nvalid; int tts_flags; } ;
typedef TYPE_2__ TupleTableSlot ;
struct TYPE_9__ {scalar_t__ off; TYPE_3__* tuple; } ;
struct TYPE_12__ {scalar_t__ buffer; TYPE_1__ base; } ;
struct TYPE_11__ {int t_self; } ;
typedef TYPE_3__* HeapTuple ;
typedef TYPE_4__ BufferHeapTupleTableSlot ;
typedef scalar_t__ Buffer ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (TYPE_3__*) ;

__attribute__((used)) static inline void
FUNC_6(TupleTableSlot *VAR_2, HeapTuple VAR_3,
       Buffer VAR_4, bool VAR_5)
{
 BufferHeapTupleTableSlot *VAR_6 = (BufferHeapTupleTableSlot *) VAR_2;

 if (FUNC_4(VAR_2))
 {

  FUNC_0(!FUNC_1(VAR_6->buffer));

  FUNC_5(VAR_6->base.tuple);
  VAR_2->tts_flags &= ~VAR_1;
 }

 VAR_2->tts_flags &= ~VAR_0;
 VAR_2->tts_nvalid = 0;
 VAR_6->base.tuple = VAR_3;
 VAR_6->base.off = 0;
 VAR_2->tts_tid = VAR_3->t_self;
 if (VAR_6->buffer != VAR_4)
 {
  if (FUNC_1(VAR_6->buffer))
   FUNC_3(VAR_6->buffer);

  VAR_6->buffer = VAR_4;

  if (!VAR_5 && FUNC_1(VAR_4))
   FUNC_2(VAR_4);
 }
 else if (VAR_5 && FUNC_1(VAR_4))
 {




  FUNC_3(VAR_4);
 }
}
