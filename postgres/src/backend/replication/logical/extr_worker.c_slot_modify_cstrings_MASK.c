
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_5__ ;
typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;
typedef struct TYPE_14__ TYPE_11__ ;


struct TYPE_15__ {int* tts_isnull; scalar_t__* tts_values; TYPE_11__* tts_tupleDescriptor; } ;
typedef TYPE_1__ TupleTableSlot ;
struct TYPE_19__ {struct TYPE_19__* previous; void* arg; int callback; } ;
struct TYPE_18__ {int atttypmod; int atttypid; } ;
struct TYPE_17__ {int* attrmap; } ;
struct TYPE_16__ {int local_attnum; int remote_attnum; TYPE_3__* rel; } ;
struct TYPE_14__ {int natts; } ;
typedef TYPE_2__ SlotErrCallbackArg ;
typedef int Oid ;
typedef TYPE_3__ LogicalRepRelMapEntry ;
typedef TYPE_4__* Form_pg_attribute ;
typedef TYPE_5__ ErrorContextCallback ;
typedef scalar_t__ Datum ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 scalar_t__ FUNC_2 (int ,char*,int ,int ) ;
 TYPE_4__* FUNC_3 (TYPE_11__*,int) ;
 TYPE_5__* VAR_0 ;
 int FUNC_4 (int ,int *,int *) ;
 int FUNC_5 (TYPE_1__*) ;
 int VAR_1 ;

__attribute__((used)) static void
FUNC_6(TupleTableSlot *VAR_2, LogicalRepRelMapEntry *VAR_3,
      char **VAR_4, bool *VAR_5)
{
 int VAR_6 = VAR_2->tts_tupleDescriptor->natts;
 int VAR_7;
 SlotErrCallbackArg VAR_8;
 ErrorContextCallback VAR_9;

 FUNC_5(VAR_2);
 FUNC_0(VAR_2);


 VAR_8.rel = VAR_3;
 VAR_8.local_attnum = -1;
 VAR_8.remote_attnum = -1;
 VAR_9.callback = VAR_1;
 VAR_9.arg = (void *) &VAR_8;
 VAR_9.previous = VAR_0;
 VAR_0 = &VAR_9;


 for (VAR_7 = 0; VAR_7 < VAR_6; VAR_7++)
 {
  Form_pg_attribute VAR_10 = FUNC_3(VAR_2->tts_tupleDescriptor, VAR_7);
  int VAR_11 = VAR_3->attrmap[VAR_7];

  if (VAR_11 < 0)
   continue;

  if (!VAR_5[VAR_11])
   continue;

  if (VAR_4[VAR_11] != ((void*)0))
  {
   Oid VAR_12;
   Oid VAR_13;

   VAR_8.local_attnum = VAR_7;
   VAR_8.remote_attnum = VAR_11;

   FUNC_4(VAR_10->atttypid, &VAR_12, &VAR_13);
   VAR_2->tts_values[VAR_7] =
    FUNC_2(VAR_12, VAR_4[VAR_11],
          VAR_13, VAR_10->atttypmod);
   VAR_2->tts_isnull[VAR_7] = 0;

   VAR_8.local_attnum = -1;
   VAR_8.remote_attnum = -1;
  }
  else
  {
   VAR_2->tts_values[VAR_7] = (Datum) 0;
   VAR_2->tts_isnull[VAR_7] = 1;
  }
 }


 VAR_0 = VAR_9.previous;

 FUNC_1(VAR_2);
}
