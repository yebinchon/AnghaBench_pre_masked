
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct netlink_ext_ack {int dummy; } ;
struct devlink_port {TYPE_1__* devlink; } ;
struct devlink_ops {int (* sb_tc_pool_bind_set ) (struct devlink_port*,unsigned int,int ,int,int ,int ,struct netlink_ext_ack*) ;} ;
typedef enum devlink_sb_pool_type { ____Placeholder_devlink_sb_pool_type } devlink_sb_pool_type ;
struct TYPE_2__ {struct devlink_ops* ops; } ;


 int VAR_0 ;
 int FUNC_0 (struct devlink_port*,unsigned int,int ,int,int ,int ,struct netlink_ext_ack*) ;

__attribute__((used)) static int FUNC_1(struct devlink_port *VAR_1,
           unsigned int VAR_2, u16 VAR_3,
           enum devlink_sb_pool_type VAR_4,
           u16 VAR_5, u32 VAR_6,
           struct netlink_ext_ack *VAR_7)

{
 const struct devlink_ops *VAR_8 = VAR_1->devlink->ops;

 if (VAR_8->sb_tc_pool_bind_set)
  return VAR_8->sb_tc_pool_bind_set(VAR_1, VAR_2,
      VAR_3, VAR_4,
      VAR_5, VAR_6, VAR_7);
 return -VAR_0;
}
