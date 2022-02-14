
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int tts_flags; int tts_tid; scalar_t__ tts_nvalid; } ;
typedef TYPE_1__ TupleTableSlot ;
struct TYPE_9__ {int t_self; } ;
struct TYPE_8__ {scalar_t__ off; TYPE_3__* tuple; } ;
typedef TYPE_2__ HeapTupleTableSlot ;
typedef TYPE_3__* HeapTuple ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*) ;

__attribute__((used)) static void
FUNC_1(TupleTableSlot *VAR_2, HeapTuple VAR_3, bool VAR_4)
{
 HeapTupleTableSlot *VAR_5 = (HeapTupleTableSlot *) VAR_2;

 FUNC_0(VAR_2);

 VAR_2->tts_nvalid = 0;
 VAR_5->tuple = VAR_3;
 VAR_5->off = 0;
 VAR_2->tts_flags &= ~(VAR_0 | VAR_1);
 VAR_2->tts_tid = VAR_3->t_self;

 if (VAR_4)
  VAR_2->tts_flags |= VAR_1;
}
