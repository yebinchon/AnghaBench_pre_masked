
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_10__ {int tts_isnull; int tts_values; TYPE_1__* tts_tupleDescriptor; } ;
typedef TYPE_2__ TupleTableSlot ;
typedef TYPE_3__* TupleDesc ;
struct TYPE_11__ {scalar_t__ natts; } ;
struct TYPE_9__ {scalar_t__ natts; } ;
typedef int IndexTuple ;


 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (int ,TYPE_3__*,int ,int ) ;

__attribute__((used)) static void
FUNC_4(TupleTableSlot *VAR_0, IndexTuple VAR_1, TupleDesc VAR_2)
{







 FUNC_0(VAR_0->tts_tupleDescriptor->natts == VAR_2->natts);

 FUNC_1(VAR_0);
 FUNC_3(VAR_1, VAR_2, VAR_0->tts_values, VAR_0->tts_isnull);
 FUNC_2(VAR_0);
}
