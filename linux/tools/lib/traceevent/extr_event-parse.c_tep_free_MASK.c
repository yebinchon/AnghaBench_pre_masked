
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tep_handle {int cmdline_count; int nr_events; struct tep_handle* func_resolver; struct tep_handle* sort_events; struct tep_handle* events; struct event_handler* handlers; struct tep_handle* printk; struct tep_handle* next; struct tep_handle* printk_map; scalar_t__ printk_count; struct tep_function_handler* func_handlers; struct tep_handle* mod; struct tep_handle* func; struct tep_handle* func_map; scalar_t__ func_count; struct tep_handle* comm; struct tep_handle* cmdlines; scalar_t__ ref_count; struct tep_handle* printklist; struct tep_handle* funclist; struct tep_handle* cmdlist; } ;
struct tep_function_handler {struct tep_function_handler* next; } ;
struct printk_list {int cmdline_count; int nr_events; struct printk_list* func_resolver; struct printk_list* sort_events; struct printk_list* events; struct event_handler* handlers; struct printk_list* printk; struct printk_list* next; struct printk_list* printk_map; scalar_t__ printk_count; struct tep_function_handler* func_handlers; struct printk_list* mod; struct printk_list* func; struct printk_list* func_map; scalar_t__ func_count; struct printk_list* comm; struct printk_list* cmdlines; scalar_t__ ref_count; struct printk_list* printklist; struct printk_list* funclist; struct printk_list* cmdlist; } ;
struct func_list {int cmdline_count; int nr_events; struct func_list* func_resolver; struct func_list* sort_events; struct func_list* events; struct event_handler* handlers; struct func_list* printk; struct func_list* next; struct func_list* printk_map; scalar_t__ printk_count; struct tep_function_handler* func_handlers; struct func_list* mod; struct func_list* func; struct func_list* func_map; scalar_t__ func_count; struct func_list* comm; struct func_list* cmdlines; scalar_t__ ref_count; struct func_list* printklist; struct func_list* funclist; struct func_list* cmdlist; } ;
struct event_handler {struct event_handler* next; } ;
struct cmdline_list {int cmdline_count; int nr_events; struct cmdline_list* func_resolver; struct cmdline_list* sort_events; struct cmdline_list* events; struct event_handler* handlers; struct cmdline_list* printk; struct cmdline_list* next; struct cmdline_list* printk_map; scalar_t__ printk_count; struct tep_function_handler* func_handlers; struct cmdline_list* mod; struct cmdline_list* func; struct cmdline_list* func_map; scalar_t__ func_count; struct cmdline_list* comm; struct cmdline_list* cmdlines; scalar_t__ ref_count; struct cmdline_list* printklist; struct cmdline_list* funclist; struct cmdline_list* cmdlist; } ;


 int FUNC_0 (struct tep_handle*) ;
 int FUNC_1 (struct tep_function_handler*) ;
 int FUNC_2 (struct event_handler*) ;
 int FUNC_3 (struct tep_handle) ;

void FUNC_4(struct tep_handle *VAR_0)
{
 struct cmdline_list *VAR_1, *VAR_2;
 struct func_list *VAR_3, *VAR_4;
 struct printk_list *VAR_5, *VAR_6;
 struct tep_function_handler *VAR_7;
 struct event_handler *VAR_8;
 int VAR_9;

 if (!VAR_0)
  return;

 VAR_1 = VAR_0->cmdlist;
 VAR_3 = VAR_0->funclist;
 VAR_5 = VAR_0->printklist;

 VAR_0->ref_count--;
 if (VAR_0->ref_count)
  return;

 if (VAR_0->cmdlines) {
  for (VAR_9 = 0; VAR_9 < VAR_0->cmdline_count; VAR_9++)
   FUNC_0(VAR_0->cmdlines[VAR_9].comm);
  FUNC_0(VAR_0->cmdlines);
 }

 while (VAR_1) {
  VAR_2 = VAR_1->next;
  FUNC_0(VAR_1->comm);
  FUNC_0(VAR_1);
  VAR_1 = VAR_2;
 }

 if (VAR_0->func_map) {
  for (VAR_9 = 0; VAR_9 < (int)VAR_0->func_count; VAR_9++) {
   FUNC_0(VAR_0->func_map[VAR_9].func);
   FUNC_0(VAR_0->func_map[VAR_9].mod);
  }
  FUNC_0(VAR_0->func_map);
 }

 while (VAR_3) {
  VAR_4 = VAR_3->next;
  FUNC_0(VAR_3->func);
  FUNC_0(VAR_3->mod);
  FUNC_0(VAR_3);
  VAR_3 = VAR_4;
 }

 while (VAR_0->func_handlers) {
  VAR_7 = VAR_0->func_handlers;
  VAR_0->func_handlers = VAR_7->next;
  FUNC_1(VAR_7);
 }

 if (VAR_0->printk_map) {
  for (VAR_9 = 0; VAR_9 < (int)VAR_0->printk_count; VAR_9++)
   FUNC_0(VAR_0->printk_map[VAR_9].printk);
  FUNC_0(VAR_0->printk_map);
 }

 while (VAR_5) {
  VAR_6 = VAR_5->next;
  FUNC_0(VAR_5->printk);
  FUNC_0(VAR_5);
  VAR_5 = VAR_6;
 }

 for (VAR_9 = 0; VAR_9 < VAR_0->nr_events; VAR_9++)
  FUNC_3(VAR_0->events[VAR_9]);

 while (VAR_0->handlers) {
  VAR_8 = VAR_0->handlers;
  VAR_0->handlers = VAR_8->next;
  FUNC_2(VAR_8);
 }

 FUNC_0(VAR_0->events);
 FUNC_0(VAR_0->sort_events);
 FUNC_0(VAR_0->func_resolver);

 FUNC_0(VAR_0);
}
