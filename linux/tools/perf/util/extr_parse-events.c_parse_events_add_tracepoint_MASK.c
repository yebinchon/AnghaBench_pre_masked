
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct perf_event_attr {int dummy; } ;
struct parse_events_error {int dummy; } ;
struct list_head {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct list_head*,int*,char const*,char const*,struct parse_events_error*,struct list_head*) ;
 int FUNC_1 (struct list_head*,int*,char const*,char const*,struct parse_events_error*,struct list_head*) ;
 scalar_t__ FUNC_2 (struct perf_event_attr*,struct list_head*,struct parse_events_error*,int ) ;
 int VAR_1 ;
 scalar_t__ FUNC_3 (char const*,char*) ;

int FUNC_4(struct list_head *VAR_2, int *VAR_3,
    const char *VAR_4, const char *VAR_5,
    struct parse_events_error *VAR_6,
    struct list_head *VAR_7)
{
 if (VAR_7) {
  struct perf_event_attr VAR_8;

  if (FUNC_2(&VAR_8, VAR_7, VAR_6,
    VAR_1))
   return -VAR_0;
 }

 if (FUNC_3(VAR_4, "*?"))
  return FUNC_1(VAR_2, VAR_3, VAR_4, VAR_5,
      VAR_6, VAR_7);
 else
  return FUNC_0(VAR_2, VAR_3, VAR_4, VAR_5,
         VAR_6, VAR_7);
}
