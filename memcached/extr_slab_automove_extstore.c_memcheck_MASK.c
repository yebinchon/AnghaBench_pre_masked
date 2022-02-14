
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {unsigned int total_pages; unsigned int chunks_per_page; } ;
typedef TYPE_2__ slab_stats_automove ;
struct TYPE_7__ {scalar_t__ last_memcheck_run; unsigned int free_ratio; unsigned int* free_mem; TYPE_2__* sam_after; TYPE_1__* settings; scalar_t__ pool_filled_once; } ;
typedef TYPE_3__ slab_automove ;
struct TYPE_5__ {unsigned int* ext_free_memchunks; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 unsigned int VAR_2 ;
 scalar_t__ VAR_3 ;

__attribute__((used)) static void FUNC_0(slab_automove *VAR_4) {
    unsigned int VAR_5 = 0;
    if (VAR_3 < VAR_4->last_memcheck_run + VAR_1)
        return;
    VAR_4->last_memcheck_run = VAR_3;
    for (int VAR_6 = 1; VAR_6 < VAR_0; VAR_6++) {
        slab_stats_automove *VAR_7 = &VAR_4->sam_after[VAR_6];
        VAR_5 += VAR_7->total_pages;
        unsigned int VAR_8 = (VAR_7->total_pages * VAR_7->chunks_per_page)
            * VAR_4->free_ratio;
        if (VAR_7->chunks_per_page * VAR_2 > VAR_8)
            VAR_8 = VAR_7->chunks_per_page * VAR_2;
        VAR_4->free_mem[VAR_6] = VAR_8;
        if (VAR_4->settings->ext_free_memchunks[VAR_6] != VAR_8 && VAR_4->pool_filled_once) {
            VAR_4->settings->ext_free_memchunks[VAR_6] = VAR_8;
        }
    }

    VAR_5 += VAR_4->sam_after[0].total_pages;
    VAR_4->free_mem[0] = VAR_5 * VAR_4->free_ratio;
}
