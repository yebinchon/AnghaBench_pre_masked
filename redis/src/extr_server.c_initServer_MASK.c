
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int redisDb ;
struct TYPE_6__ {scalar_t__ allocator_resident; scalar_t__ allocator_active; scalar_t__ allocator_allocated; scalar_t__ process_rss; scalar_t__ zmalloc_used; } ;
struct TYPE_5__ {scalar_t__ magic; } ;
struct TYPE_8__ {int slaveseldb; scalar_t__ tls_port; int dbnum; scalar_t__ port; scalar_t__* ipfd; int ipfd_count; scalar_t__* tlsfd; int tlsfd_count; scalar_t__ sofd; int rdb_child_pid; int aof_child_pid; int module_child_pid; int* child_info_pipe; int rdb_save_time_last; int rdb_save_time_start; scalar_t__* module_blocked_pipe; scalar_t__ aof_state; int aof_fd; int arch_bits; long long maxmemory; scalar_t__ cluster_enabled; int maxmemory_policy; int aof_filename; int * el; scalar_t__ repl_good_slaves_count; scalar_t__ aof_last_write_errno; void* aof_last_write_status; void* lastbgsave_status; TYPE_2__ cron_malloc_stats; scalar_t__ stat_module_cow_bytes; scalar_t__ stat_aof_cow_bytes; scalar_t__ stat_rdb_cow_bytes; scalar_t__ stat_peak_memory; void* stat_starttime; scalar_t__ dirty; scalar_t__ lastbgsave_try; void* lastsave; int aof_buf; TYPE_1__ child_info_data; scalar_t__ rdb_bgsave_scheduled; scalar_t__ rdb_pipe_bufflen; int * rdb_pipe_buff; scalar_t__ rdb_pipe_numconns_writing; scalar_t__ rdb_pipe_numconns; int * rdb_pipe_conns; int rdb_child_type; scalar_t__ cronloops; void* pubsub_patterns; void* pubsub_channels; TYPE_3__* db; int neterr; int tcp_backlog; int unixsocketperm; int * unixsocket; scalar_t__ maxclients; int tls_ctx_config; int system_memory_size; scalar_t__ clients_paused; scalar_t__ get_ack_from_slaves; void* clients_waiting_acks; void* ready_keys; void* unblocked_clients; void* clients_pending_read; void* clients_pending_write; void* monitors; void* slaves; void* clients_to_close; int clients_index; void* clients; scalar_t__ call_depth; int * current_client; int pid; int config_hz; int hz; int syslog_facility; int syslog_ident; scalar_t__ syslog_enabled; } ;
struct TYPE_7__ {int id; void* defrag_later; scalar_t__ avg_ttl; void* watched_keys; void* ready_keys; void* blocking_keys; void* expires; void* dict; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 void* VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int FUNC_0 () ;
 int * FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (int *,scalar_t__,int ,int ,int *) ;
 scalar_t__ FUNC_3 (int *,int,int ,int *,int *) ;
 int FUNC_4 (int *,scalar_t__) ;
 scalar_t__ FUNC_5 (int ,int *,int ,int ) ;
 int FUNC_6 () ;
 int FUNC_7 () ;
 int FUNC_8 () ;
 int VAR_22 ;
 void* FUNC_9 (int *,int *) ;
 int VAR_23 ;
 int FUNC_10 () ;
 int FUNC_11 (int) ;
 int VAR_24 ;
 int FUNC_12 () ;
 int VAR_25 ;
 int VAR_26 ;
 int FUNC_13 () ;
 void* FUNC_14 () ;
 int VAR_27 ;
 int FUNC_15 (void*,int ) ;
 int FUNC_16 (void*,int ) ;
 scalar_t__ FUNC_17 (scalar_t__,scalar_t__*,int*) ;
 int VAR_28 ;
 int VAR_29 ;
 int FUNC_18 (int ,int,int) ;
 int FUNC_19 (int ,int,int ) ;
 int FUNC_20 () ;
 int FUNC_21 () ;
 int FUNC_22 () ;
 int FUNC_23 (int) ;
 int FUNC_24 () ;
 TYPE_4__ VAR_30 ;
 int VAR_31 ;
 int FUNC_25 (int ,char*,...) ;
 int FUNC_26 (char*) ;
 int FUNC_27 () ;
 int FUNC_28 (int ,int ) ;
 int FUNC_29 () ;
 int FUNC_30 (int ) ;
 void* FUNC_31 (int *) ;
 scalar_t__ FUNC_32 (int *) ;
 int FUNC_33 (int *) ;
 TYPE_3__* FUNC_34 (int) ;
 int FUNC_35 () ;

void FUNC_36(void) {
    int VAR_32;

    FUNC_28(VAR_16, VAR_18);
    FUNC_28(VAR_17, VAR_18);
    FUNC_27();

    if (VAR_30.syslog_enabled) {
        FUNC_19(VAR_30.syslog_ident, VAR_10 | VAR_8 | VAR_9,
            VAR_30.syslog_facility);
    }

    VAR_30.hz = VAR_30.config_hz;
    VAR_30.pid = FUNC_12();
    VAR_30.current_client = ((void*)0);
    VAR_30.call_depth = 0;
    VAR_30.clients = FUNC_14();
    VAR_30.clients_index = FUNC_20();
    VAR_30.clients_to_close = FUNC_14();
    VAR_30.slaves = FUNC_14();
    VAR_30.monitors = FUNC_14();
    VAR_30.clients_pending_write = FUNC_14();
    VAR_30.clients_pending_read = FUNC_14();
    VAR_30.slaveseldb = -1;
    VAR_30.unblocked_clients = FUNC_14();
    VAR_30.ready_keys = FUNC_14();
    VAR_30.clients_waiting_acks = FUNC_14();
    VAR_30.get_ack_from_slaves = 0;
    VAR_30.clients_paused = 0;
    VAR_30.system_memory_size = FUNC_35();

    if (VAR_30.tls_port && FUNC_32(&VAR_30.tls_ctx_config) == VAR_5) {
        FUNC_25(VAR_7, "Failed to configure TLS. Check logs for more info.");
        FUNC_11(1);
    }

    FUNC_8();
    FUNC_0();
    VAR_30.el = FUNC_1(VAR_30.maxclients+VAR_4);
    if (VAR_30.el == ((void*)0)) {
        FUNC_25(VAR_7,
            "Failed creating the event loop. Error message: '%s'",
            FUNC_30(VAR_23));
        FUNC_11(1);
    }
    VAR_30.db = FUNC_34(sizeof(redisDb)*VAR_30.dbnum);


    if (VAR_30.port != 0 &&
        FUNC_17(VAR_30.port,VAR_30.ipfd,&VAR_30.ipfd_count) == VAR_5)
        FUNC_11(1);
    if (VAR_30.tls_port != 0 &&
        FUNC_17(VAR_30.tls_port,VAR_30.tlsfd,&VAR_30.tlsfd_count) == VAR_5)
        FUNC_11(1);


    if (VAR_30.unixsocket != ((void*)0)) {
        FUNC_33(VAR_30.unixsocket);
        VAR_30.sofd = FUNC_5(VAR_30.neterr,VAR_30.unixsocket,
            VAR_30.unixsocketperm, VAR_30.tcp_backlog);
        if (VAR_30.sofd == VAR_2) {
            FUNC_25(VAR_7, "Opening Unix socket: %s", VAR_30.neterr);
            FUNC_11(1);
        }
        FUNC_4(((void*)0),VAR_30.sofd);
    }


    if (VAR_30.ipfd_count == 0 && VAR_30.tlsfd_count == 0 && VAR_30.sofd < 0) {
        FUNC_25(VAR_7, "Configured to not listen anywhere, exiting.");
        FUNC_11(1);
    }


    for (VAR_32 = 0; VAR_32 < VAR_30.dbnum; VAR_32++) {
        VAR_30.db[VAR_32].dict = FUNC_9(&VAR_22,((void*)0));
        VAR_30.db[VAR_32].expires = FUNC_9(&VAR_26,((void*)0));
        VAR_30.db[VAR_32].blocking_keys = FUNC_9(&VAR_25,((void*)0));
        VAR_30.db[VAR_32].ready_keys = FUNC_9(&VAR_29,((void*)0));
        VAR_30.db[VAR_32].watched_keys = FUNC_9(&VAR_25,((void*)0));
        VAR_30.db[VAR_32].id = VAR_32;
        VAR_30.db[VAR_32].avg_ttl = 0;
        VAR_30.db[VAR_32].defrag_later = FUNC_14();
    }
    FUNC_10();
    VAR_30.pubsub_channels = FUNC_9(&VAR_25,((void*)0));
    VAR_30.pubsub_patterns = FUNC_14();
    FUNC_15(VAR_30.pubsub_patterns,VAR_24);
    FUNC_16(VAR_30.pubsub_patterns,VAR_27);
    VAR_30.cronloops = 0;
    VAR_30.rdb_child_pid = -1;
    VAR_30.aof_child_pid = -1;
    VAR_30.module_child_pid = -1;
    VAR_30.rdb_child_type = VAR_15;
    VAR_30.rdb_pipe_conns = ((void*)0);
    VAR_30.rdb_pipe_numconns = 0;
    VAR_30.rdb_pipe_numconns_writing = 0;
    VAR_30.rdb_pipe_buff = ((void*)0);
    VAR_30.rdb_pipe_bufflen = 0;
    VAR_30.rdb_bgsave_scheduled = 0;
    VAR_30.child_info_pipe[0] = -1;
    VAR_30.child_info_pipe[1] = -1;
    VAR_30.child_info_data.magic = 0;
    FUNC_6();
    VAR_30.aof_buf = FUNC_24();
    VAR_30.lastsave = FUNC_31(((void*)0));
    VAR_30.lastbgsave_try = 0;
    VAR_30.rdb_save_time_last = -1;
    VAR_30.rdb_save_time_start = -1;
    VAR_30.dirty = 0;
    FUNC_22();

    VAR_30.stat_starttime = FUNC_31(((void*)0));
    VAR_30.stat_peak_memory = 0;
    VAR_30.stat_rdb_cow_bytes = 0;
    VAR_30.stat_aof_cow_bytes = 0;
    VAR_30.stat_module_cow_bytes = 0;
    VAR_30.cron_malloc_stats.zmalloc_used = 0;
    VAR_30.cron_malloc_stats.process_rss = 0;
    VAR_30.cron_malloc_stats.allocator_allocated = 0;
    VAR_30.cron_malloc_stats.allocator_active = 0;
    VAR_30.cron_malloc_stats.allocator_resident = 0;
    VAR_30.lastbgsave_status = VAR_6;
    VAR_30.aof_last_write_status = VAR_6;
    VAR_30.aof_last_write_errno = 0;
    VAR_30.repl_good_slaves_count = 0;




    if (FUNC_3(VAR_30.el, 1, VAR_31, ((void*)0), ((void*)0)) == VAR_0) {
        FUNC_26("Can't create event loop timers.");
        FUNC_11(1);
    }



    for (VAR_32 = 0; VAR_32 < VAR_30.ipfd_count; VAR_32++) {
        if (FUNC_2(VAR_30.el, VAR_30.ipfd[VAR_32], VAR_1,
            VAR_20,((void*)0)) == VAR_0)
            {
                FUNC_26(
                    "Unrecoverable error creating server.ipfd file event.");
            }
    }
    for (VAR_32 = 0; VAR_32 < VAR_30.tlsfd_count; VAR_32++) {
        if (FUNC_2(VAR_30.el, VAR_30.tlsfd[VAR_32], VAR_1,
            VAR_19,((void*)0)) == VAR_0)
            {
                FUNC_26(
                    "Unrecoverable error creating server.tlsfd file event.");
            }
    }
    if (VAR_30.sofd > 0 && FUNC_2(VAR_30.el,VAR_30.sofd,VAR_1,
        VAR_21,((void*)0)) == VAR_0) FUNC_26("Unrecoverable error creating server.sofd file event.");




    if (FUNC_2(VAR_30.el, VAR_30.module_blocked_pipe[0], VAR_1,
        VAR_28,((void*)0)) == VAR_0) {
            FUNC_26(
                "Error registering the readable event for the module "
                "blocked clients subsystem.");
    }


    if (VAR_30.aof_state == VAR_3) {
        VAR_30.aof_fd = FUNC_18(VAR_30.aof_filename,
                               VAR_14|VAR_12|VAR_13,0644);
        if (VAR_30.aof_fd == -1) {
            FUNC_25(VAR_7, "Can't open the append-only file: %s",
                FUNC_30(VAR_23));
            FUNC_11(1);
        }
    }





    if (VAR_30.arch_bits == 32 && VAR_30.maxmemory == 0) {
        FUNC_25(VAR_7,"Warning: 32 bit instance detected but no memory limit set. Setting 3 GB maxmemory limit with 'noeviction' policy now.");
        VAR_30.maxmemory = 3072LL*(1024*1024);
        VAR_30.maxmemory_policy = VAR_11;
    }

    if (VAR_30.cluster_enabled) FUNC_7();
    FUNC_21();
    FUNC_23(1);
    FUNC_29();
    FUNC_13();
}
