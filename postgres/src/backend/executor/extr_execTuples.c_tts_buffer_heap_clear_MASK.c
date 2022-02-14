
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int tts_tid; int tts_flags; scalar_t__ tts_nvalid; } ;
typedef TYPE_2__ TupleTableSlot ;
struct TYPE_6__ {scalar_t__ off; int * tuple; } ;
struct TYPE_8__ {int buffer; TYPE_1__ base; } ;
typedef TYPE_3__ BufferHeapTupleTableSlot ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_0 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void
FUNC_6(TupleTableSlot *VAR_3)
{
 BufferHeapTupleTableSlot *VAR_4 = (BufferHeapTupleTableSlot *) VAR_3;






 if (FUNC_4(VAR_3))
 {

  FUNC_0(!FUNC_1(VAR_4->buffer));

  FUNC_5(VAR_4->base.tuple);
  VAR_3->tts_flags &= ~VAR_2;
 }

 if (FUNC_1(VAR_4->buffer))
  FUNC_3(VAR_4->buffer);

 VAR_3->tts_nvalid = 0;
 VAR_3->tts_flags |= VAR_1;
 FUNC_2(&VAR_3->tts_tid);
 VAR_4->base.tuple = ((void*)0);
 VAR_4->base.off = 0;
 VAR_4->buffer = VAR_0;
}
