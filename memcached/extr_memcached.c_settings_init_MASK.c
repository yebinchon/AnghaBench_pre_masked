
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int use_cas; int access; int port; int ssl_enabled; int ssl_wbuf_size; int maxbytes; int maxconns; int evict_to_free; double factor; int chunk_size; int num_threads; char prefix_delimiter; int reqs_per_event; int backlog; int item_size_max; int slab_page_size; int slab_chunk_size_max; int sasl; int maxconns_fast; int lru_crawler; int lru_crawler_sleep; int lru_maintainer_thread; int lru_segmented; int hot_lru_pct; int warm_lru_pct; double hot_max_factor; double warm_max_factor; int temp_lru; int temporary_ttl; int slab_reassign; int slab_automove; double slab_automove_ratio; int slab_automove_window; int shutdown_command; int flush_enabled; int dump_enabled; int crawls_persleep; int drop_privileges; int relaxed_privileges; int logger_buf_size; int logger_watcher_buf_size; int tail_repair_time; scalar_t__ hashpower_init; scalar_t__ idle_timeout; scalar_t__ lru_crawler_tocrawl; int binding_protocol; scalar_t__ detail_enabled; scalar_t__ num_threads_per_udp; int * auth_file; int * socketpath; scalar_t__ oldest_cas; scalar_t__ oldest_live; scalar_t__ verbose; int * inter; int ssl_last_cert_refresh_time; int * ssl_ca_cert; int * ssl_ciphers; int ssl_keyformat; int ssl_verify_mode; int * ssl_key; int * ssl_chain_cert; int * ssl_ctx; scalar_t__ udpport; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 TYPE_1__ VAR_7 ;

__attribute__((used)) static void FUNC_0(void) {
    VAR_7.use_cas = 1;
    VAR_7.access = 0700;
    VAR_7.port = 11211;
    VAR_7.udpport = 0;
    VAR_7.inter = ((void*)0);
    VAR_7.maxbytes = 64 * 1024 * 1024;
    VAR_7.maxconns = 1024;
    VAR_7.verbose = 0;
    VAR_7.oldest_live = 0;
    VAR_7.oldest_cas = 0;
    VAR_7.evict_to_free = 1;
    VAR_7.socketpath = ((void*)0);
    VAR_7.auth_file = ((void*)0);
    VAR_7.factor = 1.25;
    VAR_7.chunk_size = 48;
    VAR_7.num_threads = 4;
    VAR_7.num_threads_per_udp = 0;
    VAR_7.prefix_delimiter = ':';
    VAR_7.detail_enabled = 0;
    VAR_7.reqs_per_event = 20;
    VAR_7.backlog = 1024;
    VAR_7.binding_protocol = VAR_6;
    VAR_7.item_size_max = 1024 * 1024;
    VAR_7.slab_page_size = 1024 * 1024;
    VAR_7.slab_chunk_size_max = VAR_7.slab_page_size / 2;
    VAR_7.sasl = 0;
    VAR_7.maxconns_fast = 1;
    VAR_7.lru_crawler = 0;
    VAR_7.lru_crawler_sleep = 100;
    VAR_7.lru_crawler_tocrawl = 0;
    VAR_7.lru_maintainer_thread = 0;
    VAR_7.lru_segmented = 1;
    VAR_7.hot_lru_pct = 20;
    VAR_7.warm_lru_pct = 40;
    VAR_7.hot_max_factor = 0.2;
    VAR_7.warm_max_factor = 2.0;
    VAR_7.temp_lru = 0;
    VAR_7.temporary_ttl = 61;
    VAR_7.idle_timeout = 0;
    VAR_7.hashpower_init = 0;
    VAR_7.slab_reassign = 1;
    VAR_7.slab_automove = 1;
    VAR_7.slab_automove_ratio = 0.8;
    VAR_7.slab_automove_window = 30;
    VAR_7.shutdown_command = 0;
    VAR_7.tail_repair_time = VAR_4;
    VAR_7.flush_enabled = 1;
    VAR_7.dump_enabled = 1;
    VAR_7.crawls_persleep = 1000;
    VAR_7.logger_watcher_buf_size = VAR_1;
    VAR_7.logger_buf_size = VAR_0;
    VAR_7.drop_privileges = 0;



}
