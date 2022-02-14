
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;
typedef struct TYPE_12__ TYPE_11__ ;


typedef int u_char ;
typedef size_t ngx_uint_t ;
struct TYPE_14__ {size_t min_shift; TYPE_1__* stats; TYPE_3__* pages; int * start; int * end; } ;
typedef TYPE_2__ ngx_slab_pool_t ;
struct TYPE_15__ {uintptr_t slab; uintptr_t prev; struct TYPE_15__* next; } ;
typedef TYPE_3__ ngx_slab_page_t ;
struct TYPE_13__ {size_t total; int used; } ;
struct TYPE_12__ {int log; } ;


 int VAR_0 ;
 int VAR_1 ;

 uintptr_t VAR_2 ;

 int VAR_3 ;
 int VAR_4 ;

 uintptr_t VAR_5 ;
 uintptr_t VAR_6 ;
 uintptr_t VAR_7 ;

 TYPE_11__* VAR_8 ;
 int FUNC_0 (int ,int ,int ,char*,void*) ;
 size_t VAR_9 ;
 int VAR_10 ;
 int FUNC_1 (TYPE_2__*,int ,char*) ;
 uintptr_t VAR_11 ;
 size_t VAR_12 ;
 int FUNC_2 (TYPE_2__*,TYPE_3__*,size_t) ;
 int FUNC_3 (void*,size_t) ;
 size_t FUNC_4 (TYPE_3__*) ;
 TYPE_3__* FUNC_5 (TYPE_2__*) ;

