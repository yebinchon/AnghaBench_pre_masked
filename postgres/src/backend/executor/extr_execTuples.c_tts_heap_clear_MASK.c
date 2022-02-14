
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int tts_tid; int tts_flags; scalar_t__ tts_nvalid; } ;
typedef TYPE_1__ TupleTableSlot ;
struct TYPE_6__ {int * tuple; scalar_t__ off; } ;
typedef TYPE_2__ HeapTupleTableSlot ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void
FUNC_3(TupleTableSlot *VAR_2)
{
 HeapTupleTableSlot *VAR_3 = (HeapTupleTableSlot *) VAR_2;


 if (FUNC_1(VAR_2))
 {
  FUNC_2(VAR_3->tuple);
  VAR_2->tts_flags &= ~VAR_1;
 }

 VAR_2->tts_nvalid = 0;
 VAR_2->tts_flags |= VAR_0;
 FUNC_0(&VAR_2->tts_tid);
 VAR_3->off = 0;
 VAR_3->tuple = ((void*)0);
}
