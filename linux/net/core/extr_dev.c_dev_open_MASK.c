
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct netlink_ext_ack {int dummy; } ;
struct net_device {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct net_device*,struct netlink_ext_ack*) ;
 int FUNC_1 (int ,struct net_device*) ;
 int FUNC_2 (int ,struct net_device*,int,int ) ;

int FUNC_3(struct net_device *VAR_5, struct netlink_ext_ack *VAR_6)
{
 int VAR_7;

 if (VAR_5->flags & VAR_2)
  return 0;

 VAR_7 = FUNC_0(VAR_5, VAR_6);
 if (VAR_7 < 0)
  return VAR_7;

 FUNC_2(VAR_4, VAR_5, VAR_2|VAR_1, VAR_0);
 FUNC_1(VAR_3, VAR_5);

 return VAR_7;
}
