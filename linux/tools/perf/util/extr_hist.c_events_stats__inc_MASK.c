
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u32 ;
struct events_stats {int * nr_events; } ;



void FUNC_0(struct events_stats *VAR_0, u32 VAR_1)
{
 ++VAR_0->nr_events[0];
 ++VAR_0->nr_events[VAR_1];
}
