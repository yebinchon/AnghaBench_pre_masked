
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int cluster_module_flags; int dbnum; TYPE_2__* cluster; TYPE_1__* db; } ;
struct TYPE_5__ {int ** slots; int ** importing_slots_from; } ;
struct TYPE_4__ {int dict; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 scalar_t__ FUNC_3 (int ) ;
 int * VAR_5 ;
 scalar_t__ FUNC_4 (int *) ;
 TYPE_3__ VAR_6 ;
 int FUNC_5 (int ,char*,int) ;

int FUNC_6(void) {
    int VAR_7;
    int VAR_8 = 0;



    if (VAR_6.cluster_module_flags & VAR_0)
        return VAR_3;



    if (FUNC_4(VAR_5)) return VAR_3;


    for (VAR_7 = 1; VAR_7 < VAR_6.dbnum; VAR_7++) {
        if (FUNC_3(VAR_6.db[VAR_7].dict)) return VAR_2;
    }



    for (VAR_7 = 0; VAR_7 < VAR_1; VAR_7++) {
        if (!FUNC_2(VAR_7)) continue;



        if (VAR_6.cluster->slots[VAR_7] == VAR_5 ||
            VAR_6.cluster->importing_slots_from[VAR_7] != ((void*)0)) continue;





        VAR_8++;

        if (VAR_6.cluster->slots[VAR_7] == ((void*)0)) {
            FUNC_5(VAR_4, "I have keys for unassigned slot %d. "
                                    "Taking responsibility for it.",VAR_7);
            FUNC_0(VAR_5,VAR_7);
        } else {
            FUNC_5(VAR_4, "I have keys for slot %d, but the slot is "
                                    "assigned to another node. "
                                    "Setting it to importing state.",VAR_7);
            VAR_6.cluster->importing_slots_from[VAR_7] = VAR_6.cluster->slots[VAR_7];
        }
    }
    if (VAR_8) FUNC_1(1);
    return VAR_3;
}
