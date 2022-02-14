
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint64_t ;
typedef int uint32_t ;
struct lru_pull_tail_return {int hv; TYPE_1__* it; } ;
typedef scalar_t__ rel_time_t ;
struct TYPE_16__ {scalar_t__ nbytes; scalar_t__ nkey; int it_flags; scalar_t__ time; int refcount; scalar_t__ exptime; unsigned int slabs_clsid; struct TYPE_16__* prev; } ;
typedef TYPE_1__ item ;
struct TYPE_18__ {int moves_to_warm; int evicted_active; int evicted_unfetched; int evicted_nonzero; scalar_t__ evicted_time; int evicted; int moves_to_cold; int moves_within_lru; int expired_unfetched; int reclaimed; int tailrepairs; int lrutail_reflocked; } ;
struct TYPE_17__ {scalar_t__ tail_repair_time; int const hot_lru_pct; int const warm_lru_pct; int slab_automove; int lru_segmented; int evict_to_free; } ;




 int VAR_0 ;
 int VAR_1 ;
 unsigned int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int VAR_2 ;
 int FUNC_2 (int *,int ,int ,TYPE_1__*) ;
 int VAR_3 ;
 int const VAR_4 ;
 int const VAR_5 ;
 int const VAR_6 ;
 int FUNC_3 (int ,TYPE_1__*) ;


 scalar_t__ VAR_7 ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (TYPE_1__*,int ) ;
 int FUNC_7 (TYPE_1__*) ;
 int VAR_8 ;
 int FUNC_8 (int ,scalar_t__) ;
 scalar_t__ FUNC_9 (TYPE_1__*) ;
 int FUNC_10 (TYPE_1__*) ;
 void* FUNC_11 (int ) ;
 int FUNC_12 (void*) ;
 TYPE_5__* VAR_9 ;
 int * VAR_10 ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (TYPE_1__*) ;
 TYPE_3__ VAR_11 ;
 int* VAR_12 ;
 int FUNC_16 (int,int const) ;
 TYPE_1__** VAR_13 ;