void
FUNC_6(ngx_slab_pool_t *VAR_13, void *VAR_14)
{
    size_t VAR_15;
    uintptr_t VAR_16, VAR_17, *VAR_18;
    ngx_uint_t VAR_19, VAR_20, VAR_21, VAR_22, VAR_23, VAR_24;
    ngx_slab_page_t *VAR_25, *VAR_26;

    FUNC_0(VAR_1, VAR_8->log, 0, "slab free: %p", VAR_14);

    if ((u_char *) VAR_14 < VAR_13->start || (u_char *) VAR_14 > VAR_13->end) {
        FUNC_1(VAR_13, VAR_0, "ngx_slab_free(): outside of pool");
        goto fail;
    }

    VAR_20 = ((u_char *) VAR_14 - VAR_13->start) >> VAR_10;
    VAR_26 = &VAR_13->pages[VAR_20];
    VAR_16 = VAR_26->slab;
    VAR_21 = FUNC_4(VAR_26);

    switch (VAR_21) {

    case 128:

        VAR_23 = VAR_16 & VAR_7;
        VAR_15 = (size_t) 1 << VAR_23;

        if ((uintptr_t) VAR_14 & (VAR_15 - 1)) {
            goto wrong_chunk;
        }

        VAR_20 = ((uintptr_t) VAR_14 & (VAR_9 - 1)) >> VAR_23;
        VAR_17 = (uintptr_t) 1 << (VAR_20 % (8 * sizeof(uintptr_t)));
        VAR_20 /= 8 * sizeof(uintptr_t);
        VAR_18 = (uintptr_t *)
                             ((uintptr_t) VAR_14 & ~((uintptr_t) VAR_9 - 1));

        if (VAR_18[VAR_20] & VAR_17) {
            VAR_22 = VAR_23 - VAR_13->min_shift;

            if (VAR_26->next == ((void*)0)) {
                VAR_25 = FUNC_5(VAR_13);

                VAR_26->next = VAR_25[VAR_22].next;
                VAR_25[VAR_22].next = VAR_26;

                VAR_26->prev = (uintptr_t) &VAR_25[VAR_22] | 128;
                VAR_26->next->prev = (uintptr_t) VAR_26 | 128;
            }

            VAR_18[VAR_20] &= ~VAR_17;

            VAR_20 = (VAR_9 >> VAR_23) / ((1 << VAR_23) * 8);

            if (VAR_20 == 0) {
                VAR_20 = 1;
            }

            VAR_19 = VAR_20 / (8 * sizeof(uintptr_t));
            VAR_17 = ((uintptr_t) 1 << (VAR_20 % (8 * sizeof(uintptr_t)))) - 1;

            if (VAR_18[VAR_19] & ~VAR_17) {
                goto done;
            }

            VAR_24 = (VAR_9 >> VAR_23) / (8 * sizeof(uintptr_t));

            for (VAR_19 = VAR_19 + 1; VAR_19 < VAR_24; VAR_19++) {
                if (VAR_18[VAR_19]) {
                    goto done;
                }
            }

            FUNC_2(VAR_13, VAR_26, 1);

            VAR_13->stats[VAR_22].total -= (VAR_9 >> VAR_23) - VAR_20;

            goto done;
        }

        goto chunk_already_free;

    case 130:

        VAR_17 = (uintptr_t) 1 <<
                (((uintptr_t) VAR_14 & (VAR_9 - 1)) >> VAR_11);
        VAR_15 = VAR_12;

        if ((uintptr_t) VAR_14 & (VAR_15 - 1)) {
            goto wrong_chunk;
        }

        if (VAR_16 & VAR_17) {
            VAR_22 = VAR_11 - VAR_13->min_shift;

            if (VAR_16 == VAR_2) {
                VAR_25 = FUNC_5(VAR_13);

                VAR_26->next = VAR_25[VAR_22].next;
                VAR_25[VAR_22].next = VAR_26;

                VAR_26->prev = (uintptr_t) &VAR_25[VAR_22] | 130;
                VAR_26->next->prev = (uintptr_t) VAR_26 | 130;
            }

            VAR_26->slab &= ~VAR_17;

            if (VAR_26->slab) {
                goto done;
            }

            FUNC_2(VAR_13, VAR_26, 1);

            VAR_13->stats[VAR_22].total -= 8 * sizeof(uintptr_t);

            goto done;
        }

        goto chunk_already_free;

    case 131:

        VAR_23 = VAR_16 & VAR_7;
        VAR_15 = (size_t) 1 << VAR_23;

        if ((uintptr_t) VAR_14 & (VAR_15 - 1)) {
            goto wrong_chunk;
        }

        VAR_17 = (uintptr_t) 1 << ((((uintptr_t) VAR_14 & (VAR_9 - 1)) >> VAR_23)
                              + VAR_4);

        if (VAR_16 & VAR_17) {
            VAR_22 = VAR_23 - VAR_13->min_shift;

            if (VAR_26->next == ((void*)0)) {
                VAR_25 = FUNC_5(VAR_13);

                VAR_26->next = VAR_25[VAR_22].next;
                VAR_25[VAR_22].next = VAR_26;

                VAR_26->prev = (uintptr_t) &VAR_25[VAR_22] | 131;
                VAR_26->next->prev = (uintptr_t) VAR_26 | 131;
            }

            VAR_26->slab &= ~VAR_17;

            if (VAR_26->slab & VAR_3) {
                goto done;
            }

            FUNC_2(VAR_13, VAR_26, 1);

            VAR_13->stats[VAR_22].total -= VAR_9 >> VAR_23;

            goto done;
        }

        goto chunk_already_free;

    case 129:

        if ((uintptr_t) VAR_14 & (VAR_9 - 1)) {
            goto wrong_chunk;
        }

        if (!(VAR_16 & VAR_6)) {
            FUNC_1(VAR_13, VAR_0,
                           "ngx_slab_free(): page is already free");
            goto fail;
        }

        if (VAR_16 == VAR_5) {
            FUNC_1(VAR_13, VAR_0,
                           "ngx_slab_free(): pointer to wrong page");
            goto fail;
        }

        VAR_15 = VAR_16 & ~VAR_6;

        FUNC_2(VAR_13, VAR_26, VAR_15);

        FUNC_3(VAR_14, VAR_15 << VAR_10);

        return;
    }



    return;

done:

    VAR_13->stats[VAR_22].used--;

    FUNC_3(VAR_14, VAR_15);

    return;

wrong_chunk:

    FUNC_1(VAR_13, VAR_0,
                   "ngx_slab_free(): pointer to wrong chunk");

    goto fail;

chunk_already_free:

    FUNC_1(VAR_13, VAR_0,
                   "ngx_slab_free(): chunk is already free");

fail:

    return;
}
