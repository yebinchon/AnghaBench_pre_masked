
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int xlrec ;
struct TYPE_3__ {scalar_t__ track_commit_timestamp; scalar_t__ wal_log_hints; scalar_t__ wal_level; scalar_t__ max_locks_per_xact; scalar_t__ max_prepared_xacts; scalar_t__ max_wal_senders; scalar_t__ max_worker_processes; scalar_t__ MaxConnections; } ;
typedef TYPE_1__ xl_parameter_change ;
typedef int XLogRecPtr ;
struct TYPE_4__ {scalar_t__ wal_level; scalar_t__ wal_log_hints; scalar_t__ MaxConnections; scalar_t__ max_worker_processes; scalar_t__ max_wal_senders; scalar_t__ max_prepared_xacts; scalar_t__ max_locks_per_xact; scalar_t__ track_commit_timestamp; } ;


 TYPE_2__* VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 () ;
 int VAR_3 ;
 int FUNC_1 () ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ) ;
 scalar_t__ FUNC_4 () ;
 int FUNC_5 (char*,int) ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;

__attribute__((used)) static void
FUNC_6(void)
{
 if (VAR_9 != VAR_0->wal_level ||
  VAR_10 != VAR_0->wal_log_hints ||
  VAR_1 != VAR_0->MaxConnections ||
  VAR_7 != VAR_0->max_worker_processes ||
  VAR_6 != VAR_0->max_wal_senders ||
  VAR_5 != VAR_0->max_prepared_xacts ||
  VAR_4 != VAR_0->max_locks_per_xact ||
  VAR_8 != VAR_0->track_commit_timestamp)
 {







  if (VAR_9 != VAR_0->wal_level || FUNC_4())
  {
   xl_parameter_change VAR_11;
   XLogRecPtr VAR_12;

   VAR_11.MaxConnections = VAR_1;
   VAR_11.max_worker_processes = VAR_7;
   VAR_11.max_wal_senders = VAR_6;
   VAR_11.max_prepared_xacts = VAR_5;
   VAR_11.max_locks_per_xact = VAR_4;
   VAR_11.wal_level = VAR_9;
   VAR_11.wal_log_hints = VAR_10;
   VAR_11.track_commit_timestamp = VAR_8;

   FUNC_1();
   FUNC_5((char *) &VAR_11, sizeof(VAR_11));

   VAR_12 = FUNC_3(VAR_2, VAR_3);
   FUNC_2(VAR_12);
  }

  VAR_0->MaxConnections = VAR_1;
  VAR_0->max_worker_processes = VAR_7;
  VAR_0->max_wal_senders = VAR_6;
  VAR_0->max_prepared_xacts = VAR_5;
  VAR_0->max_locks_per_xact = VAR_4;
  VAR_0->wal_level = VAR_9;
  VAR_0->wal_log_hints = VAR_10;
  VAR_0->track_commit_timestamp = VAR_8;
  FUNC_0();
 }
}
