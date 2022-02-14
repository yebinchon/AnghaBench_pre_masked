
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct trace_probe {int dummy; } ;
struct trace_event_file {int dummy; } ;
struct trace_event_call {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (struct trace_probe*) ;
 int FUNC_2 (struct trace_probe*,int ) ;
 int FUNC_3 (struct trace_probe*,struct trace_event_file*) ;
 int FUNC_4 (struct trace_probe*) ;
 int FUNC_5 (struct trace_probe*) ;
 struct trace_probe* FUNC_6 (struct trace_event_call*) ;
 int FUNC_7 (struct trace_probe*,struct trace_event_file*) ;

__attribute__((used)) static int FUNC_8(struct trace_event_call *VAR_4,
    struct trace_event_file *VAR_5)
{
 struct trace_probe *VAR_6;

 VAR_6 = FUNC_6(VAR_4);
 if (FUNC_0(!VAR_6))
  return -VAR_0;

 if (VAR_5) {
  if (!FUNC_3(VAR_6, VAR_5))
   return -VAR_1;
  if (!FUNC_4(VAR_6))
   goto out;
  FUNC_2(VAR_6, VAR_3);
 } else
  FUNC_2(VAR_6, VAR_2);

 if (!FUNC_5(VAR_6))
  FUNC_1(VAR_6);

 out:
 if (VAR_5)






  FUNC_7(VAR_6, VAR_5);

 return 0;
}
