
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct trace_event_call {char* print_fmt; struct synth_event* data; } ;
struct synth_event {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct synth_event*,char*,int) ;
 char* FUNC_1 (int,int ) ;

__attribute__((used)) static int FUNC_2(struct trace_event_call *VAR_2)
{
 struct synth_event *VAR_3 = VAR_2->data;
 char *VAR_4;
 int VAR_5;


 VAR_5 = FUNC_0(VAR_3, ((void*)0), 0);

 VAR_4 = FUNC_1(VAR_5 + 1, VAR_1);
 if (!VAR_4)
  return -VAR_0;


 FUNC_0(VAR_3, VAR_4, VAR_5 + 1);
 VAR_2->print_fmt = VAR_4;

 return 0;
}
