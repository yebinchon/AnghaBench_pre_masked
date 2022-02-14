
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int usec_t ;
typedef int uint64_t ;
struct TYPE_2__ {int l2exist; int memory_throttle_count; int l2_asize; int l2_size; int l2_write_bytes; int l2_read_bytes; int l2_misses; int l2_hits; int mfu_size; int mru_size; int size; int c_max; int c_min; int c; int p; int hash_chain_max; int hash_chains; int hash_collisions; int hash_elements_max; int hash_elements; int evict_skip; int mutex_miss; int deleted; int mfu_ghost_hits; int mfu_hits; int mru_ghost_hits; int mru_hits; int prefetch_metadata_misses; int prefetch_metadata_hits; int prefetch_data_misses; int prefetch_data_hits; int demand_metadata_misses; int demand_metadata_hits; int demand_data_misses; int demand_data_hits; int misses; int hits; } ;


 int VAR_0 ;
 int FUNC_0 (char*,int*,int ) ;
 TYPE_1__ VAR_1 ;
 int FUNC_1 (char*,char*,int ) ;
 int FUNC_2 (char*,char*,int,int) ;
 int FUNC_3 (char*,char*,int,int) ;
 scalar_t__ FUNC_4 (int*) ;
 int FUNC_5 (char*,int**,size_t*,int *,int ) ;
 scalar_t__ FUNC_6 (int) ;

