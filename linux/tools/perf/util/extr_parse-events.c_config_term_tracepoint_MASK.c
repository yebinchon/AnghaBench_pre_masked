
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct perf_event_attr {int dummy; } ;
struct parse_events_term {int type_term; int err_term; } ;
struct parse_events_error {void* help; void* str; int idx; } ;


 int VAR_0 ;
 int FUNC_0 (struct perf_event_attr*,struct parse_events_term*,struct parse_events_error*) ;
 void* FUNC_1 (char*) ;

__attribute__((used)) static int FUNC_2(struct perf_event_attr *VAR_1,
      struct parse_events_term *VAR_2,
      struct parse_events_error *VAR_3)
{
 switch (VAR_2->type_term) {
 case 135:
 case 128:
 case 134:
 case 131:
 case 132:
 case 133:
 case 129:
 case 130:
 case 136:
  return FUNC_0(VAR_1, VAR_2, VAR_3);
 default:
  if (VAR_3) {
   VAR_3->idx = VAR_2->err_term;
   VAR_3->str = FUNC_1("unknown term");
   VAR_3->help = FUNC_1("valid terms: call-graph,stack-size\n");
  }
  return -VAR_0;
 }

 return 0;
}
