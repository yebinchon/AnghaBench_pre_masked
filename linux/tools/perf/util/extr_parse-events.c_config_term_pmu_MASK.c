
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct perf_event_attr {int dummy; } ;
struct parse_events_term {scalar_t__ type_term; } ;
struct parse_events_error {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct perf_event_attr*,struct parse_events_term*,struct parse_events_error*) ;

__attribute__((used)) static int FUNC_1(struct perf_event_attr *VAR_2,
      struct parse_events_term *VAR_3,
      struct parse_events_error *VAR_4)
{
 if (VAR_3->type_term == VAR_1 ||
     VAR_3->type_term == VAR_0)




  return 0;
 else
  return FUNC_0(VAR_2, VAR_3, VAR_4);
}
