
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int tts_flags; int tts_isnull; int tts_values; int tts_tupleDescriptor; scalar_t__ tts_nvalid; int tts_mcxt; } ;
typedef TYPE_1__ TupleTableSlot ;
struct TYPE_7__ {scalar_t__ tuple; scalar_t__ off; } ;
typedef int MemoryContext ;
typedef TYPE_2__ HeapTupleTableSlot ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_1__*) ;
 int VAR_0 ;
 scalar_t__ FUNC_3 (TYPE_1__*) ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 scalar_t__ FUNC_5 (int ,int ,int ) ;

__attribute__((used)) static void
FUNC_6(TupleTableSlot *VAR_1)
{
 HeapTupleTableSlot *VAR_2 = (HeapTupleTableSlot *) VAR_1;
 MemoryContext VAR_3;

 FUNC_0(!FUNC_2(VAR_1));


 if (FUNC_3(VAR_1))
  return;

 VAR_3 = FUNC_1(VAR_1->tts_mcxt);





 VAR_1->tts_nvalid = 0;
 VAR_2->off = 0;

 if (!VAR_2->tuple)
  VAR_2->tuple = FUNC_5(VAR_1->tts_tupleDescriptor,
            VAR_1->tts_values,
            VAR_1->tts_isnull);
 else
 {





  VAR_2->tuple = FUNC_4(VAR_2->tuple);
 }

 VAR_1->tts_flags |= VAR_0;

 FUNC_1(VAR_3);
}
