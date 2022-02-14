
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
struct window_data {int evicted; int dirty; scalar_t__ age; } ;
typedef int slab_stats_automove ;
struct TYPE_6__ {int window_cur; int window_size; double max_age_ratio; TYPE_3__* sam_after; TYPE_2__* sam_before; TYPE_3__* iam_after; TYPE_2__* iam_before; struct window_data* window_data; } ;
typedef TYPE_1__ slab_automove ;
typedef int item_stats_automove ;
struct TYPE_8__ {scalar_t__ evicted; scalar_t__ outofmemory; scalar_t__ total_pages; scalar_t__ age; int free_chunks; int chunks_per_page; } ;
struct TYPE_7__ {scalar_t__ evicted; scalar_t__ outofmemory; scalar_t__ total_pages; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (TYPE_2__*,TYPE_3__*,int) ;
 int FUNC_3 (struct window_data*,int ,int) ;
 int FUNC_4 (struct window_data*,struct window_data*,int) ;

void FUNC_5(void *VAR_4, int *VAR_5, int *VAR_6) {
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


    FUNC_0(VAR_7->iam_after);
    FUNC_1(VAR_7->sam_after);
    VAR_7->window_cur++;


    for (VAR_8 = VAR_3; VAR_8 < VAR_0; VAR_8++) {
        int VAR_15 = VAR_8 * VAR_7->window_size;
        struct window_data *VAR_16 = &VAR_7->window_data[VAR_15 + (VAR_7->window_cur % VAR_7->window_size)];
        FUNC_3(VAR_16, 0, sizeof(struct window_data));

        FUNC_3(&VAR_9, 0, sizeof(struct window_data));
        FUNC_4(&VAR_7->window_data[VAR_15], &VAR_9, VAR_7->window_size);



        if (VAR_7->iam_after[VAR_8].evicted - VAR_7->iam_before[VAR_8].evicted > 0 ||
            VAR_7->iam_after[VAR_8].outofmemory - VAR_7->iam_before[VAR_8].outofmemory > 0) {
            VAR_16->evicted = 1;
            VAR_16->dirty = 1;
        }
        if (VAR_7->sam_after[VAR_8].total_pages - VAR_7->sam_before[VAR_8].total_pages > 0) {
            VAR_16->dirty = 1;
        }


        VAR_16->age = VAR_7->iam_after[VAR_8].age;


        uint64_t VAR_17 = VAR_9.age / VAR_7->window_size;


        if (VAR_7->sam_after[VAR_8].free_chunks > VAR_7->sam_after[VAR_8].chunks_per_page * VAR_1) {
            if (VAR_9.dirty == 0) {
                *VAR_5 = VAR_8;
                *VAR_6 = 0;
                break;
            }
        }


        if (VAR_17 > VAR_11 && VAR_7->sam_after[VAR_8].total_pages > VAR_2) {
            VAR_10 = VAR_8;
            VAR_11 = VAR_17;
        }



        if (VAR_17 < VAR_13 && VAR_9.evicted > VAR_7->window_size / 2) {
            VAR_12 = VAR_8;
            VAR_13 = VAR_17;
            VAR_14 = VAR_16->evicted ? 1 : 0;
        }
    }

    FUNC_2(VAR_7->iam_before, VAR_7->iam_after,
            sizeof(item_stats_automove) * VAR_0);
    FUNC_2(VAR_7->sam_before, VAR_7->sam_after,
            sizeof(slab_stats_automove) * VAR_0);


    if (VAR_12 != -1 && VAR_10 != -1 && VAR_7->window_cur > VAR_7->window_size) {
        if (VAR_13 < ((double)VAR_11 * VAR_7->max_age_ratio) && VAR_14) {
            *VAR_5 = VAR_10;
            *VAR_6 = VAR_12;
        }
    }
    return;
}
