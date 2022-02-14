
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nlattr {int dummy; } ;
struct netlink_ext_ack {int dummy; } ;
struct net_device {int flags; } ;
struct TYPE_2__ {scalar_t__ daddr; } ;
struct ip_tunnel_parm {TYPE_1__ iph; } ;
struct ip_tunnel_encap {int dummy; } ;
struct ip_tunnel {int fwmark; } ;
typedef int __u32 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct net_device*,struct nlattr**,struct ip_tunnel_parm*,int ) ;
 int FUNC_1 (struct ip_tunnel*,struct ip_tunnel_encap*) ;
 scalar_t__ FUNC_2 (struct nlattr**,struct ip_tunnel_encap*) ;
 int FUNC_3 (struct nlattr**,struct ip_tunnel_parm*,int*,int *) ;
 struct ip_tunnel* FUNC_4 (struct net_device*) ;

__attribute__((used)) static int FUNC_5(struct net_device *VAR_2, struct nlattr *VAR_3[],
      struct nlattr *VAR_4[],
      struct netlink_ext_ack *VAR_5)
{
 struct ip_tunnel *VAR_6 = FUNC_4(VAR_2);
 struct ip_tunnel_parm VAR_7;
 struct ip_tunnel_encap VAR_8;
 bool VAR_9;
 __u32 VAR_10 = VAR_6->fwmark;

 if (FUNC_2(VAR_4, &VAR_8)) {
  int VAR_11 = FUNC_1(VAR_6, &VAR_8);

  if (VAR_11 < 0)
   return VAR_11;
 }

 FUNC_3(VAR_4, &VAR_7, &VAR_9, &VAR_10);
 if (VAR_9)
  return -VAR_0;

 if (((VAR_2->flags & VAR_1) && !VAR_7.iph.daddr) ||
     (!(VAR_2->flags & VAR_1) && VAR_7.iph.daddr))
  return -VAR_0;

 return FUNC_0(VAR_2, VAR_3, &VAR_7, VAR_10);
}
