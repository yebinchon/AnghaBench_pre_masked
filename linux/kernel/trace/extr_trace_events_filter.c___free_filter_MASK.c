
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct event_filter {struct event_filter* filter_string; } ;


 int FUNC_0 (struct event_filter*) ;
 int FUNC_1 (struct event_filter*) ;

__attribute__((used)) static void FUNC_2(struct event_filter *VAR_0)
{
 if (!VAR_0)
  return;

 FUNC_0(VAR_0);
 FUNC_1(VAR_0->filter_string);
 FUNC_1(VAR_0);
}
