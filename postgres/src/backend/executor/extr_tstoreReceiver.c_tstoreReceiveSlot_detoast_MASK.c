
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct varlena {int dummy; } ;
struct TYPE_10__ {int * tts_isnull; void** tts_values; TYPE_2__* tts_tupleDescriptor; } ;
typedef TYPE_1__ TupleTableSlot ;
typedef TYPE_2__* TupleDesc ;
struct TYPE_13__ {int attlen; int attisdropped; } ;
struct TYPE_12__ {void** tofree; void** outvalues; int tstore; int cxt; } ;
struct TYPE_11__ {int natts; } ;
typedef TYPE_3__ TStoreState ;
typedef int MemoryContext ;
typedef TYPE_4__* Form_pg_attribute ;
typedef int DestReceiver ;
typedef void* Datum ;


 scalar_t__ FUNC_0 (void*) ;
 int FUNC_1 (int ) ;
 void* FUNC_2 (int ) ;
 TYPE_4__* FUNC_3 (TYPE_2__*,int) ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 int FUNC_5 (struct varlena*) ;
 int FUNC_6 (scalar_t__) ;
 int FUNC_7 (TYPE_1__*) ;
 int FUNC_8 (int ,TYPE_2__*,void**,int *) ;

__attribute__((used)) static bool
FUNC_9(TupleTableSlot *VAR_0, DestReceiver *VAR_1)
{
 TStoreState *VAR_2 = (TStoreState *) VAR_1;
 TupleDesc VAR_3 = VAR_0->tts_tupleDescriptor;
 int VAR_4 = VAR_3->natts;
 int VAR_5;
 int VAR_6;
 MemoryContext VAR_7;


 FUNC_7(VAR_0);






 VAR_5 = 0;
 for (VAR_6 = 0; VAR_6 < VAR_4; VAR_6++)
 {
  Datum VAR_8 = VAR_0->tts_values[VAR_6];
  Form_pg_attribute VAR_9 = FUNC_3(VAR_3, VAR_6);

  if (!VAR_9->attisdropped && VAR_9->attlen == -1 && !VAR_0->tts_isnull[VAR_6])
  {
   if (FUNC_4(FUNC_0(VAR_8)))
   {
    VAR_8 = FUNC_2(FUNC_5((struct varlena *)
               FUNC_0(VAR_8)));
    VAR_2->tofree[VAR_5++] = VAR_8;
   }
  }

  VAR_2->outvalues[VAR_6] = VAR_8;
 }




 VAR_7 = FUNC_1(VAR_2->cxt);
 FUNC_8(VAR_2->tstore, VAR_3,
       VAR_2->outvalues, VAR_0->tts_isnull);
 FUNC_1(VAR_7);


 for (VAR_6 = 0; VAR_6 < VAR_5; VAR_6++)
  FUNC_6(FUNC_0(VAR_2->tofree[VAR_6]));

 return 1;
}
