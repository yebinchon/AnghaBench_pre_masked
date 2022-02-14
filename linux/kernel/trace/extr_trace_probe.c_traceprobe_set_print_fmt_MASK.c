
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct trace_probe {int dummy; } ;
struct trace_event_call {char* print_fmt; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct trace_probe*,char*,int,int) ;
 char* FUNC_1 (int,int ) ;
 struct trace_event_call* FUNC_2 (struct trace_probe*) ;

int FUNC_3(struct trace_probe *VAR_2, bool VAR_3)
{
 struct trace_event_call *VAR_4 = FUNC_2(VAR_2);
 int VAR_5;
 char *VAR_6;


 VAR_5 = FUNC_0(VAR_2, ((void*)0), 0, VAR_3);
 VAR_6 = FUNC_1(VAR_5 + 1, VAR_1);
 if (!VAR_6)
  return -VAR_0;


 FUNC_0(VAR_2, VAR_6, VAR_5 + 1, VAR_3);
 VAR_4->print_fmt = VAR_6;

 return 0;
}
