
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int* updated_slots; int* slots; scalar_t__ updated_slots_count; scalar_t__ current_slot_index; scalar_t__ slots_count; } ;
typedef TYPE_1__ clusterNode ;
struct TYPE_4__ {int cluster_node_count; int is_updating_slots_mutex; int slots_last_update; int is_updating_slots; TYPE_1__** cluster_nodes; } ;


 int FUNC_0 (int ,int) ;
 int FUNC_1 (int ,int) ;
 TYPE_2__ VAR_0 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int*) ;

__attribute__((used)) static void FUNC_5() {
    FUNC_2(&VAR_0.is_updating_slots_mutex);
    FUNC_1(VAR_0.is_updating_slots, 1);
    int VAR_1;
    for (VAR_1 = 0; VAR_1 < VAR_0.cluster_node_count; VAR_1++) {
        clusterNode *VAR_2 = VAR_0.cluster_nodes[VAR_1];
        if (VAR_2->updated_slots != ((void*)0)) {
            int *VAR_3 = VAR_2->slots;
            VAR_2->slots = VAR_2->updated_slots;
            VAR_2->slots_count = VAR_2->updated_slots_count;
            VAR_2->current_slot_index = 0;
            VAR_2->updated_slots = ((void*)0);
            VAR_2->updated_slots_count = 0;
            FUNC_4(VAR_3);
        }
    }
    FUNC_1(VAR_0.is_updating_slots, 0);
    FUNC_0(VAR_0.slots_last_update, 1);
    FUNC_3(&VAR_0.is_updating_slots_mutex);
}
