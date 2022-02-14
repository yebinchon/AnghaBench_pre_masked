
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nlattr {int dummy; } ;
struct netlink_ext_ack {int dummy; } ;
struct net_device {int dummy; } ;
struct net {int dummy; } ;
struct ip_tunnel_parm {int dummy; } ;
typedef int __u32 ;


 int FUNC_0 (struct net_device*,struct nlattr**,struct ip_tunnel_parm*,int ) ;
 int FUNC_1 (struct nlattr**,struct ip_tunnel_parm*,int *) ;

__attribute__((used)) static int FUNC_2(struct net *VAR_0, struct net_device *VAR_1,
         struct nlattr *VAR_2[], struct nlattr *VAR_3[],
         struct netlink_ext_ack *VAR_4)
{
 struct ip_tunnel_parm VAR_5;
 __u32 VAR_6 = 0;

 FUNC_1(VAR_3, &VAR_5, &VAR_6);
 return FUNC_0(VAR_1, VAR_2, &VAR_5, VAR_6);
}
