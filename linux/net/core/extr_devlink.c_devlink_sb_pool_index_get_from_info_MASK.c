
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct genl_info {int attrs; } ;
struct devlink_sb {int dummy; } ;


 int FUNC_0 (struct devlink_sb*,int ,int *) ;

__attribute__((used)) static int FUNC_1(struct devlink_sb *VAR_0,
            struct genl_info *VAR_1,
            u16 *VAR_2)
{
 return FUNC_0(VAR_0, VAR_1->attrs,
          VAR_2);
}
