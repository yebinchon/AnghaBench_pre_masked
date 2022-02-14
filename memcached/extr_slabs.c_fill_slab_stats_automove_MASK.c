
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int size; int slabs; int sl_curr; int perslab; } ;
typedef TYPE_1__ slabclass_t ;
struct TYPE_6__ {int chunk_size; int total_pages; int free_chunks; int chunks_per_page; } ;
typedef TYPE_2__ slab_stats_automove ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 TYPE_1__* VAR_1 ;
 int VAR_2 ;

void FUNC_2(slab_stats_automove *VAR_3) {
    int VAR_4;
    FUNC_0(&VAR_2);
    for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++) {
        slabclass_t *VAR_5 = &VAR_1[VAR_4];
        slab_stats_automove *VAR_6 = &VAR_3[VAR_4];
        VAR_6->chunks_per_page = VAR_5->perslab;
        VAR_6->free_chunks = VAR_5->sl_curr;
        VAR_6->total_pages = VAR_5->slabs;
        VAR_6->chunk_size = VAR_5->size;
    }
    FUNC_1(&VAR_2);
}
