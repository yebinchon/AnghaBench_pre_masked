
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_6__ ;
typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct TYPE_7__ {int size; int slabs; char** slab_list; } ;
typedef TYPE_1__ slabclass_t ;
typedef char item ;
struct TYPE_11__ {int verbose; scalar_t__ slab_page_size; } ;
struct TYPE_10__ {size_t s_clsid; size_t d_clsid; char* slab_pos; char* slab_start; char* slab_end; int completed; scalar_t__ busy_deletes; scalar_t__ chunk_rescues; scalar_t__ rescues; scalar_t__ inline_reclaim; scalar_t__ evictions_nomem; scalar_t__ done; scalar_t__ busy_loops; } ;
struct TYPE_9__ {int slab_reassign_busy_deletes; int slab_reassign_chunk_rescues; int slab_reassign_inline_reclaim; int slab_reassign_evictions_nomem; int slab_reassign_rescues; int slabs_moved; } ;
struct TYPE_8__ {int slab_reassign_running; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 size_t VAR_2 ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (int) ;
 int FUNC_4 (int ,char*) ;
 int FUNC_5 (int ) ;
 int VAR_3 ;
 scalar_t__ FUNC_6 (int ,char*,int) ;
 int FUNC_7 () ;
 int FUNC_8 (char*,int ,int) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 TYPE_6__ VAR_4 ;
 TYPE_5__ VAR_5 ;
 scalar_t__ VAR_6 ;
 TYPE_1__* VAR_7 ;
 int VAR_8 ;
 int FUNC_11 (char*,size_t) ;
 TYPE_3__ VAR_9 ;
 TYPE_2__ VAR_10 ;
 int VAR_11 ;

__attribute__((used)) static void FUNC_12(void) {
    slabclass_t *VAR_12;
    slabclass_t *VAR_13;
    int VAR_14;
    uint32_t VAR_15;
    uint32_t VAR_16;
    uint32_t VAR_17;
    uint32_t VAR_18;
    uint32_t VAR_19;

    FUNC_9(&VAR_8);

    VAR_12 = &VAR_7[VAR_5.s_clsid];
    VAR_13 = &VAR_7[VAR_5.d_clsid];
    VAR_12->slabs--;
    for (VAR_14 = 0; VAR_14 < VAR_12->slabs; VAR_14++) {
        VAR_12->slab_list[VAR_14] = VAR_12->slab_list[VAR_14+1];
    }

    VAR_13->slab_list[VAR_13->slabs++] = VAR_5.slab_start;

    if (VAR_5.d_clsid > VAR_2) {
        FUNC_8(VAR_5.slab_start, 0, (size_t)VAR_4.slab_page_size);
        FUNC_11(VAR_5.slab_start,
            VAR_5.d_clsid);
    } else if (VAR_5.d_clsid == VAR_2) {

        FUNC_8(VAR_5.slab_start, 0, sizeof(item));

        VAR_3 = 0;
        FUNC_7();
    }

    VAR_5.busy_loops = 0;
    VAR_5.done = 0;
    VAR_5.s_clsid = 0;
    VAR_5.d_clsid = 0;
    VAR_5.slab_start = ((void*)0);
    VAR_5.slab_end = ((void*)0);
    VAR_5.slab_pos = ((void*)0);
    VAR_16 = VAR_5.evictions_nomem;
    VAR_17 = VAR_5.inline_reclaim;
    VAR_15 = VAR_5.rescues;
    VAR_18 = VAR_5.chunk_rescues;
    VAR_19 = VAR_5.busy_deletes;
    VAR_5.evictions_nomem = 0;
    VAR_5.inline_reclaim = 0;
    VAR_5.rescues = 0;
    VAR_5.chunk_rescues = 0;
    VAR_5.busy_deletes = 0;

    VAR_6 = 0;

    FUNC_5(VAR_5.completed);
    FUNC_10(&VAR_8);

    FUNC_1();
    VAR_9.slabs_moved++;
    VAR_9.slab_reassign_rescues += VAR_15;
    VAR_9.slab_reassign_evictions_nomem += VAR_16;
    VAR_9.slab_reassign_inline_reclaim += VAR_17;
    VAR_9.slab_reassign_chunk_rescues += VAR_18;
    VAR_9.slab_reassign_busy_deletes += VAR_19;
    VAR_10.slab_reassign_running = 0;
    FUNC_2();

    if (VAR_4.verbose > 1) {
        FUNC_4(VAR_11, "finished a slab move\n");
    }
}
