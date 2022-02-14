
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct obs_data {int dummy; } ;
struct TYPE_5__ {int type; } ;
typedef TYPE_1__ obs_data_item_t ;
typedef enum obs_data_type { ____Placeholder_obs_data_type } obs_data_type ;


 TYPE_1__* FUNC_0 (struct obs_data*,char const*) ;
 int FUNC_1 (struct obs_data*,TYPE_1__**,char const*,void const*,size_t,int,int,int) ;

__attribute__((used)) static inline void FUNC_2(struct obs_data *VAR_0, obs_data_item_t **VAR_1,
    const char *VAR_2, const void *VAR_3, size_t VAR_4,
    enum obs_data_type VAR_5)
{
 obs_data_item_t *VAR_6 = ((void*)0);

 if (!VAR_0 && !VAR_1)
  return;

 if (!VAR_1) {
  VAR_6 = FUNC_0(VAR_0, VAR_2);
  VAR_1 = &VAR_6;
 }

 if (VAR_1 && *VAR_1 && (*VAR_1)->type != VAR_5)
  return;

 FUNC_1(VAR_0, VAR_1, VAR_2, VAR_3, VAR_4, VAR_5, 1, 0);
}
