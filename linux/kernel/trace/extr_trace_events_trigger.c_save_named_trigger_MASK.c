
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct event_trigger_data {int named_list; int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char const*,int ) ;
 int FUNC_1 (int *,int *) ;
 int VAR_2 ;

int FUNC_2(const char *VAR_3, struct event_trigger_data *VAR_4)
{
 VAR_4->name = FUNC_0(VAR_3, VAR_1);
 if (!VAR_4->name)
  return -VAR_0;

 FUNC_1(&VAR_4->named_list, &VAR_2);

 return 0;
}
