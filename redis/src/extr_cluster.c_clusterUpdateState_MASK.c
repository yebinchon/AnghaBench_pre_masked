
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef scalar_t__ mstime_t ;
typedef int dictIterator ;
typedef int dictEntry ;
struct TYPE_10__ {int flags; scalar_t__ numslots; } ;
typedef TYPE_3__ clusterNode ;
struct TYPE_11__ {scalar_t__ cluster_node_timeout; TYPE_2__* cluster; scalar_t__ cluster_require_full_coverage; } ;
struct TYPE_9__ {int state; int size; int nodes; TYPE_1__** slots; int todo_before_sleep; } ;
struct TYPE_8__ {int flags; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int * FUNC_0 (int ) ;
 TYPE_3__* FUNC_1 (int *) ;
 int * FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 () ;
 TYPE_3__* VAR_10 ;
 scalar_t__ FUNC_5 (TYPE_3__*) ;
 TYPE_4__ VAR_11 ;
 int FUNC_6 (int ,char*,char*) ;

void FUNC_7(void) {
    int VAR_12, VAR_13;
    int VAR_14 = 0;
    static mstime_t VAR_15;
    static mstime_t VAR_16 = 0;

    VAR_11.cluster->todo_before_sleep &= ~VAR_7;







    if (VAR_16 == 0) VAR_16 = FUNC_4();
    if (FUNC_5(VAR_10) &&
        VAR_11.cluster->state == VAR_0 &&
        FUNC_4() - VAR_16 < VAR_8) return;



    VAR_13 = VAR_5;


    if (VAR_11.cluster_require_full_coverage) {
        for (VAR_12 = 0; VAR_12 < VAR_6; VAR_12++) {
            if (VAR_11.cluster->slots[VAR_12] == ((void*)0) ||
                VAR_11.cluster->slots[VAR_12]->flags & (VAR_3))
            {
                VAR_13 = VAR_0;
                break;
            }
        }
    }






    {
        dictIterator *VAR_17;
        dictEntry *VAR_18;

        VAR_11.cluster->size = 0;
        VAR_17 = FUNC_0(VAR_11.cluster->nodes);
        while((VAR_18 = FUNC_2(VAR_17)) != ((void*)0)) {
            clusterNode *VAR_19 = FUNC_1(VAR_18);

            if (FUNC_5(VAR_19) && VAR_19->numslots) {
                VAR_11.cluster->size++;
                if ((VAR_19->flags & (VAR_3|VAR_4)) == 0)
                    VAR_14++;
            }
        }
        FUNC_3(VAR_17);
    }



    {
        int VAR_20 = (VAR_11.cluster->size / 2) + 1;

        if (VAR_14 < VAR_20) {
            VAR_13 = VAR_0;
            VAR_15 = FUNC_4();
        }
    }


    if (VAR_13 != VAR_11.cluster->state) {
        mstime_t VAR_21 = VAR_11.cluster_node_timeout;





        if (VAR_21 > VAR_1)
            VAR_21 = VAR_1;
        if (VAR_21 < VAR_2)
            VAR_21 = VAR_2;

        if (VAR_13 == VAR_5 &&
            FUNC_5(VAR_10) &&
            FUNC_4() - VAR_15 < VAR_21)
        {
            return;
        }


        FUNC_6(VAR_9,"Cluster state changed: %s",
            VAR_13 == VAR_5 ? "ok" : "fail");
        VAR_11.cluster->state = VAR_13;
    }
}
