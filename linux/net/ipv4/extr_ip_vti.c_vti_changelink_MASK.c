
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nlattr {int dummy; } ;
struct netlink_ext_ack {int dummy; } ;
struct net_device {int dummy; } ;
struct ip_tunnel_parm {int dummy; } ;
struct ip_tunnel {int fwmark; } ;
typedef int __u32 ;


 int FUNC_0 (struct net_device*,struct nlattr**,struct ip_tunnel_parm*,int ) ;
 struct ip_tunnel* FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct nlattr**,struct ip_tunnel_parm*,int *) ;

__attribute__((used)) static int FUNC_3(struct net_device *VAR_0, struct nlattr *VAR_1[],
     struct nlattr *VAR_2[],
     struct netlink_ext_ack *VAR_3)
{
 struct ip_tunnel *VAR_4 = FUNC_1(VAR_0);
 __u32 VAR_5 = VAR_4->fwmark;
 struct ip_tunnel_parm VAR_6;

 FUNC_2(VAR_2, &VAR_6, &VAR_5);
 return FUNC_0(VAR_0, VAR_1, &VAR_6, VAR_5);
}
