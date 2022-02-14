
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xfrm_if_parms {int dummy; } ;
struct xfrm_if {struct net_device* dev; struct net* net; } ;
struct nlattr {int dummy; } ;
struct netlink_ext_ack {int dummy; } ;
struct net_device {int dummy; } ;
struct net {int dummy; } ;


 int VAR_0 ;
 struct xfrm_if* FUNC_0 (struct net_device*) ;
 struct xfrm_if* FUNC_1 (struct net*,struct xfrm_if_parms*) ;
 int FUNC_2 (struct nlattr**,struct xfrm_if_parms*) ;
 int FUNC_3 (struct xfrm_if*,struct xfrm_if_parms*) ;

__attribute__((used)) static int FUNC_4(struct net_device *VAR_1, struct nlattr *VAR_2[],
      struct nlattr *VAR_3[],
      struct netlink_ext_ack *VAR_4)
{
 struct xfrm_if *VAR_5 = FUNC_0(VAR_1);
 struct net *VAR_6 = VAR_5->net;
 struct xfrm_if_parms VAR_7;

 FUNC_2(VAR_3, &VAR_7);
 VAR_5 = FUNC_1(VAR_6, &VAR_7);
 if (!VAR_5) {
  VAR_5 = FUNC_0(VAR_1);
 } else {
  if (VAR_5->dev != VAR_1)
   return -VAR_0;
 }

 return FUNC_3(VAR_5, &VAR_7);
}
