
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xfrm_if_parms {int dummy; } ;
struct xfrm_if {struct net_device* dev; struct net* net; struct xfrm_if_parms p; } ;
struct nlattr {int dummy; } ;
struct netlink_ext_ack {int dummy; } ;
struct net_device {int dummy; } ;
struct net {int dummy; } ;


 int VAR_0 ;
 struct net* FUNC_0 (struct net_device*) ;
 struct xfrm_if* FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct net_device*) ;
 struct xfrm_if* FUNC_3 (struct net*,struct xfrm_if_parms*) ;
 int FUNC_4 (struct nlattr**,struct xfrm_if_parms*) ;

__attribute__((used)) static int FUNC_5(struct net *VAR_1, struct net_device *VAR_2,
   struct nlattr *VAR_3[], struct nlattr *VAR_4[],
   struct netlink_ext_ack *VAR_5)
{
 struct net *VAR_6 = FUNC_0(VAR_2);
 struct xfrm_if_parms VAR_7;
 struct xfrm_if *VAR_8;
 int VAR_9;

 FUNC_4(VAR_4, &VAR_7);
 VAR_8 = FUNC_3(VAR_6, &VAR_7);
 if (VAR_8)
  return -VAR_0;

 VAR_8 = FUNC_1(VAR_2);
 VAR_8->p = VAR_7;
 VAR_8->net = VAR_6;
 VAR_8->dev = VAR_2;

 VAR_9 = FUNC_2(VAR_2);
 return VAR_9;
}
