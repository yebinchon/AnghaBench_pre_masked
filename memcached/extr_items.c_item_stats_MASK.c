
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct thread_stats {scalar_t__* lru_hits; } ;
struct TYPE_6__ {unsigned long long evicted_time; scalar_t__ hits_to_temp; scalar_t__ hits_to_cold; scalar_t__ hits_to_warm; scalar_t__ hits_to_hot; scalar_t__ direct_reclaims; scalar_t__ moves_within_lru; scalar_t__ moves_to_warm; scalar_t__ moves_to_cold; scalar_t__ lrutail_reflocked; scalar_t__ crawler_items_checked; scalar_t__ crawler_reclaimed; scalar_t__ evicted_active; scalar_t__ evicted_unfetched; scalar_t__ expired_unfetched; scalar_t__ reclaimed; scalar_t__ tailrepairs; scalar_t__ outofmemory; scalar_t__ evicted_nonzero; scalar_t__ evicted; scalar_t__ mem_requested; } ;
typedef TYPE_1__ itemstats_t ;
struct TYPE_9__ {unsigned long long evicted_time; scalar_t__ direct_reclaims; scalar_t__ moves_within_lru; scalar_t__ moves_to_warm; scalar_t__ moves_to_cold; scalar_t__ lrutail_reflocked; scalar_t__ crawler_items_checked; scalar_t__ crawler_reclaimed; scalar_t__ evicted_active; scalar_t__ evicted_unfetched; scalar_t__ expired_unfetched; scalar_t__ reclaimed; scalar_t__ tailrepairs; scalar_t__ outofmemory; scalar_t__ evicted_nonzero; scalar_t__ evicted; } ;
struct TYPE_8__ {scalar_t__ lru_maintainer_thread; scalar_t__ temp_lru; } ;
struct TYPE_7__ {unsigned int time; } ;
typedef int (* ADD_STAT ) (int *,int ,int *,int ,void*) ;


 int FUNC_0 (char const*,int,char*,char*,unsigned long long) ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;


 unsigned int VAR_3 ;
 TYPE_5__* VAR_4 ;
 int * VAR_5 ;
 int* VAR_6 ;
 int FUNC_1 (TYPE_1__*,int ,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 TYPE_3__ VAR_7 ;
 unsigned int* VAR_8 ;
 scalar_t__* VAR_9 ;
 TYPE_2__** VAR_10 ;
 int FUNC_4 (struct thread_stats*) ;

void FUNC_5(ADD_STAT VAR_11, void *VAR_12) {
    struct thread_stats VAR_13;
    FUNC_4(&VAR_13);
    itemstats_t VAR_14;
    int VAR_15;
    for (VAR_15 = 0; VAR_15 < VAR_0; VAR_15++) {
        FUNC_1(&VAR_14, 0, sizeof(itemstats_t));
        int VAR_16;
        int VAR_17;
        unsigned int VAR_18 = 0;
        unsigned int VAR_19 = 0;
        unsigned int VAR_20 = 0;
        unsigned int VAR_21 = 0;
        unsigned int VAR_22[4];
        const char *VAR_23 = "items:%d:%s";
        char VAR_24[VAR_1];
        char VAR_25[VAR_2];
        int VAR_26 = 0, VAR_27 = 0;
        for (VAR_16 = 0; VAR_16 < 4; VAR_16++) {
            VAR_17 = VAR_15 | VAR_6[VAR_16];
            FUNC_2(&VAR_5[VAR_17]);
            VAR_14.evicted += VAR_4[VAR_17].evicted;
            VAR_14.evicted_nonzero += VAR_4[VAR_17].evicted_nonzero;
            VAR_14.outofmemory += VAR_4[VAR_17].outofmemory;
            VAR_14.tailrepairs += VAR_4[VAR_17].tailrepairs;
            VAR_14.reclaimed += VAR_4[VAR_17].reclaimed;
            VAR_14.expired_unfetched += VAR_4[VAR_17].expired_unfetched;
            VAR_14.evicted_unfetched += VAR_4[VAR_17].evicted_unfetched;
            VAR_14.evicted_active += VAR_4[VAR_17].evicted_active;
            VAR_14.crawler_reclaimed += VAR_4[VAR_17].crawler_reclaimed;
            VAR_14.crawler_items_checked += VAR_4[VAR_17].crawler_items_checked;
            VAR_14.lrutail_reflocked += VAR_4[VAR_17].lrutail_reflocked;
            VAR_14.moves_to_cold += VAR_4[VAR_17].moves_to_cold;
            VAR_14.moves_to_warm += VAR_4[VAR_17].moves_to_warm;
            VAR_14.moves_within_lru += VAR_4[VAR_17].moves_within_lru;
            VAR_14.direct_reclaims += VAR_4[VAR_17].direct_reclaims;
            VAR_14.mem_requested += VAR_9[VAR_17];
            VAR_18 += VAR_8[VAR_17];
            VAR_22[VAR_16] = VAR_8[VAR_17];
            if (VAR_6[VAR_16] == 131 && VAR_10[VAR_17] != ((void*)0)) {
                VAR_19 = VAR_3 - VAR_10[VAR_17]->time;
            } else if (VAR_6[VAR_16] == 130 && VAR_10[VAR_17] != ((void*)0)) {
                VAR_20 = VAR_3 - VAR_10[VAR_17]->time;
            } else if (VAR_6[VAR_16] == 128 && VAR_10[VAR_17] != ((void*)0)) {
                VAR_21 = VAR_3 - VAR_10[VAR_17]->time;
            }
            if (VAR_6[VAR_16] == 131)
                VAR_14.evicted_time = VAR_4[VAR_17].evicted_time;
            switch (VAR_6[VAR_16]) {
                case 130:
                    VAR_14.hits_to_hot = VAR_13.lru_hits[VAR_17];
                    break;
                case 128:
                    VAR_14.hits_to_warm = VAR_13.lru_hits[VAR_17];
                    break;
                case 131:
                    VAR_14.hits_to_cold = VAR_13.lru_hits[VAR_17];
                    break;
                case 129:
                    VAR_14.hits_to_temp = VAR_13.lru_hits[VAR_17];
                    break;
            }
            FUNC_3(&VAR_5[VAR_17]);
        }
        if (VAR_18 == 0)
            continue;
        FUNC_0(VAR_23, VAR_15, "number", "%u", VAR_18);
        if (VAR_7.lru_maintainer_thread) {
            FUNC_0(VAR_23, VAR_15, "number_hot", "%u", VAR_22[0]);
            FUNC_0(VAR_23, VAR_15, "number_warm", "%u", VAR_22[1]);
            FUNC_0(VAR_23, VAR_15, "number_cold", "%u", VAR_22[2]);
            if (VAR_7.temp_lru) {
                FUNC_0(VAR_23, VAR_15, "number_temp", "%u", VAR_22[3]);
            }
            FUNC_0(VAR_23, VAR_15, "age_hot", "%u", VAR_20);
            FUNC_0(VAR_23, VAR_15, "age_warm", "%u", VAR_21);
        }
        FUNC_0(VAR_23, VAR_15, "age", "%u", VAR_19);
        FUNC_0(VAR_23, VAR_15, "mem_requested", "%llu", (unsigned long long)VAR_14.mem_requested);
        FUNC_0(VAR_23, VAR_15, "evicted",
                            "%llu", (unsigned long long)VAR_14.evicted);
        FUNC_0(VAR_23, VAR_15, "evicted_nonzero",
                            "%llu", (unsigned long long)VAR_14.evicted_nonzero);
        FUNC_0(VAR_23, VAR_15, "evicted_time",
                            "%u", VAR_14.evicted_time);
        FUNC_0(VAR_23, VAR_15, "outofmemory",
                            "%llu", (unsigned long long)VAR_14.outofmemory);
        FUNC_0(VAR_23, VAR_15, "tailrepairs",
                            "%llu", (unsigned long long)VAR_14.tailrepairs);
        FUNC_0(VAR_23, VAR_15, "reclaimed",
                            "%llu", (unsigned long long)VAR_14.reclaimed);
        FUNC_0(VAR_23, VAR_15, "expired_unfetched",
                            "%llu", (unsigned long long)VAR_14.expired_unfetched);
        FUNC_0(VAR_23, VAR_15, "evicted_unfetched",
                            "%llu", (unsigned long long)VAR_14.evicted_unfetched);
        if (VAR_7.lru_maintainer_thread) {
            FUNC_0(VAR_23, VAR_15, "evicted_active",
                                "%llu", (unsigned long long)VAR_14.evicted_active);
        }
        FUNC_0(VAR_23, VAR_15, "crawler_reclaimed",
                            "%llu", (unsigned long long)VAR_14.crawler_reclaimed);
        FUNC_0(VAR_23, VAR_15, "crawler_items_checked",
                            "%llu", (unsigned long long)VAR_14.crawler_items_checked);
        FUNC_0(VAR_23, VAR_15, "lrutail_reflocked",
                            "%llu", (unsigned long long)VAR_14.lrutail_reflocked);
        if (VAR_7.lru_maintainer_thread) {
            FUNC_0(VAR_23, VAR_15, "moves_to_cold",
                                "%llu", (unsigned long long)VAR_14.moves_to_cold);
            FUNC_0(VAR_23, VAR_15, "moves_to_warm",
                                "%llu", (unsigned long long)VAR_14.moves_to_warm);
            FUNC_0(VAR_23, VAR_15, "moves_within_lru",
                                "%llu", (unsigned long long)VAR_14.moves_within_lru);
            FUNC_0(VAR_23, VAR_15, "direct_reclaims",
                                "%llu", (unsigned long long)VAR_14.direct_reclaims);
            FUNC_0(VAR_23, VAR_15, "hits_to_hot",
                                "%llu", (unsigned long long)VAR_14.hits_to_hot);

            FUNC_0(VAR_23, VAR_15, "hits_to_warm",
                                "%llu", (unsigned long long)VAR_14.hits_to_warm);

            FUNC_0(VAR_23, VAR_15, "hits_to_cold",
                                "%llu", (unsigned long long)VAR_14.hits_to_cold);

            FUNC_0(VAR_23, VAR_15, "hits_to_temp",
                                "%llu", (unsigned long long)VAR_14.hits_to_temp);

        }
    }


    VAR_11(((void*)0), 0, ((void*)0), 0, VAR_12);
}
