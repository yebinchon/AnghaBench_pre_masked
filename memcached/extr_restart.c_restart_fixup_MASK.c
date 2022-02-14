
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint64_t ;
struct timeval {scalar_t__ tv_usec; scalar_t__ tv_sec; } ;
typedef scalar_t__ mc_ptr_t ;
struct TYPE_6__ {TYPE_2__* head; struct TYPE_6__* prev; struct TYPE_6__* next; int orig_clsid; } ;
typedef TYPE_1__ item_chunk ;
struct TYPE_7__ {int it_flags; struct TYPE_7__* prev; struct TYPE_7__* next; } ;
typedef TYPE_2__ item ;
struct TYPE_8__ {unsigned int slab_page_size; scalar_t__ verbose; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (int ,char*,int,int) ;
 int FUNC_4 (struct timeval*,int *) ;
 int VAR_3 ;
 TYPE_3__ VAR_4 ;
 int VAR_5 ;
 int FUNC_5 (char*,int) ;
 int FUNC_6 (int ) ;
 int VAR_6 ;

unsigned int FUNC_7(void *VAR_7) {
    struct timeval VAR_8;
    uint64_t VAR_9 = 0;
    const unsigned int VAR_10 = VAR_4.slab_page_size;
    unsigned int VAR_11 = VAR_10;

    FUNC_4(&VAR_8, ((void*)0));
    if (VAR_4.verbose > 0) {
        FUNC_3(VAR_6, "[restart] original memory base: [%d] new base: [%d]\n", VAR_7, VAR_3);
        FUNC_3(VAR_6, "[restart] recovery start [%d.%d]\n", (int)VAR_8.tv_sec, (int)VAR_8.tv_usec);
    }


    while (VAR_9 < VAR_5) {

        item *VAR_12 = (item *)((char *)VAR_3 + VAR_9);

        int VAR_13 = FUNC_5((char *)VAR_3 + VAR_9,
                VAR_9 % VAR_4.slab_page_size);


        if (VAR_13 == -1) {
            FUNC_1(VAR_11 % VAR_10 == 0);
            FUNC_1(VAR_11 == VAR_10);
            VAR_9 += VAR_11;
            VAR_11 = VAR_10;
            continue;
        }

        if (VAR_12->it_flags & VAR_2) {

            if (VAR_12->next) {
                VAR_12->next = (item *)((mc_ptr_t)VAR_12->next - (mc_ptr_t)VAR_7);
                VAR_12->next = (item *)((mc_ptr_t)VAR_12->next + (mc_ptr_t)VAR_3);
            }
            if (VAR_12->prev) {
                VAR_12->prev = (item *)((mc_ptr_t)VAR_12->prev - (mc_ptr_t)VAR_7);
                VAR_12->prev = (item *)((mc_ptr_t)VAR_12->prev + (mc_ptr_t)VAR_3);
            }


            FUNC_2(VAR_12);
        }

        if (VAR_12->it_flags & (VAR_1|VAR_0)) {
            item_chunk *VAR_14;
            if (VAR_12->it_flags & VAR_1) {
                VAR_14 = (item_chunk *) FUNC_0(VAR_12);




                VAR_13 = FUNC_6(VAR_14->orig_clsid);

            } else {

                VAR_14 = (item_chunk *) VAR_12;
            }
            if (VAR_14->next) {
                VAR_14->next = (item_chunk *)((mc_ptr_t)VAR_14->next - (mc_ptr_t)VAR_7);
                VAR_14->next = (item_chunk *)((mc_ptr_t)VAR_14->next + (mc_ptr_t)VAR_3);
            }
            if (VAR_14->prev) {
                VAR_14->prev = (item_chunk *)((mc_ptr_t)VAR_14->prev - (mc_ptr_t)VAR_7);
                VAR_14->prev = (item_chunk *)((mc_ptr_t)VAR_14->prev + (mc_ptr_t)VAR_3);
            }
            if (VAR_14->head) {
                VAR_14->head = (item *)((mc_ptr_t)VAR_14->head - (mc_ptr_t)VAR_7);
                VAR_14->head = (item *)((mc_ptr_t)VAR_14->head + (mc_ptr_t)VAR_3);
            }
        }


        VAR_9 += VAR_13;
        VAR_11 -= VAR_13;
        if (VAR_13 > VAR_11) {

            VAR_9 += VAR_11;
            VAR_11 = VAR_4.slab_page_size;
        }

    }

    if (VAR_4.verbose > 0) {
        FUNC_4(&VAR_8, ((void*)0));
        FUNC_3(VAR_6, "[restart] recovery end [%d.%d]\n", (int)VAR_8.tv_sec, (int)VAR_8.tv_usec);
    }

    return 0;
}
