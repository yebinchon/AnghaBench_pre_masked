
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct netlink_ext_ack {int dummy; } ;
struct net_device {int dummy; } ;


 int FUNC_0 (struct net_device*,struct net_device*) ;
 int FUNC_1 (struct net_device*,struct net_device*) ;
 int FUNC_2 (struct net_device*,struct net_device*,struct netlink_ext_ack*) ;

int FUNC_3(struct net_device *VAR_0,
       struct net_device *VAR_1,
       struct net_device *VAR_2,
       struct netlink_ext_ack *VAR_3)
{
 int VAR_4;

 if (!VAR_1)
  return 0;

 if (VAR_0 && VAR_1 != VAR_0)
  FUNC_0(VAR_2, VAR_0);

 VAR_4 = FUNC_2(VAR_1, VAR_2, VAR_3);
 if (VAR_4) {
  if (VAR_0 && VAR_1 != VAR_0)
   FUNC_1(VAR_2, VAR_0);
  return VAR_4;
 }

 return 0;
}
