
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct genl_info {int attrs; } ;
struct devlink_port {int dummy; } ;
struct devlink {int dummy; } ;


 struct devlink_port* FUNC_0 (struct devlink*,int ) ;

__attribute__((used)) static struct devlink_port *FUNC_1(struct devlink *VAR_0,
             struct genl_info *VAR_1)
{
 return FUNC_0(VAR_0, VAR_1->attrs);
}
