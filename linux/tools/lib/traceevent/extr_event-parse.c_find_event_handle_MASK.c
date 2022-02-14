
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tep_handle {struct event_handler* handlers; } ;
struct tep_event {int context; int handler; int name; int system; int id; } ;
struct event_handler {struct event_handler* next; int context; int func; int event_name; int sys_name; int id; } ;


 scalar_t__ FUNC_0 (struct tep_event*,int ,int ,int ) ;
 int FUNC_1 (struct event_handler*) ;
 int FUNC_2 (char*,int ,int ,int ) ;

__attribute__((used)) static int FUNC_3(struct tep_handle *VAR_0, struct tep_event *VAR_1)
{
 struct event_handler *VAR_2, **VAR_3;

 for (VAR_3 = &VAR_0->handlers; *VAR_3;
      VAR_3 = &(*VAR_3)->next) {
  VAR_2 = *VAR_3;
  if (FUNC_0(VAR_1, VAR_2->id,
      VAR_2->sys_name,
      VAR_2->event_name))
   break;
 }

 if (!(*VAR_3))
  return 0;

 FUNC_2("overriding event (%d) %s:%s with new print handler",
  VAR_1->id, VAR_1->system, VAR_1->name);

 VAR_1->handler = VAR_2->func;
 VAR_1->context = VAR_2->context;

 *VAR_3 = VAR_2->next;
 FUNC_1(VAR_2);

 return 1;
}
