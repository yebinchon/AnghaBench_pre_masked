
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tep_plugin_list {int dummy; } ;
struct tep_handle {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct tep_handle*,char*,int ,struct tep_plugin_list**) ;

struct tep_plugin_list*
FUNC_1(struct tep_handle *VAR_1)
{
 struct tep_plugin_list *VAR_2 = ((void*)0);

 FUNC_0(VAR_1, ".so", VAR_0, &VAR_2);
 return VAR_2;
}
