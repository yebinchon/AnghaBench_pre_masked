
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {char* maxconns; char* port; char* udpport; char* inter; char* verbose; char* socketpath; char* access; char* factor; char* chunk_size; char* num_threads; char* num_threads_per_udp; char* prefix_delimiter; char* reqs_per_event; char* backlog; char* auth_file; char* item_size_max; char* hashpower_init; char* slab_automove; char* slab_automove_ratio; char* slab_automove_window; char* slab_chunk_size_max; char* lru_crawler_sleep; char* tail_repair_time; char* hash_algorithm; char* hot_lru_pct; char* warm_lru_pct; char* hot_max_factor; char* warm_max_factor; char* temporary_ttl; char* idle_timeout; char* logger_watcher_buf_size; char* logger_buf_size; char* ext_item_size; char* ext_item_age; char* ext_low_ttl; char* ext_recache_rate; char* ext_wbuf_size; char* ext_compact_under; char* ext_drop_under; char* ext_max_frag; char* slab_automove_freeratio; char* ssl_chain_cert; char* ssl_key; char* ssl_verify_mode; char* ssl_keyformat; char* ssl_ciphers; char* ssl_ca_cert; char* ssl_wbuf_size; scalar_t__ ssl_enabled; scalar_t__ ext_drop_unread; scalar_t__ drop_privileges; scalar_t__ temp_lru; scalar_t__ lru_segmented; scalar_t__ lru_maintainer_thread; scalar_t__ dump_enabled; scalar_t__ flush_enabled; scalar_t__ lru_crawler_tocrawl; scalar_t__ lru_crawler; scalar_t__ slab_reassign; scalar_t__ maxconns_fast; scalar_t__ sasl; int binding_protocol; scalar_t__ use_cas; scalar_t__ detail_enabled; scalar_t__ evict_to_free; scalar_t__ oldest_live; scalar_t__ maxbytes; } ;
typedef int ADD_STAT ;


 int FUNC_0 (char*,char*,...) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 () ;
 char* FUNC_3 (int ) ;
 TYPE_1__ VAR_0 ;

__attribute__((used)) static void FUNC_4(ADD_STAT VAR_1, void *VAR_2) {
    FUNC_1(VAR_1);
    FUNC_0("maxbytes", "%llu", (unsigned long long)VAR_0.maxbytes);
    FUNC_0("maxconns", "%d", VAR_0.maxconns);
    FUNC_0("tcpport", "%d", VAR_0.port);
    FUNC_0("udpport", "%d", VAR_0.udpport);
    FUNC_0("inter", "%s", VAR_0.inter ? VAR_0.inter : "NULL");
    FUNC_0("verbosity", "%d", VAR_0.verbose);
    FUNC_0("oldest", "%lu", (unsigned long)VAR_0.oldest_live);
    FUNC_0("evictions", "%s", VAR_0.evict_to_free ? "on" : "off");
    FUNC_0("domain_socket", "%s",
                VAR_0.socketpath ? VAR_0.socketpath : "NULL");
    FUNC_0("umask", "%o", VAR_0.access);
    FUNC_0("growth_factor", "%.2f", VAR_0.factor);
    FUNC_0("chunk_size", "%d", VAR_0.chunk_size);
    FUNC_0("num_threads", "%d", VAR_0.num_threads);
    FUNC_0("num_threads_per_udp", "%d", VAR_0.num_threads_per_udp);
    FUNC_0("stat_key_prefix", "%c", VAR_0.prefix_delimiter);
    FUNC_0("detail_enabled", "%s",
                VAR_0.detail_enabled ? "yes" : "no");
    FUNC_0("reqs_per_event", "%d", VAR_0.reqs_per_event);
    FUNC_0("cas_enabled", "%s", VAR_0.use_cas ? "yes" : "no");
    FUNC_0("tcp_backlog", "%d", VAR_0.backlog);
    FUNC_0("binding_protocol", "%s",
                FUNC_3(VAR_0.binding_protocol));
    FUNC_0("auth_enabled_sasl", "%s", VAR_0.sasl ? "yes" : "no");
    FUNC_0("auth_enabled_ascii", "%s", VAR_0.auth_file ? VAR_0.auth_file : "no");
    FUNC_0("item_size_max", "%d", VAR_0.item_size_max);
    FUNC_0("maxconns_fast", "%s", VAR_0.maxconns_fast ? "yes" : "no");
    FUNC_0("hashpower_init", "%d", VAR_0.hashpower_init);
    FUNC_0("slab_reassign", "%s", VAR_0.slab_reassign ? "yes" : "no");
    FUNC_0("slab_automove", "%d", VAR_0.slab_automove);
    FUNC_0("slab_automove_ratio", "%.2f", VAR_0.slab_automove_ratio);
    FUNC_0("slab_automove_window", "%u", VAR_0.slab_automove_window);
    FUNC_0("slab_chunk_max", "%d", VAR_0.slab_chunk_size_max);
    FUNC_0("lru_crawler", "%s", VAR_0.lru_crawler ? "yes" : "no");
    FUNC_0("lru_crawler_sleep", "%d", VAR_0.lru_crawler_sleep);
    FUNC_0("lru_crawler_tocrawl", "%lu", (unsigned long)VAR_0.lru_crawler_tocrawl);
    FUNC_0("tail_repair_time", "%d", VAR_0.tail_repair_time);
    FUNC_0("flush_enabled", "%s", VAR_0.flush_enabled ? "yes" : "no");
    FUNC_0("dump_enabled", "%s", VAR_0.dump_enabled ? "yes" : "no");
    FUNC_0("hash_algorithm", "%s", VAR_0.hash_algorithm);
    FUNC_0("lru_maintainer_thread", "%s", VAR_0.lru_maintainer_thread ? "yes" : "no");
    FUNC_0("lru_segmented", "%s", VAR_0.lru_segmented ? "yes" : "no");
    FUNC_0("hot_lru_pct", "%d", VAR_0.hot_lru_pct);
    FUNC_0("warm_lru_pct", "%d", VAR_0.warm_lru_pct);
    FUNC_0("hot_max_factor", "%.2f", VAR_0.hot_max_factor);
    FUNC_0("warm_max_factor", "%.2f", VAR_0.warm_max_factor);
    FUNC_0("temp_lru", "%s", VAR_0.temp_lru ? "yes" : "no");
    FUNC_0("temporary_ttl", "%u", VAR_0.temporary_ttl);
    FUNC_0("idle_timeout", "%d", VAR_0.idle_timeout);
    FUNC_0("watcher_logbuf_size", "%u", VAR_0.logger_watcher_buf_size);
    FUNC_0("worker_logbuf_size", "%u", VAR_0.logger_buf_size);
    FUNC_0("track_sizes", "%s", FUNC_2() ? "yes" : "no");
    FUNC_0("inline_ascii_response", "%s", "no");
}
