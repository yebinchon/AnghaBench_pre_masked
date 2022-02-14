
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct event_subsystem {int name; struct event_subsystem* filter_string; int list; struct event_subsystem* filter; } ;
struct event_filter {int name; struct event_filter* filter_string; int list; struct event_filter* filter; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct event_subsystem*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (struct event_subsystem*) ;
 scalar_t__ FUNC_5 (struct event_subsystem*) ;

__attribute__((used)) static void FUNC_6(struct event_subsystem *VAR_0)
{
 struct event_filter *VAR_1 = VAR_0->filter;

 FUNC_0(FUNC_4(VAR_0) == 0);
 if (FUNC_5(VAR_0))
  return;

 FUNC_3(&VAR_0->list);

 if (VAR_1) {
  FUNC_1(VAR_1->filter_string);
  FUNC_1(VAR_1);
 }
 FUNC_2(VAR_0->name);
 FUNC_1(VAR_0);
}
