
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {scalar_t__ hard_header_len; scalar_t__ max_mtu; int min_mtu; } ;
struct net {int dummy; } ;
struct iphdr {int dummy; } ;
struct ip_tunnel_parm {int dummy; } ;
struct ip_tunnel_net {int rtnl_link_ops; } ;
struct ip_tunnel {int hlen; } ;


 struct ip_tunnel* FUNC_0 (struct net_device*) ;
 struct ip_tunnel* FUNC_1 (int) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_2 (struct net_device*) ;
 struct net_device* FUNC_3 (struct net*,int ,struct ip_tunnel_parm*) ;
 int FUNC_4 (struct net_device*,int) ;
 int FUNC_5 (struct ip_tunnel_net*,struct ip_tunnel*) ;
 int FUNC_6 (struct net_device*) ;
 struct ip_tunnel* FUNC_7 (struct net_device*) ;
 int FUNC_8 (struct net_device*) ;

__attribute__((used)) static struct ip_tunnel *FUNC_9(struct net *VAR_2,
       struct ip_tunnel_net *VAR_3,
       struct ip_tunnel_parm *VAR_4)
{
 struct ip_tunnel *VAR_5;
 struct net_device *VAR_6;
 int VAR_7;
 int VAR_8;
 int VAR_9;

 VAR_6 = FUNC_3(VAR_2, VAR_3->rtnl_link_ops, VAR_4);
 if (FUNC_2(VAR_6))
  return FUNC_0(VAR_6);

 VAR_8 = FUNC_6(VAR_6);
 VAR_9 = FUNC_4(VAR_6, VAR_8);
 if (VAR_9)
  goto err_dev_set_mtu;

 VAR_5 = FUNC_7(VAR_6);
 VAR_7 = VAR_5->hlen + sizeof(struct iphdr);
 VAR_6->min_mtu = VAR_0;
 VAR_6->max_mtu = VAR_1 - VAR_6->hard_header_len - VAR_7;
 FUNC_5(VAR_3, VAR_5);
 return VAR_5;

err_dev_set_mtu:
 FUNC_8(VAR_6);
 return FUNC_1(VAR_9);
}
