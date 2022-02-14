
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_31__ TYPE_6__ ;
typedef struct TYPE_30__ TYPE_5__ ;
typedef struct TYPE_29__ TYPE_4__ ;
typedef struct TYPE_28__ TYPE_3__ ;
typedef struct TYPE_27__ TYPE_2__ ;
typedef struct TYPE_26__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_29__ {int it_flags; int exptime; int nkey; scalar_t__ nbytes; } ;
typedef TYPE_4__ item ;
typedef enum store_item_type { ____Placeholder_store_item_type } store_item_type ;
struct TYPE_30__ {int sfd; TYPE_3__* thread; scalar_t__ cas; scalar_t__ set_stale; } ;
typedef TYPE_5__ conn ;
struct TYPE_31__ {int verbose; } ;
struct TYPE_27__ {int mutex; TYPE_1__* slab_stats; int cas_misses; } ;
struct TYPE_28__ {int l; int storage; TYPE_2__ stats; } ;
struct TYPE_26__ {int cas_badval; int cas_hits; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_4__*,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 size_t FUNC_1 (TYPE_4__*) ;
 scalar_t__ FUNC_2 (TYPE_4__*) ;
 char* FUNC_3 (TYPE_4__*) ;
 int VAR_5 ;
 int FUNC_4 (int ,int ,int ,int *,int,int,char*,int ,int ,size_t,int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_5 (int ,TYPE_4__*) ;
 int VAR_14 ;
 int FUNC_6 (int,TYPE_4__*,TYPE_4__*,TYPE_4__*) ;
 TYPE_4__* FUNC_7 (char*,int ,int ,int ,scalar_t__) ;
 TYPE_4__* FUNC_8 (char*,int ,int const,TYPE_5__*,int ) ;
 int FUNC_9 (TYPE_4__*,int const) ;
 int FUNC_10 (TYPE_4__*) ;
 int FUNC_11 (TYPE_4__*) ;
 int FUNC_12 (int ,char*,unsigned long long,unsigned long long) ;
 int FUNC_13 (TYPE_4__*) ;
 int FUNC_14 (TYPE_4__*,TYPE_4__*,int const) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (int *) ;
 TYPE_6__ VAR_15 ;
 int VAR_16 ;

enum store_item_type FUNC_17(item *VAR_17, int VAR_18, conn *VAR_19, const uint32_t VAR_20) {
    char *VAR_21 = FUNC_3(VAR_17);
    item *VAR_22 = FUNC_8(VAR_21, VAR_17->nkey, VAR_20, VAR_19, VAR_0);
    enum store_item_type VAR_23 = VAR_8;

    item *VAR_24 = ((void*)0);
    uint32_t VAR_25;

    if (VAR_22 != ((void*)0) && VAR_18 == VAR_9) {

        FUNC_11(VAR_22);
    } else if (!VAR_22 && (VAR_18 == VAR_13
        || VAR_18 == VAR_10 || VAR_18 == VAR_12))
    {

    } else if (VAR_18 == VAR_11) {

        if (VAR_22 == ((void*)0)) {

            VAR_23 = VAR_7;
            FUNC_15(&VAR_19->thread->stats.mutex);
            VAR_19->thread->stats.cas_misses++;
            FUNC_16(&VAR_19->thread->stats.mutex);
        }
        else if (FUNC_2(VAR_17) == FUNC_2(VAR_22)) {



            FUNC_15(&VAR_19->thread->stats.mutex);
            VAR_19->thread->stats.slab_stats[FUNC_1(VAR_22)].cas_hits++;
            FUNC_16(&VAR_19->thread->stats.mutex);

            FUNC_5(VAR_19->thread->storage, VAR_22);
            FUNC_14(VAR_22, VAR_17, VAR_20);
            VAR_23 = VAR_14;
        } else if (VAR_19->set_stale && FUNC_2(VAR_17) < FUNC_2(VAR_22)) {




            VAR_17->exptime = VAR_22->exptime;
            VAR_17->it_flags |= VAR_3;
            if (VAR_22->it_flags & VAR_4) {
                VAR_17->it_flags |= VAR_4;
            }

            FUNC_15(&VAR_19->thread->stats.mutex);
            VAR_19->thread->stats.slab_stats[FUNC_1(VAR_22)].cas_hits++;
            FUNC_16(&VAR_19->thread->stats.mutex);

            FUNC_5(VAR_19->thread->storage, VAR_22);
            FUNC_14(VAR_22, VAR_17, VAR_20);
            VAR_23 = VAR_14;
        } else {
            FUNC_15(&VAR_19->thread->stats.mutex);
            VAR_19->thread->stats.slab_stats[FUNC_1(VAR_22)].cas_badval++;
            FUNC_16(&VAR_19->thread->stats.mutex);

            if(VAR_15.verbose > 1) {
                FUNC_12(VAR_16, "CAS:  failure: expected %llu, got %llu\n",
                        (unsigned long long)FUNC_2(VAR_22),
                        (unsigned long long)FUNC_2(VAR_17));
            }
            VAR_23 = VAR_1;
        }
    } else {
        int VAR_26 = 0;




        if (VAR_18 == VAR_10 || VAR_18 == VAR_12) {



            if (FUNC_2(VAR_17) != 0) {

                if (FUNC_2(VAR_17) != FUNC_2(VAR_22)) {
                    VAR_23 = VAR_1;
                }
            }
            if (VAR_23 == VAR_8) {

                FUNC_0(VAR_22, VAR_25);
                VAR_24 = FUNC_7(VAR_21, VAR_17->nkey, VAR_25, VAR_22->exptime, VAR_17->nbytes + VAR_22->nbytes - 2 );


                if (VAR_24 == ((void*)0) || FUNC_6(VAR_18, VAR_22, VAR_24, VAR_17) == -1) {
                    VAR_26 = 1;
                    VAR_23 = VAR_8;

                    if (VAR_24 != ((void*)0))
                        FUNC_13(VAR_24);
                } else {
                    VAR_17 = VAR_24;
                }
            }
        }

        if (VAR_23 == VAR_8 && VAR_26 == 0) {
            if (VAR_22 != ((void*)0)) {
                FUNC_5(VAR_19->thread->storage, VAR_22);
                FUNC_14(VAR_22, VAR_17, VAR_20);
            } else {
                FUNC_9(VAR_17, VAR_20);
            }

            VAR_19->cas = FUNC_2(VAR_17);

            VAR_23 = VAR_14;
        }
    }

    if (VAR_22 != ((void*)0))
        FUNC_10(VAR_22);
    if (VAR_24 != ((void*)0))
        FUNC_10(VAR_24);

    if (VAR_23 == VAR_14) {
        VAR_19->cas = FUNC_2(VAR_17);
    }
    FUNC_4(VAR_19->thread->l, VAR_6, VAR_5, ((void*)0),
            VAR_23, VAR_18, FUNC_3(VAR_17), VAR_17->nkey, VAR_17->exptime, FUNC_1(VAR_17), VAR_19->sfd);

    return VAR_23;
}
