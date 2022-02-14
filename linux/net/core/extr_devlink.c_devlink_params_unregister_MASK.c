
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct devlink_param {int dummy; } ;
struct devlink {int param_list; } ;


 int VAR_0 ;
 void FUNC_0 (struct devlink*,int ,int *,struct devlink_param const*,size_t,int ) ;

void FUNC_1(struct devlink *VAR_1,
          const struct devlink_param *VAR_2,
          size_t VAR_3)
{
 return FUNC_0(VAR_1, 0, &VAR_1->param_list,
        VAR_2, VAR_3,
        VAR_0);
}
