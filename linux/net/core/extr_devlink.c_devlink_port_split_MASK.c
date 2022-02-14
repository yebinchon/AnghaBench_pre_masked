
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct netlink_ext_ack {int dummy; } ;
struct devlink {TYPE_1__* ops; } ;
struct TYPE_2__ {int (* port_split ) (struct devlink*,int ,int ,struct netlink_ext_ack*) ;} ;


 int VAR_0 ;
 int FUNC_0 (struct devlink*,int ,int ,struct netlink_ext_ack*) ;

__attribute__((used)) static int FUNC_1(struct devlink *VAR_1, u32 VAR_2,
         u32 VAR_3, struct netlink_ext_ack *VAR_4)

{
 if (VAR_1->ops->port_split)
  return VAR_1->ops->port_split(VAR_1, VAR_2, VAR_3,
      VAR_4);
 return -VAR_0;
}
