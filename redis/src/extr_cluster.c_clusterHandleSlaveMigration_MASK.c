
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int dictIterator ;
typedef int dictEntry ;
struct TYPE_13__ {int numslaves; int flags; scalar_t__ numslots; scalar_t__ orphaned_time; int name; struct TYPE_13__** slaves; struct TYPE_13__* slaveof; } ;
typedef TYPE_2__ clusterNode ;
struct TYPE_14__ {int cluster_migration_barrier; int cluster_module_flags; TYPE_1__* cluster; } ;
struct TYPE_12__ {scalar_t__ state; int nodes; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*) ;
 int * FUNC_2 (int ) ;
 TYPE_2__* FUNC_3 (int *) ;
 int * FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int ,int ,int ) ;
 scalar_t__ FUNC_7 () ;
 TYPE_2__* VAR_6 ;
 scalar_t__ FUNC_8 (TYPE_2__*) ;
 scalar_t__ FUNC_9 (TYPE_2__*) ;
 scalar_t__ FUNC_10 (TYPE_2__*) ;
 int FUNC_11 (TYPE_2__*) ;
 TYPE_3__ VAR_7 ;
 int FUNC_12 (int ,char*,int ) ;

void FUNC_13(int VAR_8) {
    int VAR_9, VAR_10 = 0;
    clusterNode *VAR_11 = VAR_6->slaveof, *VAR_12 = ((void*)0), *VAR_13 = ((void*)0);
    dictIterator *VAR_14;
    dictEntry *VAR_15;


    if (VAR_7.cluster->state != VAR_3) return;



    if (VAR_11 == ((void*)0)) return;
    for (VAR_9 = 0; VAR_9 < VAR_11->numslaves; VAR_9++)
        if (!FUNC_8(VAR_11->slaves[VAR_9]) &&
            !FUNC_11(VAR_11->slaves[VAR_9])) VAR_10++;
    if (VAR_10 <= VAR_7.cluster_migration_barrier) return;
    VAR_13 = VAR_6;
    VAR_14 = FUNC_2(VAR_7.cluster->nodes);
    while((VAR_15 = FUNC_4(VAR_14)) != ((void*)0)) {
        clusterNode *VAR_16 = FUNC_3(VAR_15);
        int VAR_17 = 0, VAR_18 = 1;





        if (FUNC_10(VAR_16) || FUNC_8(VAR_16)) VAR_18 = 0;
        if (!(VAR_16->flags & VAR_2)) VAR_18 = 0;


        if (FUNC_9(VAR_16)) VAR_17 = FUNC_0(VAR_16);
        if (VAR_17 > 0) VAR_18 = 0;

        if (VAR_18) {
            if (!VAR_12 && VAR_16->numslots > 0) VAR_12 = VAR_16;



            if (!VAR_16->orphaned_time) VAR_16->orphaned_time = FUNC_7();
        } else {
            VAR_16->orphaned_time = 0;
        }




        if (VAR_17 == VAR_8) {
            for (VAR_9 = 0; VAR_9 < VAR_16->numslaves; VAR_9++) {
                if (FUNC_6(VAR_16->slaves[VAR_9]->name,
                           VAR_13->name,
                           VAR_1) < 0)
                {
                    VAR_13 = VAR_16->slaves[VAR_9];
                }
            }
        }
    }
    FUNC_5(VAR_14);






    if (VAR_12 && VAR_13 == VAR_6 &&
        (FUNC_7()-VAR_12->orphaned_time) > VAR_4 &&
       !(VAR_7.cluster_module_flags & VAR_0))
    {
        FUNC_12(VAR_5,"Migrating to orphaned master %.40s",
            VAR_12->name);
        FUNC_1(VAR_12);
    }
}
