
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct trace_seq {int dummy; } ;
struct tep_plugin_list {struct tep_plugin_list* next; int name; } ;


 int FUNC_0 (struct trace_seq*,char*,char const*,int ,char const*) ;

void FUNC_1(struct trace_seq *VAR_0,
         const char *VAR_1, const char *VAR_2,
         const struct tep_plugin_list *VAR_3)
{
 while (VAR_3) {
  FUNC_0(VAR_0, "%s%s%s", VAR_1, VAR_3->name, VAR_2);
  VAR_3 = VAR_3->next;
 }
}
