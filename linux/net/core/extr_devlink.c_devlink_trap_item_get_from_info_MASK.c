
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nlattr {int dummy; } ;
struct genl_info {struct nlattr** attrs; } ;
struct devlink_trap_item {int dummy; } ;
struct devlink {int dummy; } ;


 size_t VAR_0 ;
 struct devlink_trap_item* FUNC_0 (struct devlink*,int ) ;
 int FUNC_1 (struct nlattr*) ;

__attribute__((used)) static struct devlink_trap_item *
FUNC_2(struct devlink *VAR_1,
    struct genl_info *VAR_2)
{
 struct nlattr *VAR_3;

 if (!VAR_2->attrs[VAR_0])
  return ((void*)0);
 VAR_3 = VAR_2->attrs[VAR_0];

 return FUNC_0(VAR_1, FUNC_1(VAR_3));
}
