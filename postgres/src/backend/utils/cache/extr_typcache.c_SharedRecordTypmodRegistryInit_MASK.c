
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_23__ TYPE_7__ ;
typedef struct TYPE_22__ TYPE_6__ ;
typedef struct TYPE_21__ TYPE_5__ ;
typedef struct TYPE_20__ TYPE_4__ ;
typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;
typedef struct TYPE_16__ TYPE_15__ ;


typedef size_t int32 ;
typedef int dsm_segment ;
typedef int dshash_table ;
typedef void* dsa_pointer ;
typedef int dsa_area ;
typedef TYPE_4__* TupleDesc ;
struct TYPE_17__ {TYPE_4__* local_tupdesc; } ;
struct TYPE_23__ {int shared; TYPE_1__ u; } ;
struct TYPE_22__ {int next_typmod; void* typmod_table_handle; void* record_table_handle; } ;
struct TYPE_18__ {void* shared_tupdesc; } ;
struct TYPE_19__ {int shared; TYPE_2__ u; } ;
struct TYPE_21__ {TYPE_3__ key; void* shared_tupdesc; TYPE_7__ typmod; } ;
struct TYPE_20__ {TYPE_7__ tdtypmod; } ;
struct TYPE_16__ {TYPE_6__* shared_typmod_registry; int * shared_typmod_table; int * shared_record_table; } ;
typedef TYPE_5__ SharedTypmodTableEntry ;
typedef TYPE_6__ SharedRecordTypmodRegistry ;
typedef TYPE_7__ SharedRecordTableKey ;
typedef TYPE_5__ SharedRecordTableEntry ;
typedef int MemoryContext ;
typedef int Datum ;


 int FUNC_0 (int) ;
 TYPE_15__* VAR_0 ;
 int VAR_1 ;
 int FUNC_1 () ;
 int FUNC_2 (int ) ;
 size_t VAR_2 ;
 TYPE_4__** VAR_3 ;
 int VAR_4 ;
 int * FUNC_3 (int *,int *,int *) ;
 TYPE_5__* FUNC_4 (int *,TYPE_7__*,int*) ;
 void* FUNC_5 (int *) ;
 int FUNC_6 (int *,TYPE_5__*) ;
 int FUNC_7 (int ,char*) ;
 int FUNC_8 (int *,int ,int ) ;
 int FUNC_9 (int *,size_t) ;
 void* FUNC_10 (int *,TYPE_4__*,size_t) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;

void
FUNC_11(SharedRecordTypmodRegistry *VAR_8,
          dsm_segment *VAR_9,
          dsa_area *VAR_10)
{
 MemoryContext VAR_11;
 dshash_table *VAR_12;
 dshash_table *VAR_13;
 int32 VAR_14;

 FUNC_0(!FUNC_1());


 FUNC_0(VAR_0->shared_typmod_registry == ((void*)0));
 FUNC_0(VAR_0->shared_record_table == ((void*)0));
 FUNC_0(VAR_0->shared_typmod_table == ((void*)0));

 VAR_11 = FUNC_2(VAR_4);


 VAR_12 = FUNC_3(VAR_10, &VAR_6, VAR_10);


 VAR_13 = FUNC_3(VAR_10, &VAR_7, ((void*)0));

 FUNC_2(VAR_11);


 VAR_8->record_table_handle = FUNC_5(VAR_12);
 VAR_8->typmod_table_handle = FUNC_5(VAR_13);
 FUNC_9(&VAR_8->next_typmod, VAR_2);





 for (VAR_14 = 0; VAR_14 < VAR_2; ++VAR_14)
 {
  SharedTypmodTableEntry *VAR_15;
  SharedRecordTableEntry *VAR_16;
  SharedRecordTableKey VAR_17;
  dsa_pointer VAR_18;
  TupleDesc VAR_19;
  bool VAR_20;

  VAR_19 = VAR_3[VAR_14];
  if (VAR_19 == ((void*)0))
   continue;


  VAR_18 = FUNC_10(VAR_10, VAR_19, VAR_14);


  VAR_15 = FUNC_4(VAR_13,
               &VAR_19->tdtypmod,
               &VAR_20);
  if (VAR_20)
   FUNC_7(VAR_1, "cannot create duplicate shared record typmod");
  VAR_15->typmod = VAR_19->tdtypmod;
  VAR_15->shared_tupdesc = VAR_18;
  FUNC_6(VAR_13, VAR_15);


  VAR_17.shared = 0;
  VAR_17.u.local_tupdesc = VAR_19;
  VAR_16 = FUNC_4(VAR_12,
               &VAR_17,
               &VAR_20);
  if (!VAR_20)
  {
   VAR_16->key.shared = 1;
   VAR_16->key.u.shared_tupdesc = VAR_18;
  }
  FUNC_6(VAR_12, VAR_16);
 }





 VAR_0->shared_record_table = VAR_12;
 VAR_0->shared_typmod_table = VAR_13;
 VAR_0->shared_typmod_registry = VAR_8;







 FUNC_8(VAR_9, VAR_5, (Datum) 0);
}
