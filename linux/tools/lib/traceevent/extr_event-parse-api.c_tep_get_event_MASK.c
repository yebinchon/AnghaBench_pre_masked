
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tep_handle {int nr_events; struct tep_event** events; } ;
struct tep_event {int dummy; } ;



struct tep_event *FUNC_0(struct tep_handle *VAR_0, int VAR_1)
{
 if (VAR_0 && VAR_0->events && VAR_1 < VAR_0->nr_events)
  return VAR_0->events[VAR_1];

 return ((void*)0);
}
