
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct redisMemOverhead {size_t total_allocated; size_t startup_allocated; float peak_allocated; float total_frag; float allocator_frag; float allocator_frag_bytes; float allocator_rss; float allocator_rss_bytes; float rss_extra; size_t repl_backlog; size_t clients_slaves; size_t clients_normal; size_t aof_buffer; size_t lua_caches; long long total_keys; int num_dbs; size_t overhead_total; size_t dataset; float peak_perc; float dataset_perc; size_t bytes_per_key; TYPE_4__* db; scalar_t__ rss_extra_bytes; scalar_t__ total_frag_bytes; } ;
typedef int robj ;
struct TYPE_11__ {int expires; int dict; } ;
typedef TYPE_2__ redisDb ;
typedef int listNode ;
typedef int listIter ;
typedef int dictEntry ;
struct TYPE_12__ {int flags; int querybuf; } ;
typedef TYPE_3__ client ;
struct TYPE_10__ {float zmalloc_used; float allocator_active; float allocator_allocated; float allocator_resident; scalar_t__ process_rss; } ;
struct TYPE_14__ {size_t initial_memory_usage; float stat_peak_memory; scalar_t__ aof_state; size_t lua_scripts_mem; int dbnum; TYPE_2__* db; int repl_scriptcache_fifo; int repl_scriptcache_dict; int lua_scripts; int aof_buf; int clients; int slaves; scalar_t__ repl_backlog; TYPE_1__ cron_malloc_stats; } ;
struct TYPE_13__ {int dbid; size_t overhead_ht_main; size_t overhead_ht_expires; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 () ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (TYPE_3__*) ;
 int * FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int * FUNC_6 (int *) ;
 TYPE_3__* FUNC_7 (int *) ;
 int FUNC_8 (int ,int *) ;
 scalar_t__ FUNC_9 (int ) ;
 int FUNC_10 (TYPE_3__*) ;
 scalar_t__ FUNC_11 (int ) ;
 TYPE_6__ VAR_3 ;
 struct redisMemOverhead* FUNC_12 (int) ;
 scalar_t__ FUNC_13 (scalar_t__) ;
 size_t FUNC_14 () ;
 TYPE_4__* FUNC_15 (TYPE_4__*,int) ;

struct redisMemOverhead *FUNC_16(void) {
    int VAR_4;
    size_t VAR_5 = 0;
    size_t VAR_6 = 0;
    size_t VAR_7 = FUNC_14();
    struct redisMemOverhead *VAR_8 = FUNC_12(sizeof(*VAR_8));

    VAR_8->total_allocated = VAR_7;
    VAR_8->startup_allocated = VAR_3.initial_memory_usage;
    VAR_8->peak_allocated = VAR_3.stat_peak_memory;
    VAR_8->total_frag =
        (float)VAR_3.cron_malloc_stats.process_rss / VAR_3.cron_malloc_stats.zmalloc_used;
    VAR_8->total_frag_bytes =
        VAR_3.cron_malloc_stats.process_rss - VAR_3.cron_malloc_stats.zmalloc_used;
    VAR_8->allocator_frag =
        (float)VAR_3.cron_malloc_stats.allocator_active / VAR_3.cron_malloc_stats.allocator_allocated;
    VAR_8->allocator_frag_bytes =
        VAR_3.cron_malloc_stats.allocator_active - VAR_3.cron_malloc_stats.allocator_allocated;
    VAR_8->allocator_rss =
        (float)VAR_3.cron_malloc_stats.allocator_resident / VAR_3.cron_malloc_stats.allocator_active;
    VAR_8->allocator_rss_bytes =
        VAR_3.cron_malloc_stats.allocator_resident - VAR_3.cron_malloc_stats.allocator_active;
    VAR_8->rss_extra =
        (float)VAR_3.cron_malloc_stats.process_rss / VAR_3.cron_malloc_stats.allocator_resident;
    VAR_8->rss_extra_bytes =
        VAR_3.cron_malloc_stats.process_rss - VAR_3.cron_malloc_stats.allocator_resident;

    VAR_5 += VAR_3.initial_memory_usage;

    VAR_6 = 0;
    if (VAR_3.repl_backlog)
        VAR_6 += FUNC_13(VAR_3.repl_backlog);
    VAR_8->repl_backlog = VAR_6;
    VAR_5 += VAR_6;

