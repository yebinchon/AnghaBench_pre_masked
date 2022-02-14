
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct list_head {int dummy; } ;
struct devlink_param {int dummy; } ;
struct devlink {int lock; } ;
typedef enum devlink_command { ____Placeholder_devlink_command } devlink_command ;


 int FUNC_0 (struct devlink*,int ,struct list_head*,struct devlink_param const*,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct devlink *VAR_0,
     unsigned int VAR_1,
     struct list_head *VAR_2,
     const struct devlink_param *VAR_3,
     size_t VAR_4,
     enum devlink_command VAR_5)
{
 const struct devlink_param *VAR_6 = VAR_3;
 int VAR_7;

 FUNC_1(&VAR_0->lock);
 for (VAR_7 = 0; VAR_7 < VAR_4; VAR_7++, VAR_6++)
  FUNC_0(VAR_0, 0, VAR_2, VAR_6,
          VAR_5);
 FUNC_2(&VAR_0->lock);
}
