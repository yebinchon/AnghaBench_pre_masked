
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_6__ {int slabs; int size; int perslab; scalar_t__* slab_list; } ;
typedef TYPE_1__ slabclass_t ;
struct TYPE_9__ {int verbose; } ;
struct TYPE_8__ {scalar_t__ s_clsid; scalar_t__ d_clsid; char* slab_end; int done; int * completed; scalar_t__ slab_start; scalar_t__ slab_pos; } ;
struct TYPE_7__ {int slab_reassign_running; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 scalar_t__ FUNC_2 (int,int) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (scalar_t__) ;
 scalar_t__ VAR_1 ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 TYPE_5__ VAR_2 ;
 TYPE_4__ VAR_3 ;
 int VAR_4 ;
 TYPE_1__* VAR_5 ;
 int VAR_6 ;
 TYPE_2__ VAR_7 ;
 int VAR_8 ;

__attribute__((used)) static int FUNC_7(void) {
    slabclass_t *VAR_9;
    int VAR_10 = 0;

    FUNC_5(&VAR_6);

    if (VAR_3.s_clsid < VAR_0 ||
        VAR_3.s_clsid > VAR_1 ||
        VAR_3.d_clsid < VAR_0 ||
        VAR_3.d_clsid > VAR_1 ||
        VAR_3.s_clsid == VAR_3.d_clsid)
        VAR_10 = -2;

    VAR_9 = &VAR_5[VAR_3.s_clsid];

    if (!FUNC_4(VAR_3.d_clsid)) {
        VAR_10 = -1;
    }

    if (VAR_9->slabs < 2)
        VAR_10 = -3;

    if (VAR_10 != 0) {
        FUNC_6(&VAR_6);
        return VAR_10;
    }




    VAR_3.slab_start = VAR_9->slab_list[0];
    VAR_3.slab_end = (char *)VAR_3.slab_start +
        (VAR_9->size * VAR_9->perslab);
    VAR_3.slab_pos = VAR_3.slab_start;
    VAR_3.done = 0;

    if (VAR_3.s_clsid == VAR_0) {
        VAR_3.done = 1;
    }


    VAR_3.completed = (uint8_t*)FUNC_2(VAR_9->perslab,sizeof(uint8_t));

    VAR_4 = 2;

    if (VAR_2.verbose > 1) {
        FUNC_3(VAR_8, "Started a slab rebalance\n");
    }

    FUNC_6(&VAR_6);

    FUNC_0();
    VAR_7.slab_reassign_running = 1;
    FUNC_1();

    return 0;
}
