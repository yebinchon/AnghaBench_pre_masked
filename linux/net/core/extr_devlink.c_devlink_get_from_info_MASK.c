
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct genl_info {int attrs; } ;
struct devlink {int dummy; } ;


 struct devlink* FUNC_0 (int ,int ) ;
 int FUNC_1 (struct genl_info*) ;

__attribute__((used)) static struct devlink *FUNC_2(struct genl_info *VAR_0)
{
 return FUNC_0(FUNC_1(VAR_0), VAR_0->attrs);
}
