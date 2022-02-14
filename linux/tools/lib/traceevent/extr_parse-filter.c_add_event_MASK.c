
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tep_event {int dummy; } ;
struct event_list {struct tep_event* event; struct event_list* next; } ;


 struct event_list* FUNC_0 (int) ;

__attribute__((used)) static int FUNC_1(struct event_list **VAR_0,
       struct tep_event *VAR_1)
{
 struct event_list *VAR_2;

 VAR_2 = FUNC_0(sizeof(*VAR_2));
 if (VAR_2 == ((void*)0))
  return -1;

 VAR_2->next = *VAR_0;
 *VAR_0 = VAR_2;
 VAR_2->event = VAR_1;
 return 0;
}
