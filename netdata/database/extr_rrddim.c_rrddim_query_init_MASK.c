
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef void* time_t ;
struct TYPE_4__ {scalar_t__ finished; void* last_slot; void* slot; } ;
struct rrddim_query_handle {TYPE_1__ slotted; void* end_time; void* start_time; TYPE_2__* rd; } ;
struct TYPE_5__ {int rrdset; } ;
typedef TYPE_2__ RRDDIM ;


 void* FUNC_0 (int ,void*) ;

__attribute__((used)) static void FUNC_1(RRDDIM *VAR_0, struct rrddim_query_handle *VAR_1, time_t VAR_2, time_t VAR_3) {
    VAR_1->rd = VAR_0;
    VAR_1->start_time = VAR_2;
    VAR_1->end_time = VAR_3;
    VAR_1->slotted.slot = FUNC_0(VAR_0->rrdset, VAR_2);
    VAR_1->slotted.last_slot = FUNC_0(VAR_0->rrdset, VAR_3);
    VAR_1->slotted.finished = 0;
}
