
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
struct window_global {int evicted; int dirty; int excess_free; scalar_t__ age; int relaxed; scalar_t__ pool_high; scalar_t__ pool_low; } ;
struct window_data {int evicted; int dirty; int excess_free; scalar_t__ age; int relaxed; scalar_t__ pool_high; scalar_t__ pool_low; } ;
typedef int slab_stats_automove ;
struct TYPE_9__ {int window_size; scalar_t__ window_cur; scalar_t__ item_size; int* free_mem; double max_age_ratio; TYPE_3__* sam_after; TYPE_2__* sam_before; TYPE_3__* iam_after; TYPE_2__* iam_before; int * window_data; int window_global; } ;
typedef TYPE_1__ slab_automove ;
typedef int item_stats_automove ;
struct TYPE_11__ {scalar_t__ evicted; scalar_t__ outofmemory; scalar_t__ total_pages; int free_chunks; scalar_t__ age; int chunks_per_page; } ;
struct TYPE_10__ {scalar_t__ chunk_size; scalar_t__ evicted; scalar_t__ outofmemory; scalar_t__ total_pages; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (TYPE_3__*) ;
 struct window_global* FUNC_2 (TYPE_1__*,int) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_2__*,TYPE_3__*,int) ;
 int FUNC_6 (struct window_global*,int ,int) ;
 int FUNC_7 (int ,struct window_global*,int) ;
 int FUNC_8 (int *,struct window_global*,int) ;

void FUNC_9(void *VAR_4, int *VAR_5, int *VAR_6) {
    slab_automove *VAR_7 = (slab_automove *)VAR_4;
    int VAR_8;
    struct window_data VAR_9;
    int VAR_10 = -1;
    uint64_t VAR_11 = 0;
    int VAR_12 = -1;
    uint64_t VAR_13 = ~0;
    bool VAR_14 = 0;
    *VAR_5 = -1;
    *VAR_6 = -1;

    FUNC_3(VAR_7);
    struct window_global VAR_15;
    FUNC_6(&VAR_15, 0, sizeof(struct window_global));
    FUNC_7(VAR_7->window_global, &VAR_15, VAR_7->window_size);

    FUNC_0(VAR_7->iam_after);
    FUNC_1(VAR_7->sam_after);
    VAR_7->window_cur++;

    FUNC_4(VAR_7);


    for (VAR_8 = VAR_3; VAR_8 < VAR_0; VAR_8++) {
        bool VAR_16 = VAR_7->sam_before[VAR_8].chunk_size < VAR_7->item_size
            ? 1 : 0;
        bool VAR_17 = 0;
        struct window_data *VAR_18 = FUNC_2(VAR_7, VAR_8);

        FUNC_6(&VAR_9, 0, sizeof(struct window_data));
        int VAR_19 = VAR_8 * VAR_7->window_size;
        FUNC_8(&VAR_7->window_data[VAR_19], &VAR_9, VAR_7->window_size);
        FUNC_6(VAR_18, 0, sizeof(struct window_data));



        if (VAR_7->iam_after[VAR_8].evicted - VAR_7->iam_before[VAR_8].evicted > 0 ||
            VAR_7->iam_after[VAR_8].outofmemory - VAR_7->iam_before[VAR_8].outofmemory > 0) {
            VAR_18->evicted = 1;
            VAR_18->dirty = 1;
        }
        if (VAR_7->sam_after[VAR_8].total_pages - VAR_7->sam_before[VAR_8].total_pages > 0) {
            VAR_18->dirty = 1;
        }



        if (VAR_7->sam_after[VAR_8].free_chunks > VAR_7->free_mem[VAR_8]) {
            VAR_17 = 1;
        }


        if (VAR_7->sam_after[VAR_8].free_chunks > (VAR_7->free_mem[VAR_8] * 2) && VAR_7->free_mem[VAR_8] > 0) {
            VAR_18->excess_free = 1;
        }


        VAR_18->age = VAR_7->iam_after[VAR_8].age;


        uint64_t VAR_20 = VAR_9.age / VAR_7->window_size;




        if (VAR_7->sam_after[VAR_8].free_chunks > VAR_7->sam_after[VAR_8].chunks_per_page * VAR_1
                && VAR_9.dirty == 0) {
            if (VAR_16) {
                *VAR_5 = VAR_8;
                *VAR_6 = 0;
                VAR_14 = 1;
            } else if (!VAR_16 && VAR_9.excess_free >= VAR_7->window_size) {


                *VAR_5 = VAR_8;
                *VAR_6 = 0;
                VAR_14 = 1;
            }
        }

        if (!VAR_16) {

            if (VAR_20 > VAR_11
                    && VAR_7->sam_after[VAR_8].total_pages > VAR_2) {
                VAR_10 = VAR_8;
                VAR_11 = VAR_20;
            }



            if (VAR_20 < VAR_13 && VAR_7->sam_after[VAR_8].total_pages != 0
                    && VAR_9.excess_free < VAR_7->window_size
                    && !(VAR_9.relaxed && VAR_17)) {
                VAR_12 = VAR_8;
                VAR_13 = VAR_20;
            }
        }
    }

    FUNC_5(VAR_7->iam_before, VAR_7->iam_after,
            sizeof(item_stats_automove) * VAR_0);
    FUNC_5(VAR_7->sam_before, VAR_7->sam_after,
            sizeof(slab_stats_automove) * VAR_0);

    if (VAR_7->window_cur < VAR_7->window_size)
        return;

    if (VAR_15.pool_high >= VAR_7->window_size && !VAR_15.pool_low && VAR_12 != -1) {
        if (VAR_7->sam_after[VAR_12].free_chunks <= VAR_7->free_mem[VAR_12]) {
            *VAR_5 = 0;
            *VAR_6 = VAR_12;
        }
        struct window_data *VAR_21 = FUNC_2(VAR_7, VAR_12);



        VAR_21->relaxed = 1;
    } else if (!VAR_14 && VAR_15.pool_low && VAR_10 != -1) {
        *VAR_5 = VAR_10;
        *VAR_6 = 0;
    } else if (!VAR_14 && VAR_12 != -1 && VAR_10 != -1 && VAR_12 != VAR_10) {

        if (VAR_13 < ((double)VAR_11 * VAR_7->max_age_ratio)) {
            struct window_data *VAR_22 = FUNC_2(VAR_7, VAR_12);
            VAR_22->relaxed = 1;

            if (VAR_7->sam_after[VAR_12].free_chunks <= VAR_7->free_mem[VAR_12]) {
                *VAR_5 = 0;
                *VAR_6 = VAR_12;

            }
        }
    }
    return;
}
