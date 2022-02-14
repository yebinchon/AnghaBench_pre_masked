
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int time_t ;
struct TYPE_4__ {long slot; long last_slot; int finished; } ;
struct rrddim_query_handle {TYPE_1__ slotted; TYPE_3__* rd; } ;
typedef int storage_number ;
struct TYPE_6__ {int * values; TYPE_2__* rrdset; } ;
struct TYPE_5__ {long entries; } ;
typedef TYPE_3__ RRDDIM ;


 scalar_t__ FUNC_0 (int) ;

__attribute__((used)) static storage_number FUNC_1(struct rrddim_query_handle *VAR_0, time_t *VAR_1) {
    RRDDIM *VAR_2 = VAR_0->rd;
    long VAR_3 = VAR_2->rrdset->entries;
    long VAR_4 = VAR_0->slotted.slot;

    (void)VAR_1;
    if (FUNC_0(VAR_0->slotted.slot == VAR_0->slotted.last_slot))
        VAR_0->slotted.finished = 1;
    storage_number VAR_5 = VAR_2->values[VAR_4++];

    if(FUNC_0(VAR_4 >= VAR_3)) VAR_4 = 0;
    VAR_0->slotted.slot = VAR_4;

    return VAR_5;
}
