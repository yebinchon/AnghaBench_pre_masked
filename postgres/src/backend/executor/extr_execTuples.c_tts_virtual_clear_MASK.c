
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int * data; } ;
typedef TYPE_1__ VirtualTupleTableSlot ;
struct TYPE_6__ {int tts_tid; int tts_flags; scalar_t__ tts_nvalid; } ;
typedef TYPE_2__ TupleTableSlot ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int ) ;

__attribute__((used)) static void
FUNC_4(TupleTableSlot *VAR_2)
{
 if (FUNC_3(FUNC_1(VAR_2)))
 {
  VirtualTupleTableSlot *VAR_3 = (VirtualTupleTableSlot *) VAR_2;

  FUNC_2(VAR_3->data);
  VAR_3->data = ((void*)0);

  VAR_2->tts_flags &= ~VAR_1;
 }

 VAR_2->tts_nvalid = 0;
 VAR_2->tts_flags |= VAR_0;
 FUNC_0(&VAR_2->tts_tid);
}
