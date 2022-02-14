
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tep_handle {int last_type; int nr_events; struct tep_event** sort_events; } ;
struct tep_event {int dummy; } ;
typedef enum tep_event_sort_type { ____Placeholder_tep_event_sort_type } tep_event_sort_type ;


 int VAR_0 ;
 struct tep_event** FUNC_0 (struct tep_handle*) ;
 int FUNC_1 (struct tep_event**,int ,int) ;

struct tep_event **FUNC_2(struct tep_handle *VAR_1,
       enum tep_event_sort_type VAR_2)
{
 struct tep_event **VAR_3;

 if (!VAR_1)
  return ((void*)0);

 VAR_3 = VAR_1->sort_events;
 if (VAR_3 && VAR_1->last_type == VAR_2)
  return VAR_3;

 if (!VAR_3) {
  VAR_3 = FUNC_0(VAR_1);
  if (!VAR_3)
   return ((void*)0);

  VAR_1->sort_events = VAR_3;


  if (VAR_2 == VAR_0) {
   VAR_1->last_type = VAR_2;
   return VAR_3;
  }
 }

 FUNC_1(VAR_3, VAR_1->nr_events, VAR_2);
 VAR_1->last_type = VAR_2;

 return VAR_3;
}
