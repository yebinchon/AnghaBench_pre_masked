
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct obs_data_item {int ref; } ;
typedef int obs_data_t ;
typedef struct obs_data_item obs_data_item_t ;


 struct obs_data_item* FUNC_0 (int *,char const*) ;
 int FUNC_1 (int *) ;

obs_data_item_t *FUNC_2(obs_data_t *VAR_0, const char *VAR_1)
{
 if (!VAR_0)
  return ((void*)0);

 struct obs_data_item *VAR_2 = FUNC_0(VAR_0, VAR_1);
 if (VAR_2)
  FUNC_1(&VAR_2->ref);
 return VAR_2;
}