    VAR_6 = 0;
    if (FUNC_5(VAR_3.slaves)) {
        listIter VAR_9;
        listNode *VAR_10;

        FUNC_8(VAR_3.slaves,&VAR_9);
        while((VAR_10 = FUNC_6(&VAR_9))) {
            client *VAR_11 = FUNC_7(VAR_10);
            VAR_6 += FUNC_3(VAR_11);
            VAR_6 += FUNC_9(VAR_11->querybuf);
            VAR_6 += sizeof(client);
        }
    }
    VAR_8->clients_slaves = VAR_6;
    VAR_5+=VAR_6;

    VAR_6 = 0;
    if (FUNC_5(VAR_3.clients)) {
        listIter VAR_12;
        listNode *VAR_13;

        FUNC_8(VAR_3.clients,&VAR_12);
        while((VAR_13 = FUNC_6(&VAR_12))) {
            client *VAR_14 = FUNC_7(VAR_13);
            if (VAR_14->flags & VAR_2 && !(VAR_14->flags & VAR_1))
                continue;
            VAR_6 += FUNC_3(VAR_14);
            VAR_6 += FUNC_9(VAR_14->querybuf);
            VAR_6 += sizeof(client);
        }
    }
    VAR_8->clients_normal = VAR_6;
    VAR_5+=VAR_6;

    VAR_6 = 0;
    if (VAR_3.aof_state != VAR_0) {
        VAR_6 += FUNC_11(VAR_3.aof_buf);
        VAR_6 += FUNC_0();
    }
    VAR_8->aof_buffer = VAR_6;
    VAR_5+=VAR_6;

    VAR_6 = VAR_3.lua_scripts_mem;
    VAR_6 += FUNC_1(VAR_3.lua_scripts) * sizeof(dictEntry) +
        FUNC_2(VAR_3.lua_scripts) * sizeof(dictEntry*);
    VAR_6 += FUNC_1(VAR_3.repl_scriptcache_dict) * sizeof(dictEntry) +
        FUNC_2(VAR_3.repl_scriptcache_dict) * sizeof(dictEntry*);
    if (FUNC_5(VAR_3.repl_scriptcache_fifo) > 0) {
        VAR_6 += FUNC_5(VAR_3.repl_scriptcache_fifo) * (sizeof(listNode) +
            FUNC_10(FUNC_7(FUNC_4(VAR_3.repl_scriptcache_fifo))));
    }
    VAR_8->lua_caches = VAR_6;
    VAR_5+=VAR_6;

    for (VAR_4 = 0; VAR_4 < VAR_3.dbnum; VAR_4++) {
        redisDb *VAR_15 = VAR_3.db+VAR_4;
        long long VAR_16 = FUNC_1(VAR_15->dict);
        if (VAR_16==0) continue;

        VAR_8->total_keys += VAR_16;
        VAR_8->db = FUNC_15(VAR_8->db,sizeof(VAR_8->db[0])*(VAR_8->num_dbs+1));
        VAR_8->db[VAR_8->num_dbs].dbid = VAR_4;

        VAR_6 = FUNC_1(VAR_15->dict) * sizeof(dictEntry) +
              FUNC_2(VAR_15->dict) * sizeof(dictEntry*) +
              FUNC_1(VAR_15->dict) * sizeof(robj);
        VAR_8->db[VAR_8->num_dbs].overhead_ht_main = VAR_6;
        VAR_5+=VAR_6;

        VAR_6 = FUNC_1(VAR_15->expires) * sizeof(dictEntry) +
              FUNC_2(VAR_15->expires) * sizeof(dictEntry*);
        VAR_8->db[VAR_8->num_dbs].overhead_ht_expires = VAR_6;
        VAR_5+=VAR_6;

        VAR_8->num_dbs++;
    }

    VAR_8->overhead_total = VAR_5;
    VAR_8->dataset = VAR_7 - VAR_5;
    VAR_8->peak_perc = (float)VAR_7*100/VAR_8->peak_allocated;



    size_t VAR_17 = 1;
    if (VAR_7 > VAR_8->startup_allocated)
        VAR_17 = VAR_7 - VAR_8->startup_allocated;
    VAR_8->dataset_perc = (float)VAR_8->dataset*100/VAR_17;
    VAR_8->bytes_per_key = VAR_8->total_keys ? (VAR_17 / VAR_8->total_keys) : 0;

    return VAR_8;
}
