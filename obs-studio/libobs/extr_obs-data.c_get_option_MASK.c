
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct obs_data_item {int dummy; } ;
typedef int obs_data_t ;


 struct obs_data_item* FUNC_0 (int *,char*) ;
 char* FUNC_1 (struct obs_data_item*) ;
 int FUNC_2 (struct obs_data_item**) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static inline bool FUNC_4(obs_data_t *VAR_0, const char **VAR_1)
{
 if (!VAR_1)
  return 0;

 struct obs_data_item *VAR_2 = FUNC_0(VAR_0, "option");
 if (!VAR_2)
  return 0;

 *VAR_1 = FUNC_1(VAR_2);
 FUNC_2(&VAR_2);

 FUNC_3(VAR_0);

 return 1;
}
