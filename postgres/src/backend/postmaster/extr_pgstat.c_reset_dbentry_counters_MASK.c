
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int hash_ctl ;
struct TYPE_7__ {int keysize; int entrysize; } ;
struct TYPE_6__ {void* functions; void* tables; scalar_t__ stats_timestamp; int stat_reset_timestamp; scalar_t__ n_block_write_time; scalar_t__ n_block_read_time; scalar_t__ last_checksum_failure; scalar_t__ n_checksum_failures; scalar_t__ n_deadlocks; scalar_t__ n_temp_bytes; scalar_t__ n_temp_files; scalar_t__ n_conflict_startup_deadlock; scalar_t__ n_conflict_bufferpin; scalar_t__ n_conflict_snapshot; scalar_t__ n_conflict_lock; scalar_t__ n_conflict_tablespace; scalar_t__ last_autovac_time; scalar_t__ n_tuples_deleted; scalar_t__ n_tuples_updated; scalar_t__ n_tuples_inserted; scalar_t__ n_tuples_fetched; scalar_t__ n_tuples_returned; scalar_t__ n_blocks_hit; scalar_t__ n_blocks_fetched; scalar_t__ n_xact_rollback; scalar_t__ n_xact_commit; } ;
typedef int PgStat_StatTabEntry ;
typedef int PgStat_StatFuncEntry ;
typedef TYPE_1__ PgStat_StatDBEntry ;
typedef int Oid ;
typedef TYPE_2__ HASHCTL ;


 int FUNC_0 () ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 void* FUNC_1 (char*,int ,TYPE_2__*,int) ;
 int FUNC_2 (TYPE_2__*,int ,int) ;

__attribute__((used)) static void
FUNC_3(PgStat_StatDBEntry *VAR_4)
{
 HASHCTL VAR_5;

 VAR_4->n_xact_commit = 0;
 VAR_4->n_xact_rollback = 0;
 VAR_4->n_blocks_fetched = 0;
 VAR_4->n_blocks_hit = 0;
 VAR_4->n_tuples_returned = 0;
 VAR_4->n_tuples_fetched = 0;
 VAR_4->n_tuples_inserted = 0;
 VAR_4->n_tuples_updated = 0;
 VAR_4->n_tuples_deleted = 0;
 VAR_4->last_autovac_time = 0;
 VAR_4->n_conflict_tablespace = 0;
 VAR_4->n_conflict_lock = 0;
 VAR_4->n_conflict_snapshot = 0;
 VAR_4->n_conflict_bufferpin = 0;
 VAR_4->n_conflict_startup_deadlock = 0;
 VAR_4->n_temp_files = 0;
 VAR_4->n_temp_bytes = 0;
 VAR_4->n_deadlocks = 0;
 VAR_4->n_checksum_failures = 0;
 VAR_4->last_checksum_failure = 0;
 VAR_4->n_block_read_time = 0;
 VAR_4->n_block_write_time = 0;

 VAR_4->stat_reset_timestamp = FUNC_0();
 VAR_4->stats_timestamp = 0;

 FUNC_2(&VAR_5, 0, sizeof(VAR_5));
 VAR_5.keysize = sizeof(Oid);
 VAR_5.entrysize = sizeof(PgStat_StatTabEntry);
 VAR_4->tables = FUNC_1("Per-database table",
          VAR_3,
          &VAR_5,
          VAR_1 | VAR_0);

 VAR_5.keysize = sizeof(Oid);
 VAR_5.entrysize = sizeof(PgStat_StatFuncEntry);
 VAR_4->functions = FUNC_1("Per-database function",
          VAR_2,
          &VAR_5,
          VAR_1 | VAR_0);
}
