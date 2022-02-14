
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nlattr {int dummy; } ;
struct netlink_ext_ack {int dummy; } ;
struct net_device {int dummy; } ;
struct net {int dummy; } ;
struct ip_tunnel_encap {int dummy; } ;
struct ip6gre_net {struct net_device* fb_tunnel_dev; } ;
struct ip6_tnl {struct net_device* dev; struct net* net; } ;
struct __ip6_tnl_parm {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct ip6_tnl* FUNC_0 (int) ;
 int FUNC_1 (struct ip6_tnl*,struct ip_tunnel_encap*) ;
 int VAR_2 ;
 scalar_t__ FUNC_2 (struct nlattr**,struct ip_tunnel_encap*) ;
 int FUNC_3 (struct nlattr**,struct __ip6_tnl_parm*) ;
 struct ip6_tnl* FUNC_4 (struct net*,struct __ip6_tnl_parm*,int ) ;
 struct ip6gre_net* FUNC_5 (struct net*,int ) ;
 struct ip6_tnl* FUNC_6 (struct net_device*) ;

__attribute__((used)) static struct ip6_tnl *
FUNC_7(struct net_device *VAR_3, struct nlattr *VAR_4[],
    struct nlattr *VAR_5[], struct __ip6_tnl_parm *VAR_6,
    struct netlink_ext_ack *VAR_7)
{
 struct ip6_tnl *VAR_8, *VAR_9 = FUNC_6(VAR_3);
 struct net *VAR_10 = VAR_9->net;
 struct ip6gre_net *VAR_11 = FUNC_5(VAR_10, VAR_2);
 struct ip_tunnel_encap VAR_12;

 if (VAR_3 == VAR_11->fb_tunnel_dev)
  return FUNC_0(-VAR_1);

 if (FUNC_2(VAR_5, &VAR_12)) {
  int VAR_13 = FUNC_1(VAR_9, &VAR_12);

  if (VAR_13 < 0)
   return FUNC_0(VAR_13);
 }

 FUNC_3(VAR_5, VAR_6);

 VAR_8 = FUNC_4(VAR_10, VAR_6, 0);

 if (VAR_8) {
  if (VAR_8->dev != VAR_3)
   return FUNC_0(-VAR_0);
 } else {
  VAR_8 = VAR_9;
 }

 return VAR_8;
}
