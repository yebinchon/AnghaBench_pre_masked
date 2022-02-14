
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ordered_events {int nr_events; int cache; } ;
struct ordered_event {int * event; int list; } ;


 int FUNC_0 (struct ordered_events*,int *) ;
 int FUNC_1 (int *,int *) ;

void FUNC_2(struct ordered_events *VAR_0, struct ordered_event *VAR_1)
{
 FUNC_1(&VAR_1->list, &VAR_0->cache);
 VAR_0->nr_events--;
 FUNC_0(VAR_0, VAR_1->event);
 VAR_1->event = ((void*)0);
}
