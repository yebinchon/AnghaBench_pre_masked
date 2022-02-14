
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net {int dummy; } ;
struct ip6_tnl_net {int dummy; } ;
struct ip6_tnl {int dev; struct net* net; } ;
struct __ip6_tnl_parm {int dummy; } ;


 int FUNC_0 (struct ip6_tnl*,struct __ip6_tnl_parm*) ;
 int FUNC_1 (struct ip6_tnl_net*,struct ip6_tnl*) ;
 int VAR_0 ;
 int FUNC_2 (struct ip6_tnl_net*,struct ip6_tnl*) ;
 struct ip6_tnl_net* FUNC_3 (struct net*,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 () ;

__attribute__((used)) static int FUNC_6(struct ip6_tnl *VAR_1, struct __ip6_tnl_parm *VAR_2)
{
 struct net *VAR_3 = VAR_1->net;
 struct ip6_tnl_net *VAR_4 = FUNC_3(VAR_3, VAR_0);
 int VAR_5;

 FUNC_2(VAR_4, VAR_1);
 FUNC_5();
 VAR_5 = FUNC_0(VAR_1, VAR_2);
 FUNC_1(VAR_4, VAR_1);
 FUNC_4(VAR_1->dev);
 return VAR_5;
}
