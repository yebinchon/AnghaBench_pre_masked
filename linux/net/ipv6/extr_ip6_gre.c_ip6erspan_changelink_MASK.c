
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nlattr {int dummy; } ;
struct netlink_ext_ack {int dummy; } ;
struct net_device {int dummy; } ;
struct ip6gre_net {int dummy; } ;
struct ip6_tnl {int dummy; } ;
struct __ip6_tnl_parm {int dummy; } ;


 size_t VAR_0 ;
 scalar_t__ FUNC_0 (struct ip6_tnl*) ;
 int FUNC_1 (struct ip6_tnl*) ;
 int FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct nlattr**,struct __ip6_tnl_parm*) ;
 int FUNC_4 (struct ip6_tnl*,struct __ip6_tnl_parm*,int) ;
 int FUNC_5 (struct ip6gre_net*,struct ip6_tnl*) ;
 struct ip6_tnl* FUNC_6 (struct net_device*,struct nlattr**,struct nlattr**,struct __ip6_tnl_parm*,struct netlink_ext_ack*) ;
 int VAR_1 ;
 int FUNC_7 (struct ip6gre_net*,struct ip6_tnl*) ;
 int FUNC_8 (struct ip6gre_net*,struct ip6_tnl*) ;
 int FUNC_9 (struct ip6gre_net*,struct ip6_tnl*) ;
 struct ip6gre_net* FUNC_10 (int ,int ) ;

__attribute__((used)) static int FUNC_11(struct net_device *VAR_2, struct nlattr *VAR_3[],
    struct nlattr *VAR_4[],
    struct netlink_ext_ack *VAR_5)
{
 struct ip6gre_net *VAR_6 = FUNC_10(FUNC_2(VAR_2), VAR_1);
 struct __ip6_tnl_parm VAR_7;
 struct ip6_tnl *VAR_8;

 VAR_8 = FUNC_6(VAR_2, VAR_3, VAR_4, &VAR_7, VAR_5);
 if (FUNC_0(VAR_8))
  return FUNC_1(VAR_8);

 FUNC_3(VAR_4, &VAR_7);
 FUNC_9(VAR_6, VAR_8);
 FUNC_8(VAR_6, VAR_8);
 FUNC_4(VAR_8, &VAR_7, !VAR_3[VAR_0]);
 FUNC_5(VAR_6, VAR_8);
 FUNC_7(VAR_6, VAR_8);
 return 0;
}
