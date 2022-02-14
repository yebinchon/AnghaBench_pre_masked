
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct list_head {int dummy; } ;
struct devlink_param_item {int list; } ;
struct devlink_param {int name; } ;
struct devlink {int dummy; } ;
typedef enum devlink_command { ____Placeholder_devlink_command } devlink_command ;


 int FUNC_0 (int) ;
 struct devlink_param_item* FUNC_1 (struct list_head*,int ) ;
 int FUNC_2 (struct devlink*,unsigned int,struct devlink_param_item*,int) ;
 int FUNC_3 (struct devlink_param_item*) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(struct devlink *VAR_0,
      unsigned int VAR_1,
      struct list_head *VAR_2,
      const struct devlink_param *VAR_3,
      enum devlink_command VAR_4)
{
 struct devlink_param_item *VAR_5;

 VAR_5 = FUNC_1(VAR_2, VAR_3->name);
 FUNC_0(!VAR_5);
 FUNC_2(VAR_0, VAR_1, VAR_5, VAR_4);
 FUNC_4(&VAR_5->list);
 FUNC_3(VAR_5);
}
