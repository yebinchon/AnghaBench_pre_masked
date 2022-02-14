
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct genl_info {int attrs; } ;
struct devlink_sb {int dummy; } ;
typedef enum devlink_sb_pool_type { ____Placeholder_devlink_sb_pool_type } devlink_sb_pool_type ;


 int FUNC_0 (struct devlink_sb*,int ,int,int *) ;

__attribute__((used)) static int
FUNC_1(struct devlink_sb *VAR_0,
      struct genl_info *VAR_1,
      enum devlink_sb_pool_type VAR_2,
      u16 *VAR_3)
{
 return FUNC_0(VAR_0, VAR_1->attrs,
        VAR_2, VAR_3);
}
