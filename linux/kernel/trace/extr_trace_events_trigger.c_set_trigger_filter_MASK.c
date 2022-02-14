
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct trace_event_file {int event_call; int tr; } ;
struct event_trigger_data {int * filter; int * filter_str; } ;
struct event_filter {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,char*,int,struct event_filter**) ;
 int FUNC_1 (struct event_filter*) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (char*,int ) ;
 struct event_filter* FUNC_4 (int *) ;
 int FUNC_5 (int *,struct event_filter*) ;
 scalar_t__ FUNC_6 (char*,char*) ;
 int FUNC_7 (char*) ;
 char* FUNC_8 (char**,char*) ;
 int FUNC_9 () ;

int FUNC_10(char *VAR_3,
         struct event_trigger_data *VAR_4,
         struct trace_event_file *VAR_5)
{
 struct event_trigger_data *VAR_6 = VAR_4;
 struct event_filter *VAR_7 = ((void*)0), *VAR_8;
 int VAR_9 = -VAR_0;
 char *VAR_10;

 if (!VAR_3)
  goto assign;

 VAR_10 = FUNC_8(&VAR_3, " \t");

 if (!FUNC_7(VAR_10) || FUNC_6(VAR_10, "if") != 0)
  goto out;

 if (!VAR_3)
  goto out;


 VAR_9 = FUNC_0(VAR_5->tr, VAR_5->event_call,
      VAR_3, 0, &VAR_7);




 assign:
 VAR_8 = FUNC_4(VAR_6->filter);

 FUNC_5(VAR_6->filter, VAR_7);

 if (VAR_8) {

  FUNC_9();
  FUNC_1(VAR_8);
 }

 FUNC_2(VAR_6->filter_str);
 VAR_6->filter_str = ((void*)0);

 if (VAR_3) {
  VAR_6->filter_str = FUNC_3(VAR_3, VAR_2);
  if (!VAR_6->filter_str) {
   FUNC_1(FUNC_4(VAR_6->filter));
   VAR_6->filter = ((void*)0);
   VAR_9 = -VAR_1;
  }
 }
 out:
 return VAR_9;
}
