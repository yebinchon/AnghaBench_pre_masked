
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ wal_level; int max_locks_per_xact; int max_prepared_xacts; int max_wal_senders; int max_worker_processes; int MaxConnections; } ;


 scalar_t__ VAR_0 ;
 TYPE_1__* VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (char*,int ,int ) ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;

__attribute__((used)) static void
FUNC_4(void)
{




 if (VAR_0 && VAR_1->wal_level == VAR_5)
 {
  FUNC_1(VAR_7,
    (FUNC_3("WAL was generated with wal_level=minimal, data may be missing"),
     FUNC_2("This happens if you temporarily set wal_level=minimal without taking a new base backup.")));
 }





 if (VAR_0 && VAR_3)
 {
  if (VAR_1->wal_level < VAR_6)
   FUNC_1(VAR_2,
     (FUNC_3("hot standby is not possible because wal_level was not set to \"replica\" or higher on the master server"),
      FUNC_2("Either set wal_level to \"replica\" on the master, or turn off hot_standby here.")));


  FUNC_0("max_connections",
          VAR_4,
          VAR_1->MaxConnections);
  FUNC_0("max_worker_processes",
          VAR_11,
          VAR_1->max_worker_processes);
  FUNC_0("max_wal_senders",
          VAR_10,
          VAR_1->max_wal_senders);
  FUNC_0("max_prepared_transactions",
          VAR_9,
          VAR_1->max_prepared_xacts);
  FUNC_0("max_locks_per_transaction",
          VAR_8,
          VAR_1->max_locks_per_xact);
 }
}
