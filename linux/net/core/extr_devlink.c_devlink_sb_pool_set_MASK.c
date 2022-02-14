
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct netlink_ext_ack {int dummy; } ;
struct devlink_ops {int (* sb_pool_set ) (struct devlink*,unsigned int,int ,int ,int,struct netlink_ext_ack*) ;} ;
struct devlink {struct devlink_ops* ops; } ;
typedef enum devlink_sb_threshold_type { ____Placeholder_devlink_sb_threshold_type } devlink_sb_threshold_type ;


 int VAR_0 ;
 int FUNC_0 (struct devlink*,unsigned int,int ,int ,int,struct netlink_ext_ack*) ;

__attribute__((used)) static int FUNC_1(struct devlink *VAR_1, unsigned int VAR_2,
          u16 VAR_3, u32 VAR_4,
          enum devlink_sb_threshold_type VAR_5,
          struct netlink_ext_ack *VAR_6)

{
 const struct devlink_ops *VAR_7 = VAR_1->ops;

 if (VAR_7->sb_pool_set)
  return VAR_7->sb_pool_set(VAR_1, VAR_2, VAR_3,
     VAR_4, VAR_5, VAR_6);
 return -VAR_0;
}
