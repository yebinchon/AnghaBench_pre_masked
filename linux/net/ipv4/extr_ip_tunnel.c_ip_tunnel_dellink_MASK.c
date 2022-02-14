
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct list_head {int dummy; } ;
struct ip_tunnel_net {struct net_device* fb_tunnel_dev; } ;
struct ip_tunnel {int ip_tnl_net_id; int net; } ;


 int FUNC_0 (struct ip_tunnel_net*,struct ip_tunnel*) ;
 struct ip_tunnel_net* FUNC_1 (int ,int ) ;
 struct ip_tunnel* FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct net_device*,struct list_head*) ;

void FUNC_4(struct net_device *VAR_0, struct list_head *VAR_1)
{
 struct ip_tunnel *VAR_2 = FUNC_2(VAR_0);
 struct ip_tunnel_net *VAR_3;

 VAR_3 = FUNC_1(VAR_2->net, VAR_2->ip_tnl_net_id);

 if (VAR_3->fb_tunnel_dev != VAR_0) {
  FUNC_0(VAR_3, FUNC_2(VAR_0));
  FUNC_3(VAR_0, VAR_1);
 }
}
