
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tep_plugin_option {scalar_t__ name; } ;
struct registered_plugin_options {struct tep_plugin_option* options; struct registered_plugin_options* next; } ;


 struct registered_plugin_options* FUNC_0 (int) ;
 struct registered_plugin_options* VAR_0 ;
 int FUNC_1 (char const*,struct tep_plugin_option*) ;

int FUNC_2(const char *VAR_1,
      struct tep_plugin_option *VAR_2)
{
 struct registered_plugin_options *VAR_3;

 VAR_3 = FUNC_0(sizeof(*VAR_3));
 if (!VAR_3)
  return -1;
 VAR_3->next = VAR_0;
 VAR_3->options = VAR_2;
 VAR_0 = VAR_3;

 while (VAR_2->name) {
  FUNC_1(VAR_1, VAR_2);
  VAR_2++;
 }
 return 0;
}
