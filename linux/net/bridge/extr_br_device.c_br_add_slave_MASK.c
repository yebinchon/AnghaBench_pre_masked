
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct netlink_ext_ack {int dummy; } ;
struct net_device {int dummy; } ;
struct net_bridge {int dummy; } ;


 int FUNC_0 (struct net_bridge*,struct net_device*,struct netlink_ext_ack*) ;
 struct net_bridge* FUNC_1 (struct net_device*) ;

__attribute__((used)) static int FUNC_2(struct net_device *VAR_0, struct net_device *VAR_1,
   struct netlink_ext_ack *VAR_2)

{
 struct net_bridge *VAR_3 = FUNC_1(VAR_0);

 return FUNC_0(VAR_3, VAR_1, VAR_2);
}
