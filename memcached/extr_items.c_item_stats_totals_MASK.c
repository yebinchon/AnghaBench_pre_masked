
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ direct_reclaims; scalar_t__ moves_within_lru; scalar_t__ moves_to_warm; scalar_t__ moves_to_cold; scalar_t__ lrutail_reflocked; scalar_t__ crawler_items_checked; scalar_t__ crawler_reclaimed; scalar_t__ reclaimed; scalar_t__ evicted; scalar_t__ evicted_active; scalar_t__ evicted_unfetched; scalar_t__ expired_unfetched; } ;
typedef TYPE_1__ itemstats_t ;
struct TYPE_7__ {scalar_t__ direct_reclaims; scalar_t__ moves_within_lru; scalar_t__ moves_to_warm; scalar_t__ moves_to_cold; scalar_t__ lrutail_reflocked; scalar_t__ crawler_items_checked; scalar_t__ crawler_reclaimed; scalar_t__ reclaimed; scalar_t__ evicted; scalar_t__ evicted_active; scalar_t__ evicted_unfetched; scalar_t__ expired_unfetched; } ;
struct TYPE_6__ {scalar_t__ lru_maintainer_thread; } ;
typedef int ADD_STAT ;


 int FUNC_0 (char*,char*,unsigned long long) ;
 int VAR_0 ;
 TYPE_4__* VAR_1 ;
 int * VAR_2 ;
 scalar_t__ FUNC_1 () ;
 int* VAR_3 ;
 int FUNC_2 (TYPE_1__*,int ,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 TYPE_2__ VAR_4 ;

void FUNC_5(ADD_STAT VAR_5, void *VAR_6) {
    itemstats_t VAR_7;
    FUNC_2(&VAR_7, 0, sizeof(itemstats_t));
    int VAR_8;
    for (VAR_8 = 0; VAR_8 < VAR_0; VAR_8++) {
        int VAR_9;
        int VAR_10;
        for (VAR_9 = 0; VAR_9 < 4; VAR_9++) {
            VAR_10 = VAR_8 | VAR_3[VAR_9];
            FUNC_3(&VAR_2[VAR_10]);
            VAR_7.expired_unfetched += VAR_1[VAR_10].expired_unfetched;
            VAR_7.evicted_unfetched += VAR_1[VAR_10].evicted_unfetched;
            VAR_7.evicted_active += VAR_1[VAR_10].evicted_active;
            VAR_7.evicted += VAR_1[VAR_10].evicted;
            VAR_7.reclaimed += VAR_1[VAR_10].reclaimed;
            VAR_7.crawler_reclaimed += VAR_1[VAR_10].crawler_reclaimed;
            VAR_7.crawler_items_checked += VAR_1[VAR_10].crawler_items_checked;
            VAR_7.lrutail_reflocked += VAR_1[VAR_10].lrutail_reflocked;
            VAR_7.moves_to_cold += VAR_1[VAR_10].moves_to_cold;
            VAR_7.moves_to_warm += VAR_1[VAR_10].moves_to_warm;
            VAR_7.moves_within_lru += VAR_1[VAR_10].moves_within_lru;
            VAR_7.direct_reclaims += VAR_1[VAR_10].direct_reclaims;
            FUNC_4(&VAR_2[VAR_10]);
        }
    }
    FUNC_0("expired_unfetched", "%llu",
                (unsigned long long)VAR_7.expired_unfetched);
    FUNC_0("evicted_unfetched", "%llu",
                (unsigned long long)VAR_7.evicted_unfetched);
    if (VAR_4.lru_maintainer_thread) {
        FUNC_0("evicted_active", "%llu",
                    (unsigned long long)VAR_7.evicted_active);
    }
    FUNC_0("evictions", "%llu",
                (unsigned long long)VAR_7.evicted);
    FUNC_0("reclaimed", "%llu",
                (unsigned long long)VAR_7.reclaimed);
    FUNC_0("crawler_reclaimed", "%llu",
                (unsigned long long)VAR_7.crawler_reclaimed);
    FUNC_0("crawler_items_checked", "%llu",
                (unsigned long long)VAR_7.crawler_items_checked);
    FUNC_0("lrutail_reflocked", "%llu",
                (unsigned long long)VAR_7.lrutail_reflocked);
    if (VAR_4.lru_maintainer_thread) {
        FUNC_0("moves_to_cold", "%llu",
                    (unsigned long long)VAR_7.moves_to_cold);
        FUNC_0("moves_to_warm", "%llu",
                    (unsigned long long)VAR_7.moves_to_warm);
        FUNC_0("moves_within_lru", "%llu",
                    (unsigned long long)VAR_7.moves_within_lru);
        FUNC_0("direct_reclaims", "%llu",
                    (unsigned long long)VAR_7.direct_reclaims);
        FUNC_0("lru_bumps_dropped", "%llu",
                    (unsigned long long)FUNC_1());
    }
}
