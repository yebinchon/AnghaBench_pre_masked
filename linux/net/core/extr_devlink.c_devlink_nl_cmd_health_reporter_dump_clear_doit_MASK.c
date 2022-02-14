
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct genl_info {struct devlink** user_ptr; } ;
struct devlink_health_reporter {int dump_lock; TYPE_1__* ops; } ;
struct devlink {int dummy; } ;
struct TYPE_2__ {int dump; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct devlink_health_reporter*) ;
 struct devlink_health_reporter* FUNC_1 (struct devlink*,struct genl_info*) ;
 int FUNC_2 (struct devlink_health_reporter*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int
FUNC_5(struct sk_buff *VAR_2,
            struct genl_info *VAR_3)
{
 struct devlink *VAR_4 = VAR_3->user_ptr[0];
 struct devlink_health_reporter *VAR_5;

 VAR_5 = FUNC_1(VAR_4, VAR_3);
 if (!VAR_5)
  return -VAR_0;

 if (!VAR_5->ops->dump) {
  FUNC_2(VAR_5);
  return -VAR_1;
 }

 FUNC_3(&VAR_5->dump_lock);
 FUNC_0(VAR_5);
 FUNC_4(&VAR_5->dump_lock);
 FUNC_2(VAR_5);
 return 0;
}
