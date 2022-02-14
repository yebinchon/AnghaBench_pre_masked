
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct trace_event_call {int class; } ;
struct list_head {int dummy; } ;


 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (struct list_head*,char const*,char const*,int,int,int,int) ;
 struct list_head* FUNC_2 (struct trace_event_call*) ;

int FUNC_3(struct trace_event_call *VAR_0, const char *VAR_1,
         const char *VAR_2, int VAR_3, int VAR_4, int VAR_5,
         int VAR_6)
{
 struct list_head *VAR_7;

 if (FUNC_0(!VAR_0->class))
  return 0;

 VAR_7 = FUNC_2(VAR_0);
 return FUNC_1(VAR_7, VAR_1, VAR_2, VAR_3, VAR_4,
        VAR_5, VAR_6);
}
