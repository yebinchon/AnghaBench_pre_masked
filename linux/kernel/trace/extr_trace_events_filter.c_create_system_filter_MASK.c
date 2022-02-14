
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct trace_subsystem_dir {int dummy; } ;
struct trace_array {int dummy; } ;
struct filter_parse_error {int dummy; } ;
struct event_filter {int * filter_string; } ;


 int FUNC_0 (struct trace_array*,struct filter_parse_error*,struct event_filter*) ;
 int FUNC_1 (struct filter_parse_error*) ;
 int FUNC_2 (char*,int,struct filter_parse_error**,struct event_filter**) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct trace_subsystem_dir*,struct trace_array*,struct filter_parse_error*,char*) ;

__attribute__((used)) static int FUNC_5(struct trace_subsystem_dir *VAR_0,
    struct trace_array *VAR_1,
    char *VAR_2, struct event_filter **VAR_3)
{
 struct filter_parse_error *VAR_4 = ((void*)0);
 int VAR_5;

 VAR_5 = FUNC_2(VAR_2, 1, &VAR_4, VAR_3);
 if (!VAR_5) {
  VAR_5 = FUNC_4(VAR_0, VAR_1, VAR_4, VAR_2);
  if (!VAR_5) {

   FUNC_3((*VAR_3)->filter_string);
   (*VAR_3)->filter_string = ((void*)0);
  } else {
   FUNC_0(VAR_1, VAR_4, *VAR_3);
  }
 }
 FUNC_1(VAR_4);

 return VAR_5;
}
