
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct timeval {unsigned long long tv_sec; } ;
struct _mc_meta_data {unsigned long long slab_config; unsigned long long mmap_base; } ;
struct TYPE_4__ {unsigned long long chunk_size; unsigned long long item_size_max; unsigned long long slab_chunk_size_max; unsigned long long slab_page_size; unsigned long long oldest_live; scalar_t__ oldest_cas; scalar_t__ slab_reassign; scalar_t__ use_cas; scalar_t__ maxbytes; } ;
struct TYPE_3__ {unsigned long long hash_power_level; } ;


 unsigned long long VAR_0 ;
 scalar_t__ FUNC_0 () ;
 int FUNC_1 (struct timeval*,int *) ;
 unsigned long long FUNC_2 () ;
 scalar_t__ VAR_1 ;
 int FUNC_3 (void*,char*,char*,...) ;
 TYPE_2__ VAR_2 ;
 TYPE_1__ VAR_3 ;

__attribute__((used)) static int FUNC_4(const char *VAR_4, void *VAR_5, void *VAR_6) {
    struct _mc_meta_data *VAR_7 = (struct _mc_meta_data *)VAR_6;
    FUNC_3(VAR_5, "slab_config", "%s", VAR_7->slab_config);
    FUNC_3(VAR_5, "maxbytes", "%llu", (unsigned long long) VAR_2.maxbytes);
    FUNC_3(VAR_5, "chunk_size", "%d", VAR_2.chunk_size);
    FUNC_3(VAR_5, "item_size_max", "%d", VAR_2.item_size_max);
    FUNC_3(VAR_5, "slab_chunk_size_max", "%d", VAR_2.slab_chunk_size_max);
    FUNC_3(VAR_5, "slab_page_size", "%d", VAR_2.slab_page_size);
    FUNC_3(VAR_5, "use_cas", "%s", VAR_2.use_cas ? "true" : "false");
    FUNC_3(VAR_5, "slab_reassign", "%s", VAR_2.slab_reassign ? "true" : "false");
    FUNC_3(VAR_5, "current_time", "%u", VAR_0);


    FUNC_3(VAR_5, "process_started", "%llu", (unsigned long long) VAR_1);
    {
        struct timeval VAR_8;
        FUNC_1(&VAR_8, ((void*)0));
        FUNC_3(VAR_5, "stop_time", "%lu", VAR_8.tv_sec);
    }



    FUNC_3(VAR_5, "current_cas", "%llu", (unsigned long long) FUNC_0());
    FUNC_3(VAR_5, "oldest_cas", "%llu", (unsigned long long) VAR_2.oldest_cas);
    FUNC_3(VAR_5, "logger_gid", "%llu", FUNC_2());
    FUNC_3(VAR_5, "hashpower", "%u", VAR_3.hash_power_level);



    FUNC_3(VAR_5, "oldest_live", "%u", VAR_2.oldest_live);

    FUNC_3(VAR_5, "mmap_oldbase", "%p", VAR_7->mmap_base);

    return 0;
}
