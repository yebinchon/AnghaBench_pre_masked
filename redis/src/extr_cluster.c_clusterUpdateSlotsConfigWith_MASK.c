
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
typedef int uint16_t ;
struct TYPE_10__ {scalar_t__ configEpoch; scalar_t__ numslots; int name; struct TYPE_10__* slaveof; } ;
typedef TYPE_2__ clusterNode ;
struct TYPE_11__ {int cluster_module_flags; TYPE_1__* cluster; } ;
struct TYPE_9__ {TYPE_2__** slots; scalar_t__* importing_slots_from; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (unsigned char*,int) ;
 int FUNC_1 (TYPE_2__*,int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (TYPE_2__*) ;
 scalar_t__ FUNC_5 (int) ;
 int FUNC_6 (int) ;
 TYPE_2__* VAR_6 ;
 scalar_t__ FUNC_7 (TYPE_2__*) ;
 TYPE_3__ VAR_7 ;
 int FUNC_8 (int ,char*,...) ;

void FUNC_9(clusterNode *VAR_8, uint64_t VAR_9, unsigned char *VAR_10) {
    int VAR_11;
    clusterNode *VAR_12, *VAR_13 = ((void*)0);







    uint16_t VAR_14[VAR_1];
    int VAR_15 = 0;




    VAR_12 = FUNC_7(VAR_6) ? VAR_6 : VAR_6->slaveof;

    if (VAR_8 == VAR_6) {
        FUNC_8(VAR_5,"Discarding UPDATE message about myself.");
        return;
    }

    for (VAR_11 = 0; VAR_11 < VAR_1; VAR_11++) {
        if (FUNC_0(VAR_10,VAR_11)) {

            if (VAR_7.cluster->slots[VAR_11] == VAR_8) continue;





            if (VAR_7.cluster->importing_slots_from[VAR_11]) continue;





            if (VAR_7.cluster->slots[VAR_11] == ((void*)0) ||
                VAR_7.cluster->slots[VAR_11]->configEpoch < VAR_9)
            {


                if (VAR_7.cluster->slots[VAR_11] == VAR_6 &&
                    FUNC_5(VAR_11) &&
                    VAR_8 != VAR_6)
                {
                    VAR_14[VAR_15] = VAR_11;
                    VAR_15++;
                }

                if (VAR_7.cluster->slots[VAR_11] == VAR_12)
                    VAR_13 = VAR_8;
                FUNC_2(VAR_11);
                FUNC_1(VAR_8,VAR_11);
                FUNC_3(VAR_3|
                                     VAR_4|
                                     VAR_2);
            }
        }
    }




    if (VAR_7.cluster_module_flags & VAR_0)
        return;
    if (VAR_13 && VAR_12->numslots == 0) {
        FUNC_8(VAR_5,
            "Configuration change detected. Reconfiguring myself "
            "as a replica of %.40s", VAR_8->name);
        FUNC_4(VAR_8);
        FUNC_3(VAR_3|
                             VAR_4|
                             VAR_2);
    } else if (VAR_15) {







        for (VAR_11 = 0; VAR_11 < VAR_15; VAR_11++)
            FUNC_6(VAR_14[VAR_11]);
    }
}
