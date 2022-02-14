
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tep_handle {int nr_events; struct tep_event** events; } ;
struct tep_event {scalar_t__ id; struct tep_handle* tep; } ;
typedef int event ;


 int FUNC_0 (struct tep_event**,struct tep_event**,int) ;
 struct tep_event** FUNC_1 (struct tep_event**,int) ;

__attribute__((used)) static int FUNC_2(struct tep_handle *VAR_0, struct tep_event *VAR_1)
{
 int VAR_2;
 struct tep_event **VAR_3 = FUNC_1(VAR_0->events, sizeof(VAR_1) *
         (VAR_0->nr_events + 1));
 if (!VAR_3)
  return -1;

 VAR_0->events = VAR_3;

 for (VAR_2 = 0; VAR_2 < VAR_0->nr_events; VAR_2++) {
  if (VAR_0->events[VAR_2]->id > VAR_1->id)
   break;
 }
 if (VAR_2 < VAR_0->nr_events)
  FUNC_0(&VAR_0->events[VAR_2 + 1],
   &VAR_0->events[VAR_2],
   sizeof(VAR_1) * (VAR_0->nr_events - VAR_2));

 VAR_0->events[VAR_2] = VAR_1;
 VAR_0->nr_events++;

 VAR_1->tep = VAR_0;

 return 0;
}
