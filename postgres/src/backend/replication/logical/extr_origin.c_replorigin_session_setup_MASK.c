
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ roident; scalar_t__ acquired_by; scalar_t__ remote_lsn; scalar_t__ local_lsn; int origin_cv; } ;
typedef TYPE_1__ ReplicationState ;
typedef scalar_t__ RepOriginId ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ) ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (char*,...) ;
 int VAR_10 ;
 int FUNC_8 (int ,int ) ;
 TYPE_1__* VAR_11 ;
 TYPE_1__* VAR_12 ;

void
FUNC_9(RepOriginId VAR_13)
{
 static bool VAR_14;
 int VAR_15;
 int VAR_16 = -1;

 if (!VAR_14)
 {
  FUNC_8(VAR_8, 0);
  VAR_14 = 1;
 }

 FUNC_0(VAR_10 > 0);

 if (VAR_12 != ((void*)0))
  FUNC_4(VAR_3,
    (FUNC_5(VAR_2),
     FUNC_7("cannot setup replication origin when one is already setup")));


 FUNC_2(VAR_9, VAR_6);





 for (VAR_15 = 0; VAR_15 < VAR_10; VAR_15++)
 {
  ReplicationState *VAR_17 = &VAR_11[VAR_15];


  if (VAR_17->roident == VAR_4 &&
   VAR_16 == -1)
  {
   VAR_16 = VAR_15;
   continue;
  }


  if (VAR_17->roident != VAR_13)
   continue;

  else if (VAR_17->acquired_by != 0)
  {
   FUNC_4(VAR_3,
     (FUNC_5(VAR_1),
      FUNC_7("replication origin with OID %d is already active for PID %d",
       VAR_17->roident, VAR_17->acquired_by)));
  }


  VAR_12 = VAR_17;
 }


 if (VAR_12 == ((void*)0) && VAR_16 == -1)
  FUNC_4(VAR_3,
    (FUNC_5(VAR_0),
     FUNC_7("could not find free replication state slot for replication origin with OID %u",
      VAR_13),
     FUNC_6("Increase max_replication_slots and try again.")));
 else if (VAR_12 == ((void*)0))
 {

  VAR_12 = &VAR_11[VAR_16];
  FUNC_0(VAR_12->remote_lsn == VAR_5);
  FUNC_0(VAR_12->local_lsn == VAR_5);
  VAR_12->roident = VAR_13;
 }


 FUNC_0(VAR_12->roident != VAR_4);

 VAR_12->acquired_by = VAR_7;

 FUNC_3(VAR_9);


 FUNC_1(&VAR_12->origin_cv);
}
