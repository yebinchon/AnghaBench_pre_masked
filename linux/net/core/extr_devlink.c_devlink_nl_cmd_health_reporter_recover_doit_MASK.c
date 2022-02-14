
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct genl_info {struct devlink** user_ptr; } ;
struct devlink_health_reporter {int dummy; } ;
struct devlink {int dummy; } ;


 int VAR_0 ;
 struct devlink_health_reporter* FUNC_0 (struct devlink*,struct genl_info*) ;
 int FUNC_1 (struct devlink_health_reporter*) ;
 int FUNC_2 (struct devlink_health_reporter*,int *) ;

__attribute__((used)) static int FUNC_3(struct sk_buff *VAR_1,
             struct genl_info *VAR_2)
{
 struct devlink *VAR_3 = VAR_2->user_ptr[0];
 struct devlink_health_reporter *VAR_4;
 int VAR_5;

 VAR_4 = FUNC_0(VAR_3, VAR_2);
 if (!VAR_4)
  return -VAR_0;

 VAR_5 = FUNC_2(VAR_4, ((void*)0));

 FUNC_1(VAR_4);
 return VAR_5;
}
