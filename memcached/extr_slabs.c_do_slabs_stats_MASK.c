
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef unsigned long long uint32_t ;
struct thread_stats {TYPE_1__* slab_stats; } ;
struct TYPE_5__ {scalar_t__ slabs; unsigned long long perslab; unsigned long long size; unsigned long long sl_curr; } ;
typedef TYPE_2__ slabclass_t ;
struct TYPE_4__ {scalar_t__ touch_hits; scalar_t__ cas_badval; scalar_t__ cas_hits; scalar_t__ decr_hits; scalar_t__ incr_hits; scalar_t__ delete_hits; scalar_t__ set_cmds; scalar_t__ get_hits; } ;
typedef int (* ADD_STAT ) (int *,int ,int *,int ,void*) ;


 int FUNC_0 (int,char*,char*,unsigned long long) ;
 int FUNC_1 (char*,char*,unsigned long long) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 TYPE_2__* VAR_5 ;
 int FUNC_2 (struct thread_stats*) ;

__attribute__((used)) static void FUNC_3(ADD_STAT VAR_6, void *VAR_7) {
    int VAR_8, VAR_9;

    struct thread_stats VAR_10;
    FUNC_2(&VAR_10);

    VAR_9 = 0;
    for(VAR_8 = VAR_0; VAR_8 <= VAR_4; VAR_8++) {
        slabclass_t *VAR_11 = &VAR_5[VAR_8];
        if (VAR_11->slabs != 0) {
            uint32_t VAR_12, VAR_13;
            VAR_13 = VAR_11->slabs;
            VAR_12 = VAR_11->perslab;

            char VAR_14[VAR_1];
            char VAR_15[VAR_2];
            int VAR_16 = 0, VAR_17 = 0;

            FUNC_0(VAR_8, "chunk_size", "%u", VAR_11->size);
            FUNC_0(VAR_8, "chunks_per_page", "%u", VAR_12);
            FUNC_0(VAR_8, "total_pages", "%u", VAR_13);
            FUNC_0(VAR_8, "total_chunks", "%u", VAR_13 * VAR_12);
            FUNC_0(VAR_8, "used_chunks", "%u",
                            VAR_13*VAR_12 - VAR_11->sl_curr);
            FUNC_0(VAR_8, "free_chunks", "%u", VAR_11->sl_curr);

            FUNC_0(VAR_8, "free_chunks_end", "%u", 0);
            FUNC_0(VAR_8, "get_hits", "%llu",
                    (unsigned long long)VAR_10.slab_stats[VAR_8].get_hits);
            FUNC_0(VAR_8, "cmd_set", "%llu",
                    (unsigned long long)VAR_10.slab_stats[VAR_8].set_cmds);
            FUNC_0(VAR_8, "delete_hits", "%llu",
                    (unsigned long long)VAR_10.slab_stats[VAR_8].delete_hits);
            FUNC_0(VAR_8, "incr_hits", "%llu",
                    (unsigned long long)VAR_10.slab_stats[VAR_8].incr_hits);
            FUNC_0(VAR_8, "decr_hits", "%llu",
                    (unsigned long long)VAR_10.slab_stats[VAR_8].decr_hits);
            FUNC_0(VAR_8, "cas_hits", "%llu",
                    (unsigned long long)VAR_10.slab_stats[VAR_8].cas_hits);
            FUNC_0(VAR_8, "cas_badval", "%llu",
                    (unsigned long long)VAR_10.slab_stats[VAR_8].cas_badval);
            FUNC_0(VAR_8, "touch_hits", "%llu",
                    (unsigned long long)VAR_10.slab_stats[VAR_8].touch_hits);
            VAR_9++;
        }
    }



    FUNC_1("active_slabs", "%d", VAR_9);
    FUNC_1("total_malloced", "%llu", (unsigned long long)VAR_3);
    VAR_6(((void*)0), 0, ((void*)0), 0, VAR_7);
}
