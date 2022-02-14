
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct event_list {struct event_list* next; } ;


 int FUNC_0 (struct event_list*) ;

__attribute__((used)) static void FUNC_1(struct event_list *VAR_0)
{
 struct event_list *VAR_1;

 while (VAR_0) {
  VAR_1 = VAR_0;
  VAR_0 = VAR_0->next;
  FUNC_0(VAR_1);
 }
}
