
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nlattr {int dummy; } ;
struct netlink_ext_ack {int dummy; } ;
struct net_device {scalar_t__ type; } ;
struct net {int dummy; } ;
struct ip_tunnel_encap {int dummy; } ;
struct ip6_tnl {int net; struct net_device* dev; } ;


 scalar_t__ VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct net_device*,int ) ;
 int FUNC_4 (struct ip6_tnl*,struct ip_tunnel_encap*) ;
 scalar_t__ FUNC_5 (struct nlattr**,struct ip_tunnel_encap*) ;
 struct ip6_tnl* FUNC_6 (struct net_device*) ;
 int FUNC_7 (struct nlattr*) ;
 int FUNC_8 (struct net_device*) ;

__attribute__((used)) static int FUNC_9(struct net *VAR_3, struct net_device *VAR_4,
     struct nlattr *VAR_5[], struct nlattr *VAR_6[],
     struct netlink_ext_ack *VAR_7)
{
 struct ip6_tnl *VAR_8;
 struct ip_tunnel_encap VAR_9;
 int VAR_10;

 VAR_8 = FUNC_6(VAR_4);

 if (FUNC_5(VAR_6, &VAR_9)) {
  int VAR_11 = FUNC_4(VAR_8, &VAR_9);

  if (VAR_11 < 0)
   return VAR_11;
 }

 if (VAR_4->type == VAR_0 && !VAR_5[VAR_1])
  FUNC_2(VAR_4);

 VAR_8->dev = VAR_4;
 VAR_8->net = FUNC_1(VAR_4);

 VAR_10 = FUNC_8(VAR_4);
 if (VAR_10)
  goto out;

 if (VAR_5[VAR_2])
  FUNC_3(VAR_4, FUNC_7(VAR_5[VAR_2]));

 FUNC_0(VAR_4);

out:
 return VAR_10;
}