int FUNC_17(const int VAR_14, const int VAR_15,
        const uint64_t VAR_16, const uint8_t VAR_17, const rel_time_t VAR_18,
        struct lru_pull_tail_return *VAR_19) {
    item *VAR_20 = ((void*)0);
    int VAR_21 = VAR_14;
    int VAR_22 = 0;
    if (VAR_21 == 0)
        return 0;

    int VAR_23 = 5;
    item *VAR_24;
    item *VAR_25;
    void *VAR_26 = ((void*)0);
    unsigned int VAR_27 = 0;
    uint64_t VAR_28 = 0;

    VAR_21 |= VAR_15;
    FUNC_13(&VAR_10[VAR_21]);
    VAR_24 = VAR_13[VAR_21];

    for (; VAR_23 > 0 && VAR_24 != ((void*)0); VAR_23--, VAR_24=VAR_25) {

        VAR_25 = VAR_24->prev;
        if (VAR_24->nbytes == 0 && VAR_24->nkey == 0 && VAR_24->it_flags == 1) {

            if (VAR_17 & VAR_4) {
                FUNC_14(&VAR_10[VAR_21]);
                return 0;
            }
            VAR_23++;
            continue;
        }
        uint32_t VAR_29 = FUNC_8(FUNC_1(VAR_24), VAR_24->nkey);


        if ((VAR_26 = FUNC_11(VAR_29)) == ((void*)0))
            continue;

        if (FUNC_15(VAR_24) != 2) {


            VAR_9[VAR_21].lrutail_reflocked++;


            if (VAR_11.tail_repair_time &&
                    VAR_24->time + VAR_11.tail_repair_time < VAR_7) {
                VAR_9[VAR_21].tailrepairs++;
                VAR_24->refcount = 1;

                FUNC_3(VAR_8, VAR_24);
                FUNC_6(VAR_24, VAR_29);
                FUNC_12(VAR_26);
                continue;
            }
        }


        if ((VAR_24->exptime != 0 && VAR_24->exptime < VAR_7)
            || FUNC_9(VAR_24)) {
            VAR_9[VAR_21].reclaimed++;
            if ((VAR_24->it_flags & VAR_1) == 0) {
                VAR_9[VAR_21].expired_unfetched++;
            }

            FUNC_6(VAR_24, VAR_29);
            FUNC_3(VAR_8, VAR_24);

            FUNC_5(VAR_24);
            FUNC_12(VAR_26);
            VAR_22++;


            continue;
        }




        switch (VAR_15) {
            case 130:
                VAR_28 = VAR_16 * VAR_11.hot_lru_pct / 100;
            case 128:
                if (VAR_28 == 0)
                    VAR_28 = VAR_16 * VAR_11.warm_lru_pct / 100;

                if ((VAR_24->it_flags & VAR_0) != 0) {
                    VAR_24->it_flags &= ~VAR_0;
                    VAR_22++;
                    if (VAR_15 == 128) {
                        VAR_9[VAR_21].moves_within_lru++;
                        FUNC_7(VAR_24);
                        FUNC_4(VAR_24);
                        FUNC_5(VAR_24);
                        FUNC_12(VAR_26);
                    } else {

                        VAR_9[VAR_21].moves_to_warm++;
                        VAR_27 = 128;
                        FUNC_7(VAR_24);
                        VAR_20 = VAR_24;
                    }
                } else if (VAR_12[VAR_21] > VAR_28 ||
                           VAR_7 - VAR_24->time > VAR_18) {
                    VAR_9[VAR_21].moves_to_cold++;
                    VAR_27 = 131;
                    FUNC_7(VAR_24);
                    VAR_20 = VAR_24;
                    VAR_22++;
                    break;
                } else {

                    VAR_20 = VAR_24;
                }
                break;
            case 131:
                VAR_20 = VAR_24;
                if (VAR_17 & VAR_5) {
                    if (VAR_11.evict_to_free == 0) {

                        break;
                    }
                    VAR_9[VAR_21].evicted++;
                    VAR_9[VAR_21].evicted_time = VAR_7 - VAR_24->time;
                    if (VAR_24->exptime != 0)
                        VAR_9[VAR_21].evicted_nonzero++;
                    if ((VAR_24->it_flags & VAR_1) == 0) {
                        VAR_9[VAR_21].evicted_unfetched++;
                    }
                    if ((VAR_24->it_flags & VAR_0)) {
                        VAR_9[VAR_21].evicted_active++;
                    }
                    FUNC_2(((void*)0), VAR_3, VAR_2, VAR_24);
                    FUNC_3(VAR_8, VAR_24);
                    FUNC_6(VAR_24, VAR_29);
                    VAR_22++;
                    if (VAR_11.slab_automove == 2) {
                        FUNC_16(-1, VAR_14);
                    }
                } else if (VAR_17 & VAR_6) {

                    VAR_19->it = VAR_20;
                    VAR_19->hv = VAR_29;
                } else if ((VAR_24->it_flags & VAR_0) != 0
                        && VAR_11.lru_segmented) {
                    VAR_9[VAR_21].moves_to_warm++;
                    VAR_24->it_flags &= ~VAR_0;
                    VAR_27 = 128;
                    FUNC_7(VAR_24);
                    VAR_22++;
                }
                break;
            case 129:
                VAR_20 = VAR_24;
                break;
        }
        if (VAR_20 != ((void*)0))
            break;
    }

    FUNC_14(&VAR_10[VAR_21]);

    if (VAR_20 != ((void*)0)) {
        if (VAR_27) {
            VAR_20->slabs_clsid = FUNC_0(VAR_20);
            VAR_20->slabs_clsid |= VAR_27;
            FUNC_10(VAR_20);
        }
        if ((VAR_17 & VAR_6) == 0) {
            FUNC_5(VAR_20);
            FUNC_12(VAR_26);
        }
    }

    return VAR_22;
}
