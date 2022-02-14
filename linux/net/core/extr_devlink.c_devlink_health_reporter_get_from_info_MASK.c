
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct genl_info {int attrs; } ;
struct devlink_health_reporter {int dummy; } ;
struct devlink {int dummy; } ;


 struct devlink_health_reporter* FUNC_0 (struct devlink*,int ) ;

__attribute__((used)) static struct devlink_health_reporter *
FUNC_1(struct devlink *VAR_0,
          struct genl_info *VAR_1)
{
 return FUNC_0(VAR_0, VAR_1->attrs);
}
