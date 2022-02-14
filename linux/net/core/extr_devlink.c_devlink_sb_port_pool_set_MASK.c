
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct netlink_ext_ack {int dummy; } ;
struct devlink_port {TYPE_1__* devlink; } ;
struct devlink_ops {int (* sb_port_pool_set ) (struct devlink_port*,unsigned int,int ,int ,struct netlink_ext_ack*) ;} ;
struct TYPE_2__ {struct devlink_ops* ops; } ;


 int VAR_0 ;
 int FUNC_0 (struct devlink_port*,unsigned int,int ,int ,struct netlink_ext_ack*) ;

__attribute__((used)) static int FUNC_1(struct devlink_port *VAR_1,
        unsigned int VAR_2, u16 VAR_3,
        u32 VAR_4,
        struct netlink_ext_ack *VAR_5)

{
 const struct devlink_ops *VAR_6 = VAR_1->devlink->ops;

 if (VAR_6->sb_port_pool_set)
  return VAR_6->sb_port_pool_set(VAR_1, VAR_2,
          VAR_3, VAR_4, VAR_5);
 return -VAR_0;
}
