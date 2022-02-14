
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;
typedef struct TYPE_13__ TYPE_10__ ;


struct TYPE_14__ {int* tts_isnull; scalar_t__* tts_values; TYPE_10__* tts_tupleDescriptor; } ;
typedef TYPE_1__ TupleTableSlot ;
struct TYPE_18__ {struct TYPE_18__* previous; void* arg; int callback; } ;
struct TYPE_17__ {int atttypmod; int atttypid; int attisdropped; } ;
struct TYPE_16__ {int* attrmap; } ;
struct TYPE_15__ {int local_attnum; int remote_attnum; TYPE_3__* rel; } ;
struct TYPE_13__ {int natts; } ;
typedef TYPE_2__ SlotErrCallbackArg ;
typedef int Oid ;
typedef TYPE_3__ LogicalRepRelMapEntry ;
typedef TYPE_4__* Form_pg_attribute ;
typedef TYPE_5__ ErrorContextCallback ;
typedef scalar_t__ Datum ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 scalar_t__ FUNC_2 (int ,char*,int ,int ) ;
 TYPE_4__* FUNC_3 (TYPE_10__*,int) ;
 TYPE_5__* VAR_0 ;
 int FUNC_4 (int ,int *,int *) ;
 int VAR_1 ;

__attribute__((used)) static void
FUNC_5(TupleTableSlot *VAR_2, LogicalRepRelMapEntry *VAR_3,
     char **VAR_4)
{
 int VAR_5 = VAR_2->tts_tupleDescriptor->natts;
 int VAR_6;
 SlotErrCallbackArg VAR_7;
 ErrorContextCallback VAR_8;

 FUNC_0(VAR_2);


 VAR_7.rel = VAR_3;
 VAR_7.local_attnum = -1;
 VAR_7.remote_attnum = -1;
 VAR_8.callback = VAR_1;
 VAR_8.arg = (void *) &VAR_7;
 VAR_8.previous = VAR_0;
 VAR_0 = &VAR_8;


 for (VAR_6 = 0; VAR_6 < VAR_5; VAR_6++)
 {
  Form_pg_attribute VAR_9 = FUNC_3(VAR_2->tts_tupleDescriptor, VAR_6);
  int VAR_10 = VAR_3->attrmap[VAR_6];

  if (!VAR_9->attisdropped && VAR_10 >= 0 &&
   VAR_4[VAR_10] != ((void*)0))
  {
   Oid VAR_11;
   Oid VAR_12;

   VAR_7.local_attnum = VAR_6;
   VAR_7.remote_attnum = VAR_10;

   FUNC_4(VAR_9->atttypid, &VAR_11, &VAR_12);
   VAR_2->tts_values[VAR_6] =
    FUNC_2(VAR_11, VAR_4[VAR_10],
          VAR_12, VAR_9->atttypmod);
   VAR_2->tts_isnull[VAR_6] = 0;

   VAR_7.local_attnum = -1;
   VAR_7.remote_attnum = -1;
  }
  else
  {





   VAR_2->tts_values[VAR_6] = (Datum) 0;
   VAR_2->tts_isnull[VAR_6] = 1;
  }
 }


 VAR_0 = VAR_8.previous;

 FUNC_1(VAR_2);
}
