
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char* ip; int port; int * redis_config; scalar_t__ importing_count; scalar_t__ migrating_count; int * importing; int * migrating; scalar_t__ updated_slots_count; int * updated_slots; scalar_t__ current_slot_index; scalar_t__ slots_count; void* slots; scalar_t__ replicas_count; int * replicate; scalar_t__ flags; int * name; } ;
typedef TYPE_1__ clusterNode ;


 int VAR_0 ;
 void* FUNC_0 (int) ;

__attribute__((used)) static clusterNode *FUNC_1(char *VAR_1, int VAR_2) {
    clusterNode *VAR_3 = FUNC_0(sizeof(*VAR_3));
    if (!VAR_3) return ((void*)0);
    VAR_3->ip = VAR_1;
    VAR_3->port = VAR_2;
    VAR_3->name = ((void*)0);
    VAR_3->flags = 0;
    VAR_3->replicate = ((void*)0);
    VAR_3->replicas_count = 0;
    VAR_3->slots = FUNC_0(VAR_0 * sizeof(int));
    VAR_3->slots_count = 0;
    VAR_3->current_slot_index = 0;
    VAR_3->updated_slots = ((void*)0);
    VAR_3->updated_slots_count = 0;
    VAR_3->migrating = ((void*)0);
    VAR_3->importing = ((void*)0);
    VAR_3->migrating_count = 0;
    VAR_3->importing_count = 0;
    VAR_3->redis_config = ((void*)0);
    return VAR_3;
}
