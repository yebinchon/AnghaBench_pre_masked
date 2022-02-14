
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nlattr {int dummy; } ;
struct netlink_ext_ack {int dummy; } ;
struct net_device {int dummy; } ;
struct net {int dummy; } ;
struct ip_tunnel_parm {int dummy; } ;
struct ip_tunnel_encap {int dummy; } ;
struct ip_tunnel {int dummy; } ;
typedef int __u32 ;


 int FUNC_0 (struct ip_tunnel*,struct ip_tunnel_encap*) ;
 int FUNC_1 (struct net_device*,struct nlattr**,struct ip_tunnel_parm*,int ) ;
 scalar_t__ FUNC_2 (struct nlattr**,struct ip_tunnel_encap*) ;
 int FUNC_3 (struct net_device*,struct nlattr**,struct nlattr**,struct ip_tunnel_parm*,int *) ;
 struct ip_tunnel* FUNC_4 (struct net_device*) ;

__attribute__((used)) static int FUNC_5(struct net *VAR_0, struct net_device *VAR_1,
    struct nlattr *VAR_2[], struct nlattr *VAR_3[],
    struct netlink_ext_ack *VAR_4)
{
 struct ip_tunnel_parm VAR_5;
 struct ip_tunnel_encap VAR_6;
 __u32 VAR_7 = 0;
 int VAR_8;

 if (FUNC_2(VAR_3, &VAR_6)) {
  struct ip_tunnel *VAR_9 = FUNC_4(VAR_1);
  VAR_8 = FUNC_0(VAR_9, &VAR_6);

  if (VAR_8 < 0)
   return VAR_8;
 }

 VAR_8 = FUNC_3(VAR_1, VAR_3, VAR_2, &VAR_5, &VAR_7);
 if (VAR_8 < 0)
  return VAR_8;
 return FUNC_1(VAR_1, VAR_2, &VAR_5, VAR_7);
}
