
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int tts_nvalid; int tts_flags; int * tts_isnull; int * tts_values; TYPE_2__* tts_tupleDescriptor; } ;
typedef TYPE_1__ TupleTableSlot ;
typedef TYPE_2__* TupleDesc ;
struct TYPE_9__ {scalar_t__ natts; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;

__attribute__((used)) static void
FUNC_4(TupleTableSlot *VAR_1, TupleTableSlot *VAR_2)
{
 TupleDesc VAR_3 = VAR_2->tts_tupleDescriptor;

 FUNC_0(VAR_3->natts <= VAR_1->tts_tupleDescriptor->natts);

 FUNC_2(VAR_1);

 FUNC_1(VAR_2);

 for (int VAR_4 = 0; VAR_4 < VAR_3->natts; VAR_4++)
 {
  VAR_1->tts_values[VAR_4] = VAR_2->tts_values[VAR_4];
  VAR_1->tts_isnull[VAR_4] = VAR_2->tts_isnull[VAR_4];
 }

 VAR_1->tts_nvalid = VAR_3->natts;
 VAR_1->tts_flags &= ~VAR_0;


 FUNC_3(VAR_1);
}
