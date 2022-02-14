
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct trace_event_call {int dummy; } ;
struct trace_array {int dummy; } ;
struct filter_parse_error {int dummy; } ;
struct event_filter {int dummy; } ;


 scalar_t__ FUNC_0 (struct event_filter*) ;
 int FUNC_1 (struct trace_array*,struct filter_parse_error*,struct event_filter*) ;
 int FUNC_2 (struct filter_parse_error*) ;
 int FUNC_3 (char*,int,struct filter_parse_error**,struct event_filter**) ;
 int FUNC_4 (struct trace_event_call*,char*,struct event_filter*,struct filter_parse_error*) ;

__attribute__((used)) static int FUNC_5(struct trace_array *VAR_0,
    struct trace_event_call *VAR_1,
    char *VAR_2, bool VAR_3,
    struct event_filter **VAR_4)
{
 struct filter_parse_error *VAR_5 = ((void*)0);
 int VAR_6;


 if (FUNC_0(*VAR_4))
  *VAR_4 = ((void*)0);

 VAR_6 = FUNC_3(VAR_2, VAR_3, &VAR_5, VAR_4);
 if (VAR_6)
  return VAR_6;

 VAR_6 = FUNC_4(VAR_1, VAR_2, *VAR_4, VAR_5);
 if (VAR_6 && VAR_3)
  FUNC_1(VAR_0, VAR_5, *VAR_4);
 FUNC_2(VAR_5);

 return VAR_6;
}
