
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct trace_event {struct tep_handle* pevent; int plugin_list; } ;
struct tep_handle {int dummy; } ;


 struct tep_handle* FUNC_0 () ;
 int FUNC_1 (struct tep_handle*) ;

int FUNC_2(struct trace_event *VAR_0)
{
 struct tep_handle *VAR_1 = FUNC_0();

 if (VAR_1) {
  VAR_0->plugin_list = FUNC_1(VAR_1);
  VAR_0->pevent = VAR_1;
 }

 return VAR_1 ? 0 : -1;
}
