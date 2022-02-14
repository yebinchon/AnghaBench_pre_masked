
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int xlrec ;
struct TYPE_4__ {int force; scalar_t__ node_id; scalar_t__ remote_lsn; } ;
typedef TYPE_1__ xl_replorigin_set ;
typedef scalar_t__ XLogRecPtr ;
struct TYPE_5__ {scalar_t__ roident; scalar_t__ acquired_by; scalar_t__ remote_lsn; scalar_t__ local_lsn; int lock; } ;
typedef TYPE_2__ ReplicationState ;
typedef scalar_t__ RepOriginId ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *) ;
 int VAR_6 ;
 int VAR_7 ;
 int * VAR_8 ;
 int VAR_9 ;
 int FUNC_3 () ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (char*,int) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (char*) ;
 int FUNC_9 (char*,scalar_t__,...) ;
 int VAR_10 ;
 TYPE_2__* VAR_11 ;

void
FUNC_10(RepOriginId VAR_12,
       XLogRecPtr VAR_13, XLogRecPtr VAR_14,
       bool VAR_15, bool VAR_16)
{
 int VAR_17;
 ReplicationState *VAR_18 = ((void*)0);
 ReplicationState *VAR_19 = ((void*)0);

 FUNC_0(VAR_12 != VAR_4);


 if (VAR_12 == VAR_0)
  return;
 FUNC_1(VAR_8, VAR_6);





 for (VAR_17 = 0; VAR_17 < VAR_10; VAR_17++)
 {
  ReplicationState *VAR_20 = &VAR_11[VAR_17];


  if (VAR_20->roident == VAR_4 &&
   VAR_19 == ((void*)0))
  {
   VAR_19 = VAR_20;
   continue;
  }


  if (VAR_20->roident != VAR_12)
  {
   continue;
  }


  VAR_18 = VAR_20;

  FUNC_1(&VAR_18->lock, VAR_6);


  if (VAR_18->acquired_by != 0)
  {
   FUNC_6(VAR_3,
     (FUNC_7(VAR_2),
      FUNC_9("replication origin with OID %d is already active for PID %d",
       VAR_18->roident,
       VAR_18->acquired_by)));
  }

  break;
 }

 if (VAR_18 == ((void*)0) && VAR_19 == ((void*)0))
  FUNC_6(VAR_3,
    (FUNC_7(VAR_1),
     FUNC_9("could not find free replication state slot for replication origin with OID %u",
      VAR_12),
     FUNC_8("Increase max_replication_slots and try again.")));

 if (VAR_18 == ((void*)0))
 {

  FUNC_1(&VAR_19->lock, VAR_6);
  VAR_18 = VAR_19;
  FUNC_0(VAR_18->remote_lsn == VAR_5);
  FUNC_0(VAR_18->local_lsn == VAR_5);
  VAR_18->roident = VAR_12;
 }

 FUNC_0(VAR_18->roident != VAR_4);






 if (VAR_16)
 {
  xl_replorigin_set VAR_21;

  VAR_21.remote_lsn = VAR_13;
  VAR_21.node_id = VAR_12;
  VAR_21.force = VAR_15;

  FUNC_3();
  FUNC_5((char *) (&VAR_21), sizeof(VAR_21));

  FUNC_4(VAR_7, VAR_9);
 }






 if (VAR_15 || VAR_18->remote_lsn < VAR_13)
  VAR_18->remote_lsn = VAR_13;
 if (VAR_14 != VAR_5 &&
  (VAR_15 || VAR_18->local_lsn < VAR_14))
  VAR_18->local_lsn = VAR_14;
 FUNC_2(&VAR_18->lock);





 FUNC_2(VAR_8);
}