int FUNC_7(int VAR_2, usec_t VAR_3) {
    (void)VAR_3;

    static int VAR_4 = -1;
    if(FUNC_6(VAR_4 == -1))
        VAR_4 = FUNC_1("plugin:freebsd:zfs_arcstats", "show zero charts", VAR_0);

    unsigned long long VAR_5;
    size_t VAR_6 = sizeof(uint64_t);
    static struct mibs {
        int hits[5];
        int misses[5];
        int demand_data_hits[5];
        int demand_data_misses[5];
        int demand_metadata_hits[5];
        int demand_metadata_misses[5];
        int prefetch_data_hits[5];
        int prefetch_data_misses[5];
        int prefetch_metadata_hits[5];
        int prefetch_metadata_misses[5];
        int mru_hits[5];
        int mru_ghost_hits[5];
        int mfu_hits[5];
        int mfu_ghost_hits[5];
        int deleted[5];
        int mutex_miss[5];
        int evict_skip[5];





        int hash_elements[5];
        int hash_elements_max[5];
        int hash_collisions[5];
        int hash_chains[5];
        int hash_chain_max[5];
        int p[5];
        int c[5];
        int c_min[5];
        int c_max[5];
        int size[5];







        int mru_size[5];





        int mfu_size[5];





        int l2_hits[5];
        int l2_misses[5];


        int l2_read_bytes[5];
        int l2_write_bytes[5];
        int l2_size[5];
        int l2_asize[5];




        int memory_throttle_count[5];
    } VAR_7;

    VAR_1.l2exist = -1;

    if(FUNC_6(FUNC_5("kstat.zfs.misc.arcstats.l2_size", &VAR_5, &VAR_6, ((void*)0), 0)))
        return 0;

    if(FUNC_4(VAR_5))
        VAR_1.l2exist = 1;
    else
        VAR_1.l2exist = 0;

    FUNC_0("kstat.zfs.misc.arcstats.hits", VAR_7.hits, VAR_1.hits);
    FUNC_0("kstat.zfs.misc.arcstats.misses", VAR_7.misses, VAR_1.misses);
    FUNC_0("kstat.zfs.misc.arcstats.demand_data_hits", VAR_7.demand_data_hits, VAR_1.demand_data_hits);
    FUNC_0("kstat.zfs.misc.arcstats.demand_data_misses", VAR_7.demand_data_misses, VAR_1.demand_data_misses);
    FUNC_0("kstat.zfs.misc.arcstats.demand_metadata_hits", VAR_7.demand_metadata_hits, VAR_1.demand_metadata_hits);
    FUNC_0("kstat.zfs.misc.arcstats.demand_metadata_misses", VAR_7.demand_metadata_misses, VAR_1.demand_metadata_misses);
    FUNC_0("kstat.zfs.misc.arcstats.prefetch_data_hits", VAR_7.prefetch_data_hits, VAR_1.prefetch_data_hits);
    FUNC_0("kstat.zfs.misc.arcstats.prefetch_data_misses", VAR_7.prefetch_data_misses, VAR_1.prefetch_data_misses);
    FUNC_0("kstat.zfs.misc.arcstats.prefetch_metadata_hits", VAR_7.prefetch_metadata_hits, VAR_1.prefetch_metadata_hits);
    FUNC_0("kstat.zfs.misc.arcstats.prefetch_metadata_misses", VAR_7.prefetch_metadata_misses, VAR_1.prefetch_metadata_misses);
    FUNC_0("kstat.zfs.misc.arcstats.mru_hits", VAR_7.mru_hits, VAR_1.mru_hits);
    FUNC_0("kstat.zfs.misc.arcstats.mru_ghost_hits", VAR_7.mru_ghost_hits, VAR_1.mru_ghost_hits);
    FUNC_0("kstat.zfs.misc.arcstats.mfu_hits", VAR_7.mfu_hits, VAR_1.mfu_hits);
    FUNC_0("kstat.zfs.misc.arcstats.mfu_ghost_hits", VAR_7.mfu_ghost_hits, VAR_1.mfu_ghost_hits);
    FUNC_0("kstat.zfs.misc.arcstats.deleted", VAR_7.deleted, VAR_1.deleted);
    FUNC_0("kstat.zfs.misc.arcstats.mutex_miss", VAR_7.mutex_miss, VAR_1.mutex_miss);
    FUNC_0("kstat.zfs.misc.arcstats.evict_skip", VAR_7.evict_skip, VAR_1.evict_skip);





    FUNC_0("kstat.zfs.misc.arcstats.hash_elements", VAR_7.hash_elements, VAR_1.hash_elements);
    FUNC_0("kstat.zfs.misc.arcstats.hash_elements_max", VAR_7.hash_elements_max, VAR_1.hash_elements_max);
    FUNC_0("kstat.zfs.misc.arcstats.hash_collisions", VAR_7.hash_collisions, VAR_1.hash_collisions);
    FUNC_0("kstat.zfs.misc.arcstats.hash_chains", VAR_7.hash_chains, VAR_1.hash_chains);
    FUNC_0("kstat.zfs.misc.arcstats.hash_chain_max", VAR_7.hash_chain_max, VAR_1.hash_chain_max);
    FUNC_0("kstat.zfs.misc.arcstats.p", VAR_7.p, VAR_1.p);
    FUNC_0("kstat.zfs.misc.arcstats.c", VAR_7.c, VAR_1.c);
    FUNC_0("kstat.zfs.misc.arcstats.c_min", VAR_7.c_min, VAR_1.c_min);
    FUNC_0("kstat.zfs.misc.arcstats.c_max", VAR_7.c_max, VAR_1.c_max);
    FUNC_0("kstat.zfs.misc.arcstats.size", VAR_7.size, VAR_1.size);







    FUNC_0("kstat.zfs.misc.arcstats.mru_size", VAR_7.mru_size, VAR_1.mru_size);





    FUNC_0("kstat.zfs.misc.arcstats.mfu_size", VAR_7.mfu_size, VAR_1.mfu_size);





    FUNC_0("kstat.zfs.misc.arcstats.l2_hits", VAR_7.l2_hits, VAR_1.l2_hits);
    FUNC_0("kstat.zfs.misc.arcstats.l2_misses", VAR_7.l2_misses, VAR_1.l2_misses);


    FUNC_0("kstat.zfs.misc.arcstats.l2_read_bytes", VAR_7.l2_read_bytes, VAR_1.l2_read_bytes);
    FUNC_0("kstat.zfs.misc.arcstats.l2_write_bytes", VAR_7.l2_write_bytes, VAR_1.l2_write_bytes);
    FUNC_0("kstat.zfs.misc.arcstats.l2_size", VAR_7.l2_size, VAR_1.l2_size);
    FUNC_0("kstat.zfs.misc.arcstats.l2_asize", VAR_7.l2_asize, VAR_1.l2_asize);




    FUNC_0("kstat.zfs.misc.arcstats.memory_throttle_count", VAR_7.memory_throttle_count, VAR_1.memory_throttle_count);
    FUNC_3("freebsd", "zfs", VAR_4, VAR_2);
    FUNC_2("freebsd", "zfs", VAR_4, VAR_2);

    return 0;
}
