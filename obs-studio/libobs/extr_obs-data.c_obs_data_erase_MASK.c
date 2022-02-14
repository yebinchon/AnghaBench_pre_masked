
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct obs_data_item {int dummy; } ;
typedef int obs_data_t ;


 struct obs_data_item* FUNC_0 (int *,char const*) ;
 int FUNC_1 (struct obs_data_item*) ;
 int FUNC_2 (struct obs_data_item**) ;

void FUNC_3(obs_data_t *VAR_0, const char *VAR_1)
{
 struct obs_data_item *VAR_2 = FUNC_0(VAR_0, VAR_1);

 if (VAR_2) {
  FUNC_1(VAR_2);
  FUNC_2(&VAR_2);
 }
}
