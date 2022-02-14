
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t uint32_t ;
struct TYPE_4__ {size_t max_slots; int* seq_nums; int lock; int cond; scalar_t__ target_delay; scalar_t__ num_used; scalar_t__ highest_used; scalar_t__* used_slots; } ;
typedef TYPE_1__ nfs41_slot_table ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 size_t VAR_0 ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_4(nfs41_slot_table *VAR_1)
{
    uint32_t VAR_2;
    FUNC_0(&VAR_1->lock);
    VAR_1->max_slots = VAR_0;
    for (VAR_2 = 0; VAR_2 < VAR_0; VAR_2++) {
        VAR_1->seq_nums[VAR_2] = 1;
        VAR_1->used_slots[VAR_2] = 0;
    }
    VAR_1->highest_used = VAR_1->num_used = 0;
    VAR_1->target_delay = 0;


    if (FUNC_3(VAR_1))
        FUNC_2(&VAR_1->cond);
    FUNC_1(&VAR_1->lock);
}
