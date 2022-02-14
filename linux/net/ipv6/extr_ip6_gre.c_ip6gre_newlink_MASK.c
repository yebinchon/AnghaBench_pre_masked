
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct nlattr {int dummy; } ;
struct netlink_ext_ack {int dummy; } ;
struct net_device {int type; } ;
struct net {int dummy; } ;
struct ip6gre_net {int collect_md_tun; } ;
struct TYPE_3__ {scalar_t__ collect_md; } ;
struct ip6_tnl {TYPE_1__ parms; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 struct net* FUNC_0 (struct net_device*) ;
 int VAR_2 ;
 int FUNC_1 (struct nlattr**,TYPE_1__*) ;
 int FUNC_2 (struct net*,struct net_device*,struct nlattr**,struct nlattr**,struct netlink_ext_ack*) ;
 int FUNC_3 (struct ip6_tnl*,int) ;
 scalar_t__ FUNC_4 (struct net*,TYPE_1__*,int ) ;
 int FUNC_5 (struct ip6gre_net*,struct ip6_tnl*) ;
 int FUNC_6 (struct ip6gre_net*,struct ip6_tnl*) ;
 struct ip6gre_net* FUNC_7 (struct net*,int ) ;
 struct ip6_tnl* FUNC_8 (struct net_device*) ;
 scalar_t__ FUNC_9 (int ) ;

__attribute__((used)) static int FUNC_10(struct net *VAR_3, struct net_device *VAR_4,
     struct nlattr *VAR_5[], struct nlattr *VAR_6[],
     struct netlink_ext_ack *VAR_7)
{
 struct ip6_tnl *VAR_8 = FUNC_8(VAR_4);
 struct net *VAR_9 = FUNC_0(VAR_4);
 struct ip6gre_net *VAR_10;
 int VAR_11;

 FUNC_1(VAR_6, &VAR_8->parms);
 VAR_10 = FUNC_7(VAR_9, VAR_2);

 if (VAR_8->parms.collect_md) {
  if (FUNC_9(VAR_10->collect_md_tun))
   return -VAR_0;
 } else {
  if (FUNC_4(VAR_9, &VAR_8->parms, VAR_4->type))
   return -VAR_0;
 }

 VAR_11 = FUNC_2(VAR_3, VAR_4, VAR_5, VAR_6, VAR_7);
 if (!VAR_11) {
  FUNC_3(VAR_8, !VAR_5[VAR_1]);
  FUNC_6(VAR_10, VAR_8);
  FUNC_5(FUNC_7(VAR_9, VAR_2), VAR_8);
 }
 return VAR_11;
}
