
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef size_t const uint8_t ;
typedef int uint64_t ;
typedef scalar_t__ rel_time_t ;
struct TYPE_11__ {unsigned int orig_clsid; TYPE_2__* head; scalar_t__ size; scalar_t__ used; scalar_t__ prev; scalar_t__ next; } ;
typedef TYPE_1__ item_chunk ;
struct TYPE_12__ {int it_flags; unsigned int slabs_clsid; size_t nkey; int nbytes; scalar_t__ exptime; scalar_t__ h_next; scalar_t__ prev; scalar_t__ next; } ;
typedef TYPE_2__ item ;
typedef int flags ;
struct TYPE_14__ {int outofmemory; } ;
struct TYPE_13__ {size_t slab_chunk_size_max; scalar_t__ const temporary_ttl; scalar_t__ use_cas; scalar_t__ lru_segmented; scalar_t__ temp_lru; } ;


 unsigned int VAR_0 ;
 int FUNC_0 (TYPE_2__*,char) ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (TYPE_2__*) ;
 scalar_t__ FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_2__*) ;
 unsigned int VAR_5 ;
 int FUNC_4 (int) ;
 scalar_t__ const VAR_6 ;
 TYPE_2__* FUNC_5 (size_t,unsigned int) ;
 size_t FUNC_6 (size_t const,unsigned int const,int const,char*,size_t const*) ;
 TYPE_4__* VAR_7 ;
 int * VAR_8 ;
 int FUNC_7 (int ,...) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 TYPE_3__ VAR_9 ;
 unsigned int FUNC_10 (int) ;

item *FUNC_11(char *VAR_10, const size_t VAR_11, const unsigned int VAR_12,
                    const rel_time_t VAR_13, const int VAR_14) {
    uint8_t VAR_15;
    item *VAR_16 = ((void*)0);
    char VAR_17[40];

    if (VAR_14 < 2)
        return 0;

    size_t VAR_18 = FUNC_6(VAR_11 + 1, VAR_12, VAR_14, VAR_17, &VAR_15);
    if (VAR_9.use_cas) {
        VAR_18 += sizeof(uint64_t);
    }

    unsigned int VAR_19 = FUNC_10(VAR_18);
    unsigned int VAR_20 = 0;
    if (VAR_19 == 0)
        return 0;




    if (VAR_18 > VAR_9.slab_chunk_size_max) {




        int VAR_21 = VAR_11 + 1 + VAR_15 + sizeof(item) + sizeof(item_chunk);
        if (VAR_9.use_cas) {
            VAR_21 += sizeof(uint64_t);
        }







        VAR_20 = FUNC_10(VAR_21);
        VAR_16 = FUNC_5(VAR_21, VAR_20);

        if (VAR_16 != ((void*)0))
            VAR_16->it_flags |= VAR_4;
    } else {
        VAR_16 = FUNC_5(VAR_18, VAR_19);
    }

    if (VAR_16 == ((void*)0)) {
        FUNC_8(&VAR_8[VAR_19]);
        VAR_7[VAR_19].outofmemory++;
        FUNC_9(&VAR_8[VAR_19]);
        return ((void*)0);
    }

    FUNC_4(VAR_16->it_flags == 0 || VAR_16->it_flags == VAR_4);



    VAR_16->next = VAR_16->prev = 0;




    if (VAR_9.temp_lru &&
            VAR_13 - VAR_6 <= VAR_9.temporary_ttl) {
        VAR_19 |= VAR_5;
    } else if (VAR_9.lru_segmented) {
        VAR_19 |= VAR_1;
    } else {

        VAR_19 |= VAR_0;
    }
    VAR_16->slabs_clsid = VAR_19;

    FUNC_0(VAR_16, '*');
    VAR_16->it_flags |= VAR_9.use_cas ? VAR_2 : 0;
    VAR_16->it_flags |= VAR_15 != 0 ? VAR_3 : 0;
    VAR_16->nkey = VAR_11;
    VAR_16->nbytes = VAR_14;
    FUNC_7(FUNC_1(VAR_16), VAR_10, VAR_11);
    VAR_16->exptime = VAR_13;
    if (VAR_15 > 0) {
        FUNC_7(FUNC_3(VAR_16), &VAR_12, sizeof(VAR_12));
    }


    if (VAR_16->it_flags & VAR_4) {
        item_chunk *VAR_22 = (item_chunk *) FUNC_2(VAR_16);

        VAR_22->next = 0;
        VAR_22->prev = 0;
        VAR_22->used = 0;
        VAR_22->size = 0;
        VAR_22->head = VAR_16;
        VAR_22->orig_clsid = VAR_20;
    }
    VAR_16->h_next = 0;

    return VAR_16;
}
