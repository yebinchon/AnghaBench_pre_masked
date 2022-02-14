
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct netlink_ext_ack {int dummy; } ;
struct net_device {int name; } ;
struct net {int dummy; } ;
struct batadv_hard_iface {scalar_t__ soft_iface; } ;


 int VAR_0 ;
 int FUNC_0 (struct batadv_hard_iface*,struct net*,int ) ;
 struct batadv_hard_iface* FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct batadv_hard_iface*) ;
 struct net* FUNC_3 (struct net_device*) ;

__attribute__((used)) static int FUNC_4(struct net_device *VAR_1,
       struct net_device *VAR_2,
       struct netlink_ext_ack *VAR_3)
{
 struct batadv_hard_iface *VAR_4;
 struct net *VAR_5 = FUNC_3(VAR_1);
 int VAR_6 = -VAR_0;

 VAR_4 = FUNC_1(VAR_2);
 if (!VAR_4 || VAR_4->soft_iface)
  goto out;

 VAR_6 = FUNC_0(VAR_4, VAR_5, VAR_1->name);

out:
 if (VAR_4)
  FUNC_2(VAR_4);
 return VAR_6;
}
