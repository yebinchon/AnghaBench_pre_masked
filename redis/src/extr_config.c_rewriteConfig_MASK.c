
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct rewriteConfigState {int dummy; } ;
typedef int sds ;
struct TYPE_6__ {char* name; int default_value; int * config; } ;
typedef TYPE_2__ configYesNo ;
struct TYPE_5__ {int prefer_server_ciphers; int ciphersuites; int ciphers; int protocols; int ca_cert_dir; int ca_cert_file; int dh_params_file; int key_file; int cert_file; } ;
struct TYPE_7__ {int configfile; scalar_t__ sentinel_mode; TYPE_1__ tls_ctx_config; int tls_auth_clients; int tls_replication; int tls_cluster; int key_load_delay; int rdb_key_save_delay; int supervised_mode; int config_hz; int active_defrag_enabled; int hll_sparse_max_bytes; int zset_max_ziplist_value; int zset_max_ziplist_entries; int set_max_intset_entries; int list_compress_depth; int list_max_ziplist_size; int stream_node_max_entries; int stream_node_max_bytes; int hash_max_ziplist_value; int hash_max_ziplist_entries; int tracking_table_max_fill; int slowlog_max_len; int latency_monitor_threshold; int slowlog_log_slower_than; int cluster_slave_validity_factor; int cluster_migration_barrier; int cluster_node_timeout; int cluster_configfile; int cluster_enabled; int lua_time_limit; int aof_rewrite_min_size; int aof_rewrite_perc; int aof_fsync; int aof_filename; int aof_enabled; int active_defrag_max_scan_fields; int active_defrag_cycle_max; int active_defrag_cycle_min; int active_defrag_ignore_bytes; int active_defrag_threshold_upper; int active_defrag_threshold_lower; int lfu_decay_time; int lfu_log_factor; int maxmemory_samples; int maxmemory_policy; int client_max_querybuf_len; int proto_max_bulk_len; int maxmemory; int maxclients; int repl_min_slaves_max_lag; int repl_min_slaves_to_write; int slave_priority; int repl_diskless_sync_delay; int repl_diskless_load; int repl_backlog_time_limit; int repl_backlog_size; int repl_timeout; int repl_ping_slave_period; int cluster_announce_ip; int masterauth; int masteruser; int slave_announce_ip; int rdb_filename; int dbnum; int syslog_ident; int syslog_enabled; int acl_filename; int logfile; int verbosity; int slave_announce_port; int tcpkeepalive; int maxidletime; int unixsocketperm; int unixsocket; int tcp_backlog; int cluster_announce_bus_port; int cluster_announce_port; int tls_port; int pidfile; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int * VAR_5 ;
 int VAR_6 ;
 int * VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int * VAR_12 ;
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
 int * VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 int * VAR_34 ;
 int VAR_35 ;
 int * VAR_36 ;
 int VAR_37 ;
 int VAR_38 ;
 int VAR_39 ;
 int VAR_40 ;
 int VAR_41 ;
 int VAR_42 ;
 int VAR_43 ;
 int VAR_44 ;
 int * VAR_45 ;
 int VAR_46 ;
 int VAR_47 ;
 int VAR_48 ;
 int VAR_49 ;
 int VAR_50 ;
 int * VAR_51 ;
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
 TYPE_2__* VAR_70 ;
 int VAR_71 ;
 int VAR_72 ;
 int VAR_73 ;
 int FUNC_0 (struct rewriteConfigState*) ;
 int FUNC_1 (struct rewriteConfigState*,char*,int ,int ) ;
 int FUNC_2 (struct rewriteConfigState*) ;
 int FUNC_3 (struct rewriteConfigState*) ;
 int FUNC_4 (struct rewriteConfigState*,char*,int ,int ,int ) ;
 int FUNC_5 (struct rewriteConfigState*) ;
 int FUNC_6 (struct rewriteConfigState*) ;
 int FUNC_7 (struct rewriteConfigState*,char*,int ,int ) ;
 int FUNC_8 (struct rewriteConfigState*,char*,int ,int ) ;
 int FUNC_9 (int ,int ) ;
 struct rewriteConfigState* FUNC_10 (char*) ;
 int FUNC_11 (struct rewriteConfigState*) ;
 int FUNC_12 (struct rewriteConfigState*) ;
 int FUNC_13 (struct rewriteConfigState*,char*) ;
 int FUNC_14 (struct rewriteConfigState*) ;
 int FUNC_15 (struct rewriteConfigState*) ;
 int FUNC_16 (struct rewriteConfigState*,char*) ;
 int FUNC_17 (struct rewriteConfigState*,char*,int ,int *) ;
 int FUNC_18 (struct rewriteConfigState*) ;
 int FUNC_19 (struct rewriteConfigState*) ;
 int FUNC_20 (struct rewriteConfigState*,char*,int ,int) ;
 int FUNC_21 (int ) ;
 TYPE_3__ VAR_74 ;
 int VAR_75 ;

int FUNC_22(char *VAR_76) {
    struct rewriteConfigState *VAR_77;
    sds VAR_78;
    int VAR_79;


    if ((VAR_77 = FUNC_10(VAR_76)) == ((void*)0)) return -1;





    for (configYesNo *VAR_80 = VAR_70; VAR_80->name != ((void*)0); VAR_80++) {
        FUNC_20(VAR_77,VAR_80->name,*(VAR_80->config),VAR_80->default_value);
    }

    FUNC_17(VAR_77,"pidfile",VAR_74.pidfile,VAR_34);
    FUNC_7(VAR_77,"tls-port",VAR_74.tls_port,VAR_44);
    FUNC_7(VAR_77,"cluster-announce-port",VAR_74.cluster_announce_port,VAR_11);
    FUNC_7(VAR_77,"cluster-announce-bus-port",VAR_74.cluster_announce_bus_port,VAR_10);
    FUNC_7(VAR_77,"tcp-backlog",VAR_74.tcp_backlog,VAR_52);
    FUNC_0(VAR_77);
    FUNC_17(VAR_77,"unixsocket",VAR_74.unixsocket,((void*)0));
    FUNC_8(VAR_77,"unixsocketperm",VAR_74.unixsocketperm,VAR_55);
    FUNC_7(VAR_77,"timeout",VAR_74.maxidletime,VAR_9);
    FUNC_7(VAR_77,"tcp-keepalive",VAR_74.tcpkeepalive,VAR_53);
    FUNC_7(VAR_77,"replica-announce-port",VAR_74.slave_announce_port,VAR_46);
    FUNC_4(VAR_77,"loglevel",VAR_74.verbosity,VAR_71,VAR_56);
    FUNC_17(VAR_77,"logfile",VAR_74.logfile,VAR_27);
    FUNC_17(VAR_77,"aclfile",VAR_74.acl_filename,VAR_5);
    FUNC_20(VAR_77,"syslog-enabled",VAR_74.syslog_enabled,VAR_50);
    FUNC_17(VAR_77,"syslog-ident",VAR_74.syslog_ident,VAR_51);
    FUNC_18(VAR_77);
    FUNC_14(VAR_77);
    FUNC_19(VAR_77);
    FUNC_7(VAR_77,"databases",VAR_74.dbnum,VAR_13);
    FUNC_7(VAR_77,"io-threads",VAR_74.dbnum,VAR_22);
    FUNC_17(VAR_77,"dbfilename",VAR_74.rdb_filename,VAR_36);
    FUNC_3(VAR_77);
    FUNC_16(VAR_77,"replicaof");
    FUNC_17(VAR_77,"replica-announce-ip",VAR_74.slave_announce_ip,VAR_45);
    FUNC_17(VAR_77,"masteruser",VAR_74.masteruser,((void*)0));
    FUNC_17(VAR_77,"masterauth",VAR_74.masterauth,((void*)0));
    FUNC_17(VAR_77,"cluster-announce-ip",VAR_74.cluster_announce_ip,((void*)0));
    FUNC_7(VAR_77,"repl-ping-replica-period",VAR_74.repl_ping_slave_period,VAR_42);
    FUNC_7(VAR_77,"repl-timeout",VAR_74.repl_timeout,VAR_43);
    FUNC_1(VAR_77,"repl-backlog-size",VAR_74.repl_backlog_size,VAR_38);
    FUNC_1(VAR_77,"repl-backlog-ttl",VAR_74.repl_backlog_time_limit,VAR_39);
    FUNC_4(VAR_77,"repl-diskless-load",VAR_74.repl_diskless_load,VAR_73,VAR_40);
    FUNC_7(VAR_77,"repl-diskless-sync-delay",VAR_74.repl_diskless_sync_delay,VAR_41);
    FUNC_7(VAR_77,"replica-priority",VAR_74.slave_priority,VAR_47);
    FUNC_7(VAR_77,"min-replicas-to-write",VAR_74.repl_min_slaves_to_write,VAR_33);
    FUNC_7(VAR_77,"min-replicas-max-lag",VAR_74.repl_min_slaves_max_lag,VAR_32);
    FUNC_13(VAR_77,"requirepass");
    FUNC_7(VAR_77,"maxclients",VAR_74.maxclients,VAR_31);
    FUNC_1(VAR_77,"maxmemory",VAR_74.maxmemory,VAR_28);
    FUNC_1(VAR_77,"proto-max-bulk-len",VAR_74.proto_max_bulk_len,VAR_35);
    FUNC_1(VAR_77,"client-query-buffer-limit",VAR_74.client_max_querybuf_len,VAR_67);
    FUNC_4(VAR_77,"maxmemory-policy",VAR_74.maxmemory_policy,VAR_72,VAR_29);
    FUNC_7(VAR_77,"maxmemory-samples",VAR_74.maxmemory_samples,VAR_30);
    FUNC_7(VAR_77,"lfu-log-factor",VAR_74.lfu_log_factor,VAR_26);
    FUNC_7(VAR_77,"lfu-decay-time",VAR_74.lfu_decay_time,VAR_25);
    FUNC_7(VAR_77,"active-defrag-threshold-lower",VAR_74.active_defrag_threshold_lower,VAR_18);
    FUNC_7(VAR_77,"active-defrag-threshold-upper",VAR_74.active_defrag_threshold_upper,VAR_19);
    FUNC_1(VAR_77,"active-defrag-ignore-bytes",VAR_74.active_defrag_ignore_bytes,VAR_16);
    FUNC_7(VAR_77,"active-defrag-cycle-min",VAR_74.active_defrag_cycle_min,VAR_15);
    FUNC_7(VAR_77,"active-defrag-cycle-max",VAR_74.active_defrag_cycle_max,VAR_14);
    FUNC_7(VAR_77,"active-defrag-max-scan-fields",VAR_74.active_defrag_max_scan_fields,VAR_17);
    FUNC_20(VAR_77,"appendonly",VAR_74.aof_enabled,0);
    FUNC_17(VAR_77,"appendfilename",VAR_74.aof_filename,VAR_7);
    FUNC_4(VAR_77,"appendfsync",VAR_74.aof_fsync,VAR_69,VAR_8);
    FUNC_7(VAR_77,"auto-aof-rewrite-percentage",VAR_74.aof_rewrite_perc,VAR_1);
    FUNC_1(VAR_77,"auto-aof-rewrite-min-size",VAR_74.aof_rewrite_min_size,VAR_0);
    FUNC_7(VAR_77,"lua-time-limit",VAR_74.lua_time_limit,VAR_57);
    FUNC_20(VAR_77,"cluster-enabled",VAR_74.cluster_enabled,0);
    FUNC_17(VAR_77,"cluster-config-file",VAR_74.cluster_configfile,VAR_12);
    FUNC_7(VAR_77,"cluster-node-timeout",VAR_74.cluster_node_timeout,VAR_3);
    FUNC_7(VAR_77,"cluster-migration-barrier",VAR_74.cluster_migration_barrier,VAR_2);
    FUNC_7(VAR_77,"cluster-replica-validity-factor",VAR_74.cluster_slave_validity_factor,VAR_4);
    FUNC_7(VAR_77,"slowlog-log-slower-than",VAR_74.slowlog_log_slower_than,VAR_48);
    FUNC_7(VAR_77,"latency-monitor-threshold",VAR_74.latency_monitor_threshold,VAR_24);
    FUNC_7(VAR_77,"slowlog-max-len",VAR_74.slowlog_max_len,VAR_49);
    FUNC_7(VAR_77,"tracking-table-max-fill",VAR_74.tracking_table_max_fill,VAR_54);
    FUNC_6(VAR_77);
    FUNC_7(VAR_77,"hash-max-ziplist-entries",VAR_74.hash_max_ziplist_entries,VAR_58);
    FUNC_7(VAR_77,"hash-max-ziplist-value",VAR_74.hash_max_ziplist_value,VAR_59);
    FUNC_7(VAR_77,"stream-node-max-bytes",VAR_74.stream_node_max_bytes,VAR_63);
    FUNC_7(VAR_77,"stream-node-max-entries",VAR_74.stream_node_max_entries,VAR_64);
    FUNC_7(VAR_77,"list-max-ziplist-size",VAR_74.list_max_ziplist_size,VAR_61);
    FUNC_7(VAR_77,"list-compress-depth",VAR_74.list_compress_depth,VAR_60);
    FUNC_7(VAR_77,"set-max-intset-entries",VAR_74.set_max_intset_entries,VAR_62);
    FUNC_7(VAR_77,"zset-max-ziplist-entries",VAR_74.zset_max_ziplist_entries,VAR_65);
    FUNC_7(VAR_77,"zset-max-ziplist-value",VAR_74.zset_max_ziplist_value,VAR_66);
    FUNC_7(VAR_77,"hll-sparse-max-bytes",VAR_74.hll_sparse_max_bytes,VAR_20);
    FUNC_20(VAR_77,"activedefrag",VAR_74.active_defrag_enabled,VAR_6);
    FUNC_2(VAR_77);
    FUNC_7(VAR_77,"hz",VAR_74.config_hz,VAR_21);
    FUNC_4(VAR_77,"supervised",VAR_74.supervised_mode,VAR_75,VAR_68);
    FUNC_7(VAR_77,"rdb-key-save-delay",VAR_74.rdb_key_save_delay,VAR_37);
    FUNC_7(VAR_77,"key-load-delay",VAR_74.key_load_delay,VAR_23);
    if (VAR_74.sentinel_mode) FUNC_15(VAR_77);




    FUNC_12(VAR_77);



    VAR_78 = FUNC_5(VAR_77);
    VAR_79 = FUNC_9(VAR_74.configfile,VAR_78);

    FUNC_21(VAR_78);
    FUNC_11(VAR_77);
    return VAR_79;
}
