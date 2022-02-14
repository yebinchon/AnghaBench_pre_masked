
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int xlrec ;
struct TYPE_8__ {scalar_t__ node_id; } ;
typedef TYPE_1__ xl_replorigin_drop ;
struct TYPE_10__ {int t_self; } ;
struct TYPE_9__ {scalar_t__ roident; scalar_t__ acquired_by; void* local_lsn; void* remote_lsn; int origin_cv; } ;
typedef TYPE_2__ ReplicationState ;
typedef scalar_t__ RepOriginId ;
typedef int Relation ;
typedef TYPE_3__* HeapTuple ;
typedef int ConditionVariable ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 (int *,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_5 (TYPE_3__*) ;
 scalar_t__ VAR_3 ;
 void* VAR_4 ;
 int FUNC_6 () ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (int ) ;
 int VAR_5 ;
 int FUNC_9 (scalar_t__) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_10 (TYPE_3__*) ;
 int VAR_8 ;
 int VAR_9 ;
 TYPE_3__* FUNC_11 (int ,int ) ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_12 () ;
 int FUNC_13 (int ,int ) ;
 int FUNC_14 (char*,int) ;
 int FUNC_15 (int ,char*,scalar_t__) ;
 int FUNC_16 (int ,int ) ;
 int FUNC_17 (int ) ;
 int FUNC_18 (char*,scalar_t__,scalar_t__) ;
 int VAR_12 ;
 TYPE_2__* VAR_13 ;
 int FUNC_19 (int ,int ) ;
 int FUNC_20 (int ,int ) ;

void
FUNC_21(RepOriginId VAR_14, bool VAR_15)
{
 HeapTuple VAR_16;
 Relation VAR_17;
 int VAR_18;

 FUNC_0(FUNC_6());





 VAR_17 = FUNC_20(VAR_9, VAR_2);




restart:
 VAR_16 = ((void*)0);
 FUNC_7(VAR_8, VAR_5);

 for (VAR_18 = 0; VAR_18 < VAR_12; VAR_18++)
 {
  ReplicationState *VAR_19 = &VAR_13[VAR_18];

  if (VAR_19->roident == VAR_14)
  {

   if (VAR_19->acquired_by != 0)
   {
    ConditionVariable *VAR_20;

    if (VAR_15)
     FUNC_16(VAR_1,
       (FUNC_17(VAR_0),
        FUNC_18("could not drop replication origin with OID %d, in use by PID %d",
         VAR_19->roident,
         VAR_19->acquired_by)));
    VAR_20 = &VAR_19->origin_cv;

    FUNC_8(VAR_8);

    FUNC_4(VAR_20, VAR_10);
    goto restart;
   }


   {
    xl_replorigin_drop VAR_21;

    VAR_21.node_id = VAR_14;
    FUNC_12();
    FUNC_14((char *) (&VAR_21), sizeof(VAR_21));
    FUNC_13(VAR_7, VAR_11);
   }


   VAR_19->roident = VAR_3;
   VAR_19->remote_lsn = VAR_4;
   VAR_19->local_lsn = VAR_4;
   break;
  }
 }
 FUNC_8(VAR_8);
 FUNC_3();




 VAR_16 = FUNC_11(VAR_6, FUNC_9(VAR_14));
 if (!FUNC_5(VAR_16))
  FUNC_15(VAR_1, "cache lookup failed for replication origin with oid %u",
    VAR_14);

 FUNC_1(VAR_17, &VAR_16->t_self);
 FUNC_10(VAR_16);

 FUNC_2();


 FUNC_19(VAR_17, VAR_2);
}
