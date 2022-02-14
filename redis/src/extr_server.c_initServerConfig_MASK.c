
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {char* runid; int arch_bits; int sofd; int active_expire_enabled; int jemalloc_bg_thread; int aof_rewrite_time_last; int aof_rewrite_time_start; int aof_fd; int aof_selected_db; int next_client_id; int loading_process_events_interval_bytes; int masterport; int master_initial_offset; int repl_transfer_fd; char* assert_failed; char* assert_file; int lua_always_replicate_commands; scalar_t__ watchdog_period; scalar_t__ bug_report_start; scalar_t__ assert_line; int tracking_table_max_fill; int latency_monitor_threshold; int slowlog_max_len; int slowlog_log_slower_than; void* xgroupCommand; void* xclaimCommand; void* pexpireCommand; void* expireCommand; void* execCommand; void* sremCommand; void* zpopmaxCommand; void* zpopminCommand; void* rpopCommand; void* lpopCommand; void* lpushCommand; void* multiCommand; void* delCommand; void* orig_commands; void* commands; int * client_obuf_limits; void* repl_no_slaves_since; int repl_backlog_time_limit; scalar_t__ repl_backlog_off; scalar_t__ repl_backlog_idx; scalar_t__ repl_backlog_histlen; int repl_backlog_size; int * repl_backlog; scalar_t__ master_repl_offset; int slave_announce_port; int slave_announce_ip; int slave_priority; int repl_min_slaves_max_lag; int repl_min_slaves_to_write; int repl_timeout; int repl_ping_slave_period; int repl_diskless_sync_delay; int repl_diskless_load; int repl_diskless_sync; int repl_disable_tcp_nodelay; scalar_t__ repl_down_since; int repl_slave_lazy_flush; int repl_slave_ignore_maxmemory; int repl_slave_ro; int repl_serve_stale_data; int repl_syncio_timeout; int * repl_transfer_s; int * repl_transfer_tmpfile; int repl_state; int * cached_master; int * master; int * masterhost; int * masterauth; int lruclock; int io_threads_do_reads; int io_threads_num; int lua_time_limit; int always_show_logo; int lazyfree_lazy_server_del; int lazyfree_lazy_expire; int lazyfree_lazy_eviction; void* migrate_cached_sockets; int cluster_module_flags; int cluster_announce_bus_port; int cluster_announce_port; int cluster_announce_ip; void* cluster_configfile; int cluster_slave_no_failover; int cluster_require_full_coverage; int cluster_slave_validity_factor; int cluster_migration_barrier; int cluster_node_timeout; scalar_t__ cluster_enabled; scalar_t__ shutdown_asap; int stream_node_max_entries; int stream_node_max_bytes; int hll_sparse_max_bytes; int zset_max_ziplist_value; int zset_max_ziplist_entries; int set_max_intset_entries; int list_compress_depth; int list_max_ziplist_size; int hash_max_ziplist_value; int hash_max_ziplist_entries; int lfu_decay_time; int lfu_log_factor; int maxmemory_samples; int maxmemory_policy; int maxmemory; int blocked_clients_by_type; scalar_t__ blocked_clients; int maxclients; scalar_t__ notify_keyspace_events; scalar_t__ active_defrag_running; int activerehashing; int stop_writes_on_bgsave_err; int rdb_checksum; int rdb_compression; void* acl_filename; void* aof_filename; void* rdb_filename; int * pidfile; int aof_use_rdb_preamble; int aof_load_truncated; int key_load_delay; int rdb_key_save_delay; int rdb_save_incremental_fsync; int aof_rewrite_incremental_fsync; scalar_t__ aof_flush_postponed_start; scalar_t__ aof_delayed_fsync; int aof_lastbgrewrite_status; void* aof_last_fsync; scalar_t__ aof_flush_sleep; scalar_t__ aof_rewrite_scheduled; scalar_t__ aof_rewrite_base_size; int aof_rewrite_min_size; int aof_rewrite_perc; int aof_no_fsync_on_rewrite; int aof_fsync; int aof_state; int supervised_mode; scalar_t__ supervised; int daemonize; int syslog_facility; void* syslog_ident; int syslog_enabled; void* logfile; scalar_t__ loading; int * saveparams; int client_max_querybuf_len; int proto_max_bulk_len; int active_defrag_max_scan_fields; int active_defrag_cycle_max; int active_defrag_cycle_min; int active_defrag_threshold_upper; int active_defrag_threshold_lower; int active_defrag_ignore_bytes; int active_defrag_enabled; int tcpkeepalive; int maxidletime; int verbosity; int dbnum; int gopher_enabled; int protected_mode; scalar_t__ tlsfd_count; scalar_t__ ipfd_count; int unixsocketperm; int * unixsocket; scalar_t__ bindaddr_count; int tcp_backlog; int tls_port; int port; int dynamic_hz; int config_hz; int hz; int * executable; int * configfile; int timezone; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
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
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 int VAR_34 ;
 int VAR_35 ;
 int VAR_36 ;
 int VAR_37 ;
 int VAR_38 ;
 int VAR_39 ;
 int VAR_40 ;
 int VAR_41 ;
 int VAR_42 ;
 int VAR_43 ;
 int VAR_44 ;
 int VAR_45 ;
 int VAR_46 ;
 int VAR_47 ;
 int VAR_48 ;
 int VAR_49 ;
 int VAR_50 ;
 int VAR_51 ;
 int VAR_52 ;
 int VAR_53 ;
 int VAR_54 ;
 int VAR_55 ;
 int VAR_56 ;
 int VAR_57 ;
 int VAR_58 ;
 int VAR_59 ;
 int VAR_60 ;
 int VAR_61 ;
 int VAR_62 ;
 int VAR_63 ;
 int VAR_64 ;
 int VAR_65 ;
 int VAR_66 ;
 int VAR_67 ;
 int VAR_68 ;
 int VAR_69 ;
 int VAR_70 ;
 int VAR_71 ;
 int VAR_72 ;
 int VAR_73 ;
 int VAR_74 ;
 int VAR_75 ;
 int VAR_76 ;
 int VAR_77 ;
 int VAR_78 ;
 int VAR_79 ;
 int VAR_80 ;
 int VAR_81 ;
 int VAR_82 ;
 int VAR_83 ;
 int VAR_84 ;
 int VAR_85 ;
 int VAR_86 ;
 int VAR_87 ;
 size_t VAR_88 ;
 int VAR_89 ;
 int VAR_90 ;
 int VAR_91 ;
 int VAR_92 ;
 int VAR_93 ;
 int VAR_94 ;
 int VAR_95 ;
 int VAR_96 ;
 int VAR_97 ;
 int VAR_98 ;
 int VAR_99 ;
 int VAR_100 ;
 int VAR_101 ;
 int VAR_102 ;
 double VAR_103 ;
 double VAR_104 ;
 double VAR_105 ;
 double VAR_106 ;
 int VAR_107 ;
 int FUNC_0 (int,int) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int * VAR_108 ;
 int VAR_109 ;
 void* FUNC_3 (int *,int *) ;
 int FUNC_4 () ;
 int FUNC_5 (char*,size_t) ;
 int FUNC_6 () ;
 void* FUNC_7 (char*) ;
 int FUNC_8 (int ,int ,int) ;
 int VAR_110 ;
 int FUNC_9 () ;
 int FUNC_10 () ;
 TYPE_1__ VAR_111 ;
 void* FUNC_11 (int *) ;
 int FUNC_12 (int) ;
 void* FUNC_13 (int ) ;

void FUNC_14(void) {
    int VAR_112;

    FUNC_12(1);
    FUNC_5(VAR_111.runid,VAR_88);
    VAR_111.runid[VAR_88] = '\0';
    FUNC_1();
    FUNC_2();
    VAR_111.timezone = FUNC_6();
    VAR_111.configfile = ((void*)0);
    VAR_111.executable = ((void*)0);
    VAR_111.hz = VAR_111.config_hz = VAR_36;
    VAR_111.dynamic_hz = VAR_33;
    VAR_111.arch_bits = (sizeof(long) == 8) ? 64 : 32;
    VAR_111.port = VAR_68;
    VAR_111.tls_port = VAR_69;
    VAR_111.tcp_backlog = VAR_82;
    VAR_111.bindaddr_count = 0;
    VAR_111.unixsocket = ((void*)0);
    VAR_111.unixsocketperm = VAR_85;
    VAR_111.ipfd_count = 0;
    VAR_111.tlsfd_count = 0;
    VAR_111.sofd = -1;
    VAR_111.protected_mode = VAR_53;
    VAR_111.gopher_enabled = VAR_34;
    VAR_111.dbnum = VAR_26;
    VAR_111.verbosity = VAR_86;
    VAR_111.maxidletime = VAR_20;
    VAR_111.tcpkeepalive = VAR_83;
    VAR_111.active_expire_enabled = 1;
    VAR_111.jemalloc_bg_thread = 1;
    VAR_111.active_defrag_enabled = VAR_11;
    VAR_111.active_defrag_ignore_bytes = VAR_29;
    VAR_111.active_defrag_threshold_lower = VAR_31;
    VAR_111.active_defrag_threshold_upper = VAR_32;
    VAR_111.active_defrag_cycle_min = VAR_28;
    VAR_111.active_defrag_cycle_max = VAR_27;
    VAR_111.active_defrag_max_scan_fields = VAR_30;
    VAR_111.proto_max_bulk_len = VAR_54;
    VAR_111.client_max_querybuf_len = VAR_101;
    VAR_111.saveparams = ((void*)0);
    VAR_111.loading = 0;
    VAR_111.logfile = FUNC_13(VAR_46);
    VAR_111.syslog_enabled = VAR_80;
    VAR_111.syslog_ident = FUNC_13(VAR_81);
    VAR_111.syslog_facility = VAR_90;
    VAR_111.daemonize = VAR_25;
    VAR_111.supervised = 0;
    VAR_111.supervised_mode = VAR_107;
    VAR_111.aof_state = VAR_0;
    VAR_111.aof_fsync = VAR_15;
    VAR_111.aof_no_fsync_on_rewrite = VAR_17;
    VAR_111.aof_rewrite_perc = VAR_2;
    VAR_111.aof_rewrite_min_size = VAR_1;
    VAR_111.aof_rewrite_base_size = 0;
    VAR_111.aof_rewrite_scheduled = 0;
    VAR_111.aof_flush_sleep = 0;
    VAR_111.aof_last_fsync = FUNC_11(((void*)0));
    VAR_111.aof_rewrite_time_last = -1;
    VAR_111.aof_rewrite_time_start = -1;
    VAR_111.aof_lastbgrewrite_status = VAR_89;
    VAR_111.aof_delayed_fsync = 0;
    VAR_111.aof_fd = -1;
    VAR_111.aof_selected_db = -1;
    VAR_111.aof_flush_postponed_start = 0;
    VAR_111.aof_rewrite_incremental_fsync = VAR_18;
    VAR_111.rdb_save_incremental_fsync = VAR_59;
    VAR_111.rdb_key_save_delay = VAR_58;
    VAR_111.key_load_delay = VAR_39;
    VAR_111.aof_load_truncated = VAR_16;
    VAR_111.aof_use_rdb_preamble = VAR_19;
    VAR_111.pidfile = ((void*)0);
    VAR_111.rdb_filename = FUNC_13(VAR_57);
    VAR_111.aof_filename = FUNC_13(VAR_14);
    VAR_111.acl_filename = FUNC_13(VAR_10);
    VAR_111.rdb_compression = VAR_56;
    VAR_111.rdb_checksum = VAR_55;
    VAR_111.stop_writes_on_bgsave_err = VAR_79;
    VAR_111.activerehashing = VAR_12;
    VAR_111.active_defrag_running = 0;
    VAR_111.notify_keyspace_events = 0;
    VAR_111.maxclients = VAR_50;
    VAR_111.blocked_clients = 0;
    FUNC_8(VAR_111.blocked_clients_by_type,0,
           sizeof(VAR_111.blocked_clients_by_type));
    VAR_111.maxmemory = VAR_47;
    VAR_111.maxmemory_policy = VAR_48;
    VAR_111.maxmemory_samples = VAR_49;
    VAR_111.lfu_log_factor = VAR_45;
    VAR_111.lfu_decay_time = VAR_44;
    VAR_111.hash_max_ziplist_entries = VAR_92;
    VAR_111.hash_max_ziplist_value = VAR_93;
    VAR_111.list_max_ziplist_size = VAR_95;
    VAR_111.list_compress_depth = VAR_94;
    VAR_111.set_max_intset_entries = VAR_96;
    VAR_111.zset_max_ziplist_entries = VAR_99;
    VAR_111.zset_max_ziplist_value = VAR_100;
    VAR_111.hll_sparse_max_bytes = VAR_35;
    VAR_111.stream_node_max_bytes = VAR_97;
    VAR_111.stream_node_max_entries = VAR_98;
    VAR_111.shutdown_asap = 0;
    VAR_111.cluster_enabled = 0;
    VAR_111.cluster_node_timeout = VAR_5;
    VAR_111.cluster_migration_barrier = VAR_4;
    VAR_111.cluster_slave_validity_factor = VAR_8;
    VAR_111.cluster_require_full_coverage = VAR_6;
    VAR_111.cluster_slave_no_failover = VAR_7;
    VAR_111.cluster_configfile = FUNC_13(VAR_24);
    VAR_111.cluster_announce_ip = VAR_22;
    VAR_111.cluster_announce_port = VAR_23;
    VAR_111.cluster_announce_bus_port = VAR_21;
    VAR_111.cluster_module_flags = VAR_9;
    VAR_111.migrate_cached_sockets = FUNC_3(&VAR_110,((void*)0));
    VAR_111.next_client_id = 1;
    VAR_111.loading_process_events_interval_bytes = (1024*1024*2);
    VAR_111.lazyfree_lazy_eviction = VAR_41;
    VAR_111.lazyfree_lazy_expire = VAR_42;
    VAR_111.lazyfree_lazy_server_del = VAR_43;
    VAR_111.always_show_logo = VAR_13;
    VAR_111.lua_time_limit = VAR_91;
    VAR_111.io_threads_num = VAR_38;
    VAR_111.io_threads_do_reads = VAR_37;

    VAR_111.lruclock = FUNC_4();
    FUNC_10();

    FUNC_0(60*60,1);
    FUNC_0(300,100);
    FUNC_0(60,10000);


    VAR_111.masterauth = ((void*)0);
    VAR_111.masterhost = ((void*)0);
    VAR_111.masterport = 6379;
    VAR_111.master = ((void*)0);
    VAR_111.cached_master = ((void*)0);
    VAR_111.master_initial_offset = -1;
    VAR_111.repl_state = VAR_102;
    VAR_111.repl_transfer_tmpfile = ((void*)0);
    VAR_111.repl_transfer_fd = -1;
    VAR_111.repl_transfer_s = ((void*)0);
    VAR_111.repl_syncio_timeout = VAR_87;
    VAR_111.repl_serve_stale_data = VAR_76;
    VAR_111.repl_slave_ro = VAR_75;
    VAR_111.repl_slave_ignore_maxmemory = VAR_72;
    VAR_111.repl_slave_lazy_flush = VAR_73;
    VAR_111.repl_down_since = 0;
    VAR_111.repl_disable_tcp_nodelay = VAR_62;
    VAR_111.repl_diskless_sync = VAR_64;
    VAR_111.repl_diskless_load = VAR_63;
    VAR_111.repl_diskless_sync_delay = VAR_65;
    VAR_111.repl_ping_slave_period = VAR_66;
    VAR_111.repl_timeout = VAR_67;
    VAR_111.repl_min_slaves_to_write = VAR_52;
    VAR_111.repl_min_slaves_max_lag = VAR_51;
    VAR_111.slave_priority = VAR_74;
    VAR_111.slave_announce_ip = VAR_70;
    VAR_111.slave_announce_port = VAR_71;
    VAR_111.master_repl_offset = 0;


    VAR_111.repl_backlog = ((void*)0);
    VAR_111.repl_backlog_size = VAR_60;
    VAR_111.repl_backlog_histlen = 0;
    VAR_111.repl_backlog_idx = 0;
    VAR_111.repl_backlog_off = 0;
    VAR_111.repl_backlog_time_limit = VAR_61;
    VAR_111.repl_no_slaves_since = FUNC_11(((void*)0));


    for (VAR_112 = 0; VAR_112 < VAR_3; VAR_112++)
        VAR_111.client_obuf_limits[VAR_112] = VAR_108[VAR_112];


    VAR_106 = 0.0;
    VAR_105 = 1.0/VAR_106;
    VAR_104 = -1.0/VAR_106;
    VAR_103 = VAR_106/VAR_106;




    VAR_111.commands = FUNC_3(&VAR_109,((void*)0));
    VAR_111.orig_commands = FUNC_3(&VAR_109,((void*)0));
    FUNC_9();
    VAR_111.delCommand = FUNC_7("del");
    VAR_111.multiCommand = FUNC_7("multi");
    VAR_111.lpushCommand = FUNC_7("lpush");
    VAR_111.lpopCommand = FUNC_7("lpop");
    VAR_111.rpopCommand = FUNC_7("rpop");
    VAR_111.zpopminCommand = FUNC_7("zpopmin");
    VAR_111.zpopmaxCommand = FUNC_7("zpopmax");
    VAR_111.sremCommand = FUNC_7("srem");
    VAR_111.execCommand = FUNC_7("exec");
    VAR_111.expireCommand = FUNC_7("expire");
    VAR_111.pexpireCommand = FUNC_7("pexpire");
    VAR_111.xclaimCommand = FUNC_7("xclaim");
    VAR_111.xgroupCommand = FUNC_7("xgroup");


    VAR_111.slowlog_log_slower_than = VAR_77;
    VAR_111.slowlog_max_len = VAR_78;


    VAR_111.latency_monitor_threshold = VAR_40;


    VAR_111.tracking_table_max_fill = VAR_84;


    VAR_111.assert_failed = "<no assertion failed>";
    VAR_111.assert_file = "<no file>";
    VAR_111.assert_line = 0;
    VAR_111.bug_report_start = 0;
    VAR_111.watchdog_period = 0;





    VAR_111.lua_always_replicate_commands = 1;
}
