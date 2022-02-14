
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
typedef size_t u16 ;
struct cake_sched_data {TYPE_1__* tins; struct cake_heap_entry* overflow_heap; } ;
struct cake_heap_entry {size_t t; size_t b; } ;
struct TYPE_2__ {int * backlogs; } ;



__attribute__((used)) static u32 FUNC_0(const struct cake_sched_data *VAR_0, u16 VAR_1)
{
 struct cake_heap_entry VAR_2 = VAR_0->overflow_heap[VAR_1];

 return VAR_0->tins[VAR_2.t].backlogs[VAR_2.b];
}
