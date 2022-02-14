
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tep_plugin_option {int dummy; } ;
struct registered_plugin_options {struct registered_plugin_options* next; struct tep_plugin_option* options; } ;


 int FUNC_0 (struct registered_plugin_options*) ;
 struct registered_plugin_options* VAR_0 ;

void FUNC_1(struct tep_plugin_option *VAR_1)
{
 struct registered_plugin_options **VAR_2;
 struct registered_plugin_options *VAR_3;

 for (VAR_2 = &VAR_0; *VAR_2; VAR_2 = &(*VAR_2)->next) {
  if ((*VAR_2)->options == VAR_1) {
   VAR_3 = *VAR_2;
   *VAR_2 = VAR_3->next;
   FUNC_0(VAR_3);
   return;
  }
 }
}
