
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct thread_stats {int dummy; } ;
struct stats {int dummy; } ;
struct slab_stats {int dummy; } ;
struct settings {int dummy; } ;
typedef int item_hdr ;
typedef int item ;
typedef int conn ;
typedef int LIBEVENT_THREAD ;


 int FUNC_0 (char*,int) ;
 int FUNC_1 (char*) ;

int FUNC_2(int VAR_0, char **VAR_1) {

    FUNC_0("Slab Stats", sizeof(struct slab_stats));
    FUNC_0("Thread stats",
            sizeof(struct thread_stats)
            - (200 * sizeof(struct slab_stats)));
    FUNC_0("Global stats", sizeof(struct stats));
    FUNC_0("Settings", sizeof(struct settings));
    FUNC_0("Item (no cas)", sizeof(item));
    FUNC_0("Item (cas)", sizeof(item) + sizeof(uint64_t));



    FUNC_0("Libevent thread",
            sizeof(LIBEVENT_THREAD) - sizeof(struct thread_stats));
    FUNC_0("Connection", sizeof(conn));

    FUNC_1("----------------------------------------\n");

    FUNC_0("libevent thread cumulative", sizeof(LIBEVENT_THREAD));
    FUNC_0("Thread stats cumulative\t", sizeof(struct thread_stats));

    return 0;
}
