
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ aof_delayed_fsync; scalar_t__ stat_net_output_bytes; scalar_t__ stat_net_input_bytes; TYPE_1__* inst_metric; scalar_t__ stat_sync_partial_err; scalar_t__ stat_sync_partial_ok; scalar_t__ stat_sync_full; scalar_t__ stat_rejected_conn; scalar_t__ stat_fork_rate; scalar_t__ stat_fork_time; scalar_t__ stat_active_defrag_scanned; scalar_t__ stat_active_defrag_key_misses; scalar_t__ stat_active_defrag_key_hits; scalar_t__ stat_active_defrag_misses; scalar_t__ stat_active_defrag_hits; scalar_t__ stat_keyspace_hits; scalar_t__ stat_keyspace_misses; scalar_t__ stat_evictedkeys; scalar_t__ stat_expired_time_cap_reached_count; scalar_t__ stat_expired_stale_perc; scalar_t__ stat_expiredkeys; scalar_t__ stat_numconnections; scalar_t__ stat_numcommands; } ;
struct TYPE_3__ {int samples; scalar_t__ last_sample_count; int last_sample_time; scalar_t__ idx; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int) ;
 int FUNC_1 () ;
 TYPE_2__ VAR_1 ;

void FUNC_2(void) {
    int VAR_2;

    VAR_1.stat_numcommands = 0;
    VAR_1.stat_numconnections = 0;
    VAR_1.stat_expiredkeys = 0;
    VAR_1.stat_expired_stale_perc = 0;
    VAR_1.stat_expired_time_cap_reached_count = 0;
    VAR_1.stat_evictedkeys = 0;
    VAR_1.stat_keyspace_misses = 0;
    VAR_1.stat_keyspace_hits = 0;
    VAR_1.stat_active_defrag_hits = 0;
    VAR_1.stat_active_defrag_misses = 0;
    VAR_1.stat_active_defrag_key_hits = 0;
    VAR_1.stat_active_defrag_key_misses = 0;
    VAR_1.stat_active_defrag_scanned = 0;
    VAR_1.stat_fork_time = 0;
    VAR_1.stat_fork_rate = 0;
    VAR_1.stat_rejected_conn = 0;
    VAR_1.stat_sync_full = 0;
    VAR_1.stat_sync_partial_ok = 0;
    VAR_1.stat_sync_partial_err = 0;
    for (VAR_2 = 0; VAR_2 < VAR_0; VAR_2++) {
        VAR_1.inst_metric[VAR_2].idx = 0;
        VAR_1.inst_metric[VAR_2].last_sample_time = FUNC_1();
        VAR_1.inst_metric[VAR_2].last_sample_count = 0;
        FUNC_0(VAR_1.inst_metric[VAR_2].samples,0,
            sizeof(VAR_1.inst_metric[VAR_2].samples));
    }
    VAR_1.stat_net_input_bytes = 0;
    VAR_1.stat_net_output_bytes = 0;
    VAR_1.aof_delayed_fsync = 0;
}
