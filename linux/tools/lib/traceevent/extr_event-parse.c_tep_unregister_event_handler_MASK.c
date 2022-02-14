
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int * tep_event_handler_func ;
struct tep_handle {struct event_handler* handlers; } ;
struct tep_event {void* context; int * handler; int name; int system; int id; } ;
struct event_handler {struct event_handler* next; } ;


 int FUNC_0 (struct event_handler*) ;
 scalar_t__ FUNC_1 (struct event_handler*,int,char const*,char const*,int *,void*) ;
 int FUNC_2 (char*,int ,int ,int ) ;
 struct tep_event* FUNC_3 (struct tep_handle*,int,char const*,char const*) ;

int FUNC_4(struct tep_handle *VAR_0, int VAR_1,
     const char *VAR_2, const char *VAR_3,
     tep_event_handler_func VAR_4, void *VAR_5)
{
 struct tep_event *VAR_6;
 struct event_handler *VAR_7;
 struct event_handler **VAR_8;

 VAR_6 = FUNC_3(VAR_0, VAR_1, VAR_2, VAR_3);
 if (VAR_6 == ((void*)0))
  goto not_found;

 if (VAR_6->handler == VAR_4 && VAR_6->context == VAR_5) {
  FUNC_2("removing override handler for event (%d) %s:%s. Going back to default handler.",
   VAR_6->id, VAR_6->system, VAR_6->name);

  VAR_6->handler = ((void*)0);
  VAR_6->context = ((void*)0);
  return 0;
 }

not_found:
 for (VAR_8 = &VAR_0->handlers; *VAR_8; VAR_8 = &(*VAR_8)->next) {
  VAR_7 = *VAR_8;
  if (FUNC_1(VAR_7, VAR_1, VAR_2, VAR_3,
       VAR_4, VAR_5))
   break;
 }

 if (!(*VAR_8))
  return -1;

 *VAR_8 = VAR_7->next;
 FUNC_0(VAR_7);

 return 0;
}
