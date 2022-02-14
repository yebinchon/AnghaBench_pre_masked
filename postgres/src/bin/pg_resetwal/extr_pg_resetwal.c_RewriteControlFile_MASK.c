
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef void* pg_time_t ;
struct TYPE_4__ {int redo; void* time; } ;
struct TYPE_5__ {int backupEndRequired; int wal_log_hints; int track_commit_timestamp; int MaxConnections; int max_wal_senders; int max_worker_processes; int max_locks_per_xact; scalar_t__ max_prepared_xacts; int wal_level; scalar_t__ backupEndPoint; scalar_t__ backupStartPoint; scalar_t__ minRecoveryPointTLI; scalar_t__ minRecoveryPoint; TYPE_1__ checkPointCopy; int checkPoint; void* time; int state; } ;


 TYPE_2__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int ,int ,int ) ;
 int VAR_5 ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (char*,TYPE_2__*,int) ;

__attribute__((used)) static void
FUNC_3(void)
{




 FUNC_0(VAR_5, VAR_2, VAR_4,
       VAR_0.checkPointCopy.redo);
 VAR_0.checkPointCopy.time = (pg_time_t) FUNC_1(((void*)0));

 VAR_0.state = VAR_1;
 VAR_0.time = (pg_time_t) FUNC_1(((void*)0));
 VAR_0.checkPoint = VAR_0.checkPointCopy.redo;
 VAR_0.minRecoveryPoint = 0;
 VAR_0.minRecoveryPointTLI = 0;
 VAR_0.backupStartPoint = 0;
 VAR_0.backupEndPoint = 0;
 VAR_0.backupEndRequired = 0;






 VAR_0.wal_level = VAR_3;
 VAR_0.wal_log_hints = 0;
 VAR_0.track_commit_timestamp = 0;
 VAR_0.MaxConnections = 100;
 VAR_0.max_wal_senders = 10;
 VAR_0.max_worker_processes = 8;
 VAR_0.max_prepared_xacts = 0;
 VAR_0.max_locks_per_xact = 64;


 FUNC_2(".", &VAR_0, 1);
}
